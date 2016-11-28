#pragma once
#include "Database.hpp"
#include "Observer.hpp"

class Chart
{
public:
    Chart(Observer& obs);
    ~Chart(){
        _obs.unsubscribe(id);
    }

    void plot();
private:
//    Database& database;
    Observer& _obs;
    unsigned id;
};

class Calculator
{
public:
    Calculator(Observer& obs);
    ~Calculator(){
        _obs.unsubscribe(id);
    }
    void recalculate();
private:
//    Database& database;
    unsigned id;
    Observer& _obs;
};

class EmailSender
{
public:
    EmailSender(Database& db, Observer& obs);
    ~EmailSender(){
        _obs.unsubscribe(id);
    }
    void send();
private:
    Database& database;
    unsigned id;
    Observer& _obs;
};
