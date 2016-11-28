#pragma once
#include "DeviceState.hpp"
#include <string>
#include <memory>

namespace FSM
{

class DeviceStateRun : public DeviceState
{
public:
    DeviceStateRun(StateTransitionFunc stateTansitionFunc,
                   std::shared_ptr<std::string> taskName);
    void runTask(std::string name) override;
    void stopTask() override;
    void coolDown() override;
};

}
