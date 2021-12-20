#include"Engine.h"
Engine::Engine() {
    _type = " ";
    _horsepower = 0;
    _numberOfEngine = 0;
}
Engine::Engine(string type, float horsepower, int num) {
    _type = type;   
    _horsepower = horsepower;
    _numberOfEngine = num;
}
float& Engine::getPower() { return _horsepower; }
string& Engine::getType() { return _type; }
int& Engine::getNumber() { return _numberOfEngine; }
void Engine::print() {
    cout << "Engine Type:" << _type << endl;
    cout << "Engine Power:" << _horsepower << " hp / engine" << endl;
};