#pragma once
#include "DeviceState.hpp"

namespace FSM
{

class DeviceStateOff : public DeviceState
{
public:
    DeviceStateOff(StateTransitionFunc stateTansitionFunc,
                   std::shared_ptr<std::string> taskName);
    void runTask(std::string name) override;
    void stopTask() override;
    void coolDown() override;
};

}
