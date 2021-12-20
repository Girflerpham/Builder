#ifndef _PROPELLERENGINE_H_
#define _PROPELLERENGINE_H_

#include"Engine.h"

class PropellerEngine : public Engine {
private:
	int _numberofpropeller;
public:
	PropellerEngine(int Npropeller, float horsepower, int num) :Engine("Propeller", horsepower, num) {
		_numberofpropeller = Npropeller;
	}
	void print() {
		Engine::print();
		cout << "Number of Propeller: " << _numberofpropeller << "\n";
	}
};
#endif // !_PROPELLERENGINE_H_
