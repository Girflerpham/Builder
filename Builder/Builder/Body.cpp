#include"Body.h"
Body::Body() {
    _shape = " ";
    _numberOfSeat = 0;
};
Body::Body(string shape, int numberOfSeat) {
    _shape = shape;
    _numberOfSeat = numberOfSeat;
}
int& Body::getNumberOfSeats() { return _numberOfSeat; }
string& Body::getShape() { return _shape; }
void Body::print() {
    cout << "Body:" << _shape << "\n" << "Seats: " << _numberOfSeat << "\n";
}