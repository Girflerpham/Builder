#include"Director.h"
#include"ConcreteAirBus.h"
#include"ConcreteBoeing.h"
int main()
{
    Plane* plane; // Final product

    /* A director who controls the process */
    Director director;

    /* Concrete builders */
    BoeingBuilder *boeingBuilder = new BoeingBuilder;
    AirBusBuilder *airbusBuilder = new AirBusBuilder;

    /* Build a Boeing  */
    cout << "Boeing - Builder " << endl;
    director.setBuilder(boeingBuilder); // using Boeing Builder instance
    plane = director.getPlane();
    plane->specifications();

    cout << endl;

    /* Build a AirBus */
    cout << "AirBus - Builder " << endl;
    director.setBuilder(airbusBuilder); // using AirBus Builder instance
    plane = director.getPlane();
    plane->specifications();


    delete plane;
    delete boeingBuilder;
    return 0;
}