#pragma once
#include "DeviceState.hpp"

namespace FSM
{

class DeviceStateOverheated : public DeviceState
{
public:
    DeviceStateOverheated(StateTransitionFunc stateTansitionFunc,
                          std::shared_ptr<std::string> taskName);
    void runTask(std::string name) override;
    void stopTask() override;
    void coolDown() override;
};

}
