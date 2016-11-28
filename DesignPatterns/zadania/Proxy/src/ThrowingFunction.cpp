#include "ThrowingFunction.hpp"
#include "HeavyClass.hpp"
#include "MySmartPtr.hpp"


#include <stdexcept>

void throwingFunction()
{

    HeavyClass* aaa = new HeavyClass();
    MySmartPtr<HeavyClass> aHeavyInstance(aaa);
    aHeavyInstance->printMe();
    (*aHeavyInstance).printMe();

    throw std::runtime_error("Some error");

    delete(aHeavyInstance);
}
