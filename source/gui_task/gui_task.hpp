#pragma once

#include <app_priorities.hpp>
#include <app_types.hpp>

#include "osal/task.hpp"

class GuiTask : public os::Task
{
public:

    GuiTask()
        : os::Task(
            "GUI",
            app::stack::kGui,
            app::priority::kGui)
    {
    }

protected:

    void init() override;
    void run() override;

private:

    void handleStatusEvent(const AppStatusEvent& evt);

    void onUpgradeButtonPressed();
    void onExportLogsButtonPressed();
};