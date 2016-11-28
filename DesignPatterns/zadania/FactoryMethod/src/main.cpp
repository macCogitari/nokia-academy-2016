#include <iostream>
#include <memory>
#include "IPhone.hpp"
#include "GsmPhone.hpp"
#include "WcdmaPhone.hpp"
#include "LtePhone.hpp"

const Phone::PhoneNumber PHONE_NO = 123456789;

class Factory{
public:
    std::unique_ptr<Phone::IPhone> create(int i){
        std::unique_ptr<Phone::IPhone> p;
        switch (i) {
            case 1: p = std::unique_ptr<Phone::IPhone>(new Phone::GsmPhone());
                    break;
            case 2: p = std::unique_ptr<Phone::IPhone>(new Phone::WcdmaPhone());
                    break;
            case 3: p = std::unique_ptr<Phone::IPhone>(new Phone::LtePhone());
                    break;
            default:
                    std::cerr << "Unknown phone type!" << std::endl;
        }
        return p;
    }
};

int main()
{
    int phoneType = -1;
    std::cout << "What phone? 1: GSM, 2: WCDMA, 3: LTE" << std::endl;
//    std::cin >> phoneType;
    Factory f;
    int i = 1;
    std::unique_ptr<Phone::IPhone> phone = std::move(f.create(i));


    phone->makeCall(PHONE_NO);
    phone->sendMessage(PHONE_NO, "Hello there!");
    return 0;
}
