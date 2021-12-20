#include"Wheel.h"
float& Wheel::getSize() { return _size; }

int& Wheel::getNumber() { return _number; }

void Wheel::print() {
	std::cout << "front wheel size: " << _size << " inch" << "\n";
}