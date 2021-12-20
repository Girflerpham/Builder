#ifndef _BODY_H_
#define _BODY_H_
#include<iostream>
#include<string>
using namespace std;
class Body
{
private:
    string _shape;
    int _numberOfSeat;
public:
    Body() ;
    Body(string shape, int numberOfSeat);
    int& getNumberOfSeats();
    string& getShape();
    void print();
};
#endif // !_BODY_H_
