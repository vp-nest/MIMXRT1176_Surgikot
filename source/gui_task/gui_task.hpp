#pragma once
//
// gui_task.hpp
// Owns the display/touch UI (assumed: LVGL). Never blocks on I/O itself --
// it only posts commands into g_upgradeQueue / g_loggerQueue and drains
// g_guiEventQueue for progress/result updates to reflect in the UI.
//
#include <app_priorities.hpp>
#include <app_types.hpp>

#include "osal/task.hpp"

class GuiTask : public os::Task {
public:
    GuiTask() : os::Task("GUI", app::stack::kGui, app::priority::kGui) {}

protected:
    void init() override;
    void run() override;

private:
    void handleStatusEvent(const AppStatusEvent& evt);

    // Wired up as LVGL button-click callbacks during init().
    void onUpgradeButtonPressed();
    void onExportLogsButtonPressed();
};
