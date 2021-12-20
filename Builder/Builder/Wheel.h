#ifndef _WHEEL_H_
#define _WHEEL_H_

#include<iostream>

class Wheel
{
private:
    float _size;
    int _number;
public:
    float& getSize();
    int& getNumber();
    void print();
};

#endif // !_WHEEL_H_
