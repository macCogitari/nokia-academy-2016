#include "Clients.hpp"
#include <iostream>

Chart::Chart(Observer& obs)
    : _obs(obs)
{
    std::function<void ()> func = std::bind(&Chart::plot, this);
    id = _obs.subscribe(func);
}

Calculator::Calculator(Observer& obs)
    :_obs(obs)
{
    std::function<void ()> func = std::bind(&Calculator::recalculate, this);
    id = _obs.subscribe(func);
}

EmailSender::EmailSender(Database &db, Observer& obs)
    :database(db), _obs(obs)
{
    std::function<void ()> func = std::bind(&EmailSender::send, this);
    id = _obs.subscribe(func);
}

void Calculator::recalculate()
{
//    std::cout << "Calculator::recalculate()   " << database.getData("calculator") << "\n";
}

void EmailSender::send()
{
    std::cout << "EmailSender::send()   " << database.getData("email") << "\n";
}

void Chart::plot()
{
//    std::cout << "Chart::plot()   " << database.getData("chart") << "\n";
}
