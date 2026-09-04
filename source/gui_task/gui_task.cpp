#include "gui_task.hpp"
#include <cstring>

#ifdef __cplusplus
extern "C" {
#endif

#include "fsl_debug_console.h"
#include "ewmain.h"
#include "ewrte.h"
#include "ew_bsp_system.h"
#include "ew_bsp_console.h"


#ifdef __cplusplus
}
#endif


void GuiTask::init()
{
    // lv_init();
    // BOARD_InitDisplay(); BOARD_InitTouch();
    // Build the screen(s) and widgets here, e.g.:
    //   lv_obj_t* upgradeBtn = lv_btn_create(scr);
    //   lv_obj_add_event_cb(upgradeBtn, [](lv_event_t* e){
    //       static_cast<GuiTask*>(lv_event_get_user_data(e))->onUpgradeButtonPressed();
    //   }, LV_EVENT_CLICKED, this);
    //   (same pattern for the "Export logs" button -> onExportLogsButtonPressed)
    /* initialize system */
	EwBspSystemInit();

    /* initialize console interface for debug messages */
    // EwBspConsoleInit();
	PRINTF("Create UI thread...\r\n");
}

void GuiTask::run()
{
    AppStatusEvent evt;

    if ( EwInit() == 0 )
        return;

	EwPrintSystemInfo();

	/* process the Embedded Wizard main loop */
	while(EwProcess());

#if 0
    for (;;) {
        // Short timeout so the LVGL tick handler still gets pumped even
        // when no status events are pending.
        if (g_guiEventQueue.receive(evt, os::Duration::milliseconds(10))) {
            handleStatusEvent(evt);
        }
        // lv_timer_handler();   // process LVGL redraw + input, non-blocking
    }
#endif
    /* de-initialize Embedded Wizard application */
    EwDone();
}

void GuiTask::handleStatusEvent(const AppStatusEvent& evt)
{
    switch (evt.source) {
        case AppEventSource::UPGRADE_TASK:
            // e.g. update an upgrade progress bar / modal dialog:
            //   updateUpgradeDialog(evt.status, evt.percent, evt.errorCode);
            break;
        case AppEventSource::LOGGER_TASK:
            // e.g. update the "exporting logs..." dialog
            //   updateExportDialog(evt.status, evt.percent, evt.errorCode);
            break;
        case AppEventSource::UART_TASK:
            // e.g. flip a peer-link connected/disconnected icon
            break;
    }
}

void GuiTask::onUpgradeButtonPressed()
{
    UpgradeMsg msg{};
    msg.cmd = UpgradeCmd::START_FROM_USB;
    std::strncpy(msg.filename, "/usb/firmware.bin", sizeof(msg.filename) - 1);
    // Short timeout, not forever(): GUI must never block on a full
    // worker queue, it should just drop/toast an error instead.
    g_upgradeQueue.send(msg, os::Duration::milliseconds(50));
}

void GuiTask::onExportLogsButtonPressed()
{
    LogEventMsg msg{};
    msg.cmd = LoggerCmd::EXPORT_TO_USB;
    g_loggerQueue.send(msg, os::Duration::milliseconds(50));
}
