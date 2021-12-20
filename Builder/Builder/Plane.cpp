#include"Plane.h"
Plane::Plane() {
    _numberOfWheel = 0;
    _numberOfEngine = 0;
}
void Plane::specifications()
{
    _body.print();
    cout << "Number Of Engine: " << _numberOfEngine << "\n";
    for (int i = 0; i < _numberOfEngine; i++) {
        cout << "Engine " << i+1 << "\n";
        _engine[i]->print();
    }
    cout << "Number Of Wheel: " << _numberOfWheel << "\n";
    _wheels->print();
}
Plane::~Plane() {
    for (int i = 0; i < _numberOfEngine; i++) {
        delete _engine[i];
    }
    delete[] _engine;
    delete[] _wheels;
}