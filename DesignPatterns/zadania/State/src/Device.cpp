#include "Device.hpp"
#include <iostream>

Device::Device()
{

}

void Device::runTask(std::string taskName)
{
    if(isRunning)
    {
        std::cout << "Can't run: " << taskName << " , because " << this->taskName << "is running now. Device is overheated!\n";
        isOverheated = true;
        isRunning = false;
        return;
    }
    if(isOverheated)
    {
        std::cout << "Can't run: " << taskName << " , because device is overheated\n";
        return;
    }

    this->taskName = taskName;
    isRunning = true;
    std::cout << "Started task: " << this->taskName << "\n";

}

void Device::stopTask()
{
    if(isRunning)
    {
        std::cout << taskName << " stopped!\n";
        isRunning = false;
        return;
    }
	if(isOverheated)
    {
        std::cout << "No task to stop. Device is overheated\n";
        return;
    }
    std::cout << "No task to stop.\n";
}


void Device::coolDown()
{
    std::cout << "Cooling down\n";
    isOverheated = false;

}
