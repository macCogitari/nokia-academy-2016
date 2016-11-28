#pragma once

template<typename T>
class MySmartPtr
{
private:
    T* ptr;
public:
    MySmartPtr(T* objectToManage);
    ~MySmartPtr();
    T& operator* ();
    T* operator->();
};

template<typename T>
MySmartPtr<T>::MySmartPtr(T *objectToManage)
{
//    delete ptr;
//    ptr = nullptr;
    ptr = objectToManage;
}

template<typename T>
MySmartPtr<T>::~MySmartPtr()
{
    delete ptr;
    ptr = nullptr;
}

template<typename T>
T* MySmartPtr<T>::operator->()
{
     return ptr;
}

template<typename T>
T& MySmartPtr<T>::operator*()
{
      return *ptr;
}
