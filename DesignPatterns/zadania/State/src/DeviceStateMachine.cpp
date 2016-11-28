#include "DeviceStateMachine.hpp"
#include "DeviceStateOff.hpp"
#include "DeviceStateRun.hpp"
#include "DeviceStateOverheated.hpp"

namespace FSM
{

Device::Device()
{
    StateTransitionFunc transition = [this](State state)
    {
        this->currentState = allStates[state];
    };

    auto sharedName = std::make_shared<std::string>();

    allStates[OFF] = std::make_shared<DeviceStateOff>(transition, sharedName);
    allStates[RUN] = std::make_shared<DeviceStateRun>(transition, sharedName);
    allStates[OVERHEATED] = std::make_shared<DeviceStateOverheated>(transition, sharedName);

    currentState = allStates[OFF];
}

}
