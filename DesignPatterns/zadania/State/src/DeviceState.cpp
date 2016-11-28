#include "DeviceState.hpp"


namespace FSM
{
DeviceState::DeviceState(StateTransitionFunc stateTansitionFunc, std::shared_ptr<std::string> taskName)
    : stateTansitionFunc(stateTansitionFunc),
      taskName(taskName)
{}


DeviceState::~DeviceState(){}


void DeviceState::stateTransition(State newState)
{
    //std::cout << "DEBUGLOG: state transition to:" << newState << "\n";
    stateTansitionFunc(newState);
}

}
