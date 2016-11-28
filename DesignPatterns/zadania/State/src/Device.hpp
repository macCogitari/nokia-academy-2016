#pragma once
#include <string>
#include <memory>

class Device
{
public:
    Device();

    void runTask(std::string taskName);
    void stopTask();
    void coolDown();
private:
    std::string taskName;
    bool isRunning = false;
    bool isOverheated = false;
};

