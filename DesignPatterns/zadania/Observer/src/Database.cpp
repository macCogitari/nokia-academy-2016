#include "Database.hpp"
#include "Clients.hpp"
#include <iostream>

Database::Database(Observer& obs)
    : data("dummy data"), _obs(obs)
{
//    _obs = nullptr;
//    _obs = obs;
}

void Database::initialize()
{
//    _obs = obs;
//    chartHandler = chart;
//    calculatorHandler = calculator;
//    emailSenderHandler = emailSender;
}

void Database::changeData(std::string newData)
{
    data = newData;
    onChange();
}

void Database::onChange()
{
  _obs.notify();
//  chartHandler->plot();
//  calculatorHandler->recalculate();
//  emailSenderHandler->send();
}

std::string Database::getData(std::string query)
{
    return "data for " + query + " is: " + data;
}
