#include "DeviceStateOff.hpp"
#include <iostream>

namespace FSM
{

DeviceStateOff::DeviceStateOff(StateTransitionFunc stateTansitionFunc,
                               std::shared_ptr<std::string> sharedTaskName)
    :DeviceState(stateTansitionFunc, sharedTaskName)
{
}

void DeviceStateOff::runTask(std::string name)
{
    //implement me ...
}

void DeviceStateOff::stopTask()
{
    //implement me ...
}


void DeviceStateOff::coolDown()
{
    //implement me ...
}

}
