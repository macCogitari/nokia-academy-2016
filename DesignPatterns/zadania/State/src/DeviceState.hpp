#pragma once
#include <string>
#include <functional>
#include <iostream>
#include <memory>

namespace FSM
{

enum State
{
    OFF = 1,
    RUN = 2,
    OVERHEATED = 3
};


typedef std::function<void (State)> StateTransitionFunc;

class DeviceState
{
public:
    DeviceState(StateTransitionFunc stateTansitionFunc,
                std::shared_ptr<std::string> taskName);

    virtual void runTask(std::string name) = 0;
    virtual void stopTask() = 0;
    virtual void coolDown() = 0;

    virtual ~DeviceState();

private:
   StateTransitionFunc stateTansitionFunc;

protected:
    void stateTransition(State newState);
    std::shared_ptr<std::string> taskName;
};

}

