/*
 * Copyright 2016-2026 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file    MIMXRT1176_Base_Project.cpp
 * @brief   Application entry point.
 */
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_debug_console.h"

#include "osal/scheduler.hpp"
#include "osal/assert.hpp"

#include "app_types.hpp"
#include "app_priorities.hpp"
#include "gui_task.hpp"
#include "usb_upgrade_task.hpp"
#include "logger_task.hpp"
#include "uart_comm_task.hpp"
#include "usb_host_manager.hpp"

/* Definitions of the extern os:: objects declared in app_types.hpp.
 * Construction alone doesn't create a native queue -- os::Queue<T>
 * requires an explicit create(capacity) call below, since capacity is a
 * runtime choice; os::EventGroup creates itself in its constructor since
 * it has no such parameter.
 */
os::Queue<UpgradeMsg>     g_upgradeQueue;
os::Queue<LogEventMsg>    g_loggerQueue;
os::Queue<UartTxMsg>      g_uartTxQueue;
os::Queue<AppStatusEvent> g_guiEventQueue;
os::EventGroup            g_sysEventGroup;

/* Statically allocated task objects -- no heap churn, and lifetime is
 * tied to the whole program, matching FreeRTOS task lifetime.
 */
static GuiTask        s_guiTask;
static UsbUpgradeTask  s_upgradeTask;
static LoggerTask      s_loggerTask;
static UartCommTask    s_uartTask;

/* UART ISR glue (see uart_comm_task.cpp) needs a reference to the task
 * instance without app code reaching back into FreeRTOS to find it.
 */
UartCommTask& g_uartCommTask = s_uartTask;

/*
 * @brief   Application entry point.
 */
int main(void) {

    /* Init board hardware. */
    BOARD_InitBootPins();
    BOARD_InitBootClocks();
    BOARD_InitBootPeripherals();
#ifndef BOARD_INIT_DEBUG_CONSOLE_PERIPHERAL
    /* Init FSL debug console. */
    BOARD_InitDebugConsole();
#endif

    PRINTF("\r\nSugikot Started...\r\n");
	bool queuesOk = g_upgradeQueue.create(4)
					 && g_loggerQueue.create(16)   // deepest: shared by every task
					 && g_uartTxQueue.create(8)
					 && g_guiEventQueue.create(8);
	os::debug::assertTrue(queuesOk);

	// Bring up the USB host stack first: this creates USB_HostTask and
	// USB_HostApplicationTask (see usb_host_manager.cpp) so they're
	// already running and servicing the controller before anything
	// could plug in a drive. UsbUpgradeTask/LoggerTask only ever *use*
	// UsbHostManager, they never start the stack themselves.
	os::debug::assertTrue(UsbHostManager::instance().init());

	// Logger starts first: every other task may want to log a boot event
	// immediately, so its queue must be alive and being drained already.
	s_loggerTask.start();
	s_uartTask.start();
	s_upgradeTask.start();
	s_guiTask.start();
	PRINTF("Tasks Started...\r\n");
	PRINTF("Free heap size: %d\r\n", xPortGetFreeHeapSize());

	os::scheduler::start();

    /* Force the counter to be placed into memory. */
    volatile static int i = 0 ;
    /* Enter an infinite loop, just incrementing a counter. */
    while(1) {
        i++ ;
        /* 'Dummy' NOP to allow source level single stepping of
            tight while() loop */
        __asm volatile ("nop");
    }
    return 0 ;
}
