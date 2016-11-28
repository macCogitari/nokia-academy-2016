#pragma once
#include <string>
#include <memory>
#include <map>
#include "DeviceState.hpp"

namespace FSM
{

class Device
{
public:
    Device();
    void runTask(std::string name) {currentState->runTask(name);}
    void stopTask() {currentState->stopTask();}
    void coolDown() {currentState->coolDown();}

private:
    std::map<State, std::shared_ptr<DeviceState>> allStates;
    std::shared_ptr<DeviceState> currentState;
};

}
