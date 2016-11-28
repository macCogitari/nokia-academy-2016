#include "Device.hpp"
#include "DeviceStateMachine.hpp"

int main()
{
    Device device;
    device.runTask("first task");
    device.runTask("second task");
    device.coolDown();
    device.runTask("third task");
    device.stopTask();
}
