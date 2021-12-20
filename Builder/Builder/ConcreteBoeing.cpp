#include"ConcreteBoeing.h"
Wheel BoeingBuilder::getWheel()
{
    Wheel wheel;
    wheel.getNumber() = 12;
    wheel.getSize() = 27.2;
    return wheel;
}

Engine* BoeingBuilder::getEngine()
{
    Engine* engine = new PropellerEngine(5, 30256, 1);
    return engine;
}

Body BoeingBuilder::getBody()
{
    Body body("cylinder", 250);
    return body;
}