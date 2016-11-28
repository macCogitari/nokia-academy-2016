#include "DeviceStateOverheated.hpp"
#include <iostream>

namespace FSM
{

DeviceStateOverheated::DeviceStateOverheated(StateTransitionFunc stateTansitionFunc,
                                             std::shared_ptr<std::string> sharedTaskName)
    :DeviceState(stateTansitionFunc, sharedTaskName)
{
}

void DeviceStateOverheated::runTask(std::string name)
{
    //implement me ...
}

void DeviceStateOverheated::stopTask()
{
    //implement me ...
}

void DeviceStateOverheated::coolDown()
{
    //implement me ...
}

}
