#include "gui_task.hpp"

#include <cstring>

#include "FreeRTOS.h"
#include "task.h"

#ifdef __cplusplus
extern "C" {
#endif

#include "fsl_debug_console.h"

#include "ewmain.h"
#include "ewrte.h"
#include "ew_bsp_system.h"
#include "ew_bsp_console.h"

/*
 * Generated Embedded Wizard Application API
 */
#include "Application.h"

#ifdef __cplusplus
}
#endif


/*----------------------------------------------------------
 * Surgery backend test data
 *---------------------------------------------------------*/

static TickType_t surgeryStartTick = 0;
static bool surgeryStarted = false;
static bool surgeryCompleteEvent = false;


/*----------------------------------------------------------
 * Called from Embedded Wizard when START is pressed
 *---------------------------------------------------------*/

extern "C" void Gui_StartSurgery(void)
{
    surgeryStartTick = xTaskGetTickCount();

    surgeryStarted = true;
    surgeryCompleteEvent = false;

    PRINTF("Surgery Started\r\n");
}


/*----------------------------------------------------------
 * Backend surgery timing
 *---------------------------------------------------------*/

static void CheckSurgeryStatus(void)
{
    if (!surgeryStarted)
    {
        return;
    }

    TickType_t elapsed =
        xTaskGetTickCount() - surgeryStartTick;


    /*
     * Test:
     * Complete surgery after 1 minute.
     */
    if (elapsed >= pdMS_TO_TICKS(60000))
    {
        surgeryStarted = false;
        surgeryCompleteEvent = true;

        PRINTF("Backend: Surgery Complete\r\n");
    }
}

extern "C" void MockSaveConfig(const char* configJson)
{
    if (configJson == nullptr)
        return;

    PRINTF("\r\n========== CONFIG JSON ==========\r\n");
    PRINTF("%s\r\n", configJson);
    PRINTF("=================================\r\n");
}


/*----------------------------------------------------------
 * Backend -> Embedded Wizard
 *---------------------------------------------------------*/

static void ProcessSurgeryEvent(void)
{
    /*
     * No event pending.
     */
    if (!surgeryCompleteEvent)
    {
        return;
    }


    /*
     * Consume event once.
     */
    surgeryCompleteEvent = false;

    PRINTF("Sending Surgery Complete event to UI\r\n");


    /*
     * Get Embedded Wizard Device autoobject.
     */
    ApplicationDeviceClass device =
        EwGetAutoObject(
            &ApplicationDevice,
            ApplicationDeviceClass
        );


    /*
     * Set:
     *
     * Application::Device.SurgeryCompleted = true;
     */
    ApplicationDeviceClass_OnSetSurgeryCompleted(
        device,
        1
    );
}


/*----------------------------------------------------------
 * GUI task initialization
 *---------------------------------------------------------*/

void GuiTask::init()
{
    EwBspSystemInit();

    PRINTF("Create UI thread...\r\n");
}


/*----------------------------------------------------------
 * GUI task
 *---------------------------------------------------------*/

void GuiTask::run()
{
    AppStatusEvent evt;


    /*
     * Initialize Embedded Wizard.
     */
    if (EwInit() == 0)
    {
        return;
    }


    EwPrintSystemInfo();


    /*
     * Embedded Wizard main loop.
     */
    while (EwProcess())
    {
        /*
         * Check backend timing.
         */
        CheckSurgeryStatus();


        /*
         * Process backend -> UI event.
         */
        ProcessSurgeryEvent();
    }


    /*
     * Shutdown Embedded Wizard.
     */
    EwDone();
}


/*----------------------------------------------------------
 * Existing application event handler
 *---------------------------------------------------------*/

void GuiTask::handleStatusEvent(const AppStatusEvent& evt)
{
    switch (evt.source)
    {
        case AppEventSource::UPGRADE_TASK:
        {
            break;
        }


        case AppEventSource::LOGGER_TASK:
        {
            break;
        }


        case AppEventSource::UART_TASK:
        {
            break;
        }
    }
}


/*----------------------------------------------------------
 * Existing Upgrade button
 *---------------------------------------------------------*/

void GuiTask::onUpgradeButtonPressed()
{
    UpgradeMsg msg{};

    msg.cmd = UpgradeCmd::START_FROM_USB;

    std::strncpy(
        msg.filename,
        "/usb/firmware.bin",
        sizeof(msg.filename) - 1
    );


    g_upgradeQueue.send(
        msg,
        os::Duration::milliseconds(50)
    );
}


/*----------------------------------------------------------
 * Existing Export Logs button
 *---------------------------------------------------------*/

void GuiTask::onExportLogsButtonPressed()
{
    LogEventMsg msg{};

    msg.cmd = LoggerCmd::EXPORT_TO_USB;


    g_loggerQueue.send(
        msg,
        os::Duration::milliseconds(50)
    );
}