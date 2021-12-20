#include"ConcreteAirBus.h"
Wheel AirBusBuilder::getWheel()
{
    Wheel wheel;
    wheel.getNumber() = 15;
    wheel.getSize() = 29.3;
    return wheel;
}

Engine* AirBusBuilder::getEngine()
{
    Engine* engine = new JetEngine(15.3,41516,2);
    return engine;
}

Body AirBusBuilder::getBody()
{
    Body body("cylinder", 300);
    return body;
}