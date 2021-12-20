#ifndef _PLANE_H_
#define _PLANE_H_
#include<iostream>
#include<string>
#include"Engine.h"
#include"Body.h"
#include"Wheel.h"
using namespace std;
class Plane
{
private:
    Wheel* _wheels;
    int _numberOfWheel;
    Engine** _engine;
    int _numberOfEngine;
    Body _body;
public:
    Plane();
    Wheel*& getWheel() { return _wheels; }
    Engine**& getEngine() { return _engine; }
    Body& getBody() { return _body; }
    int& getNumberOfEngine() { return _numberOfEngine; }
    int& getNumberOfWheel() { return _numberOfWheel; }
    void specifications();
    ~Plane();
};
#endif // !_PLANE_H_
