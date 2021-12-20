#ifndef _ENGINE_H_
#define _ENGINE_H_

#include <iostream>
#include <string>
using namespace std;

class Engine {
private:
    string _type;
    float _horsepower;
    int _numberOfEngine;
public:
    Engine();
    Engine(string type, float horsepower, int num);
    float& getPower();
    string& getType();
    int& getNumber();
    virtual void print();
    virtual ~Engine() {};
};


#endif // !_ENGINE_H_
