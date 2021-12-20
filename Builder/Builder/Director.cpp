#include"Director.h"
void Director::setBuilder(Builder* newBuilder)
{
    builder = newBuilder;
}
Plane* Director::getPlane()
{
    Plane* plane = new Plane();
    plane->getNumberOfWheel() = builder->getWheel().getNumber();
    plane->getNumberOfEngine() = builder->getEngine()->getNumber();
    plane->getEngine() = new Engine*[plane->getNumberOfWheel()];
    plane->getWheel() = new Wheel[plane->getNumberOfWheel()];
    for (int i = 0; i < plane->getNumberOfEngine(); i++) {
        plane->getEngine()[i] = builder->getEngine();
    }
    for (int i = 0; i < plane->getNumberOfWheel(); i++) {
        plane->getWheel()[i] = builder->getWheel();
    }
    plane->getBody() = builder->getBody();
    return plane;
}
