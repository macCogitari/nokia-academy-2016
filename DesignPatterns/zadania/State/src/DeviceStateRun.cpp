#include "DeviceStateRun.hpp"
#include <iostream>

namespace FSM
{

DeviceStateRun::DeviceStateRun(StateTransitionFunc stateTansitionFunc,
                               std::shared_ptr<std::string> sharedTaskName)
    : DeviceState(stateTansitionFunc, sharedTaskName)

{
}

void DeviceStateRun::runTask(std::string name)
{
    //implement me ...
}

void DeviceStateRun::stopTask()
{
    //implement me ...
}

void DeviceStateRun::coolDown()
{
    //implement me ...
}

}
