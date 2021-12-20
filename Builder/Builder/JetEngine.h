#ifndef _JETENGINE_H_
#define _JETENGINE_H_

#include"Engine.h"
class JetEngine : public Engine {
private:
	float _radiusOfNozzle;
public:
	JetEngine(float radius ,float horsepower, int num) : Engine("Jet",horsepower,num) {
		_radiusOfNozzle = radius;
	};
	void print() {
		Engine::print();
		cout << "Radius of Nozzle: " << _radiusOfNozzle << " inch\n";
	}
};
#endif // !_JETENGINE_H_
