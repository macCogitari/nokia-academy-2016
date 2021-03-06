#pragma once

#include <string>
#include "Observer.hpp"

class Chart;
class Calculator;
class EmailSender;



class Database
{
public:
    Database(Observer& obs);
    void initialize(); //try to remove second constructor!
    void changeData(std::string newData);
    std::string getData(std::string query);


private:
    void onChange();

    std::string data;
    Observer& _obs;

//    Chart* chartHandler;              //
//    Calculator* calculatorHandler;    //   try to remove these unlogic dependencies
//    EmailSender* emailSenderHandler;  //
};
