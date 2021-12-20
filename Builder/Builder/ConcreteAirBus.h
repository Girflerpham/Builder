#ifndef _AIRBUSBUILDER_H_
#define _AIRBUSBUILDER_H_
#include"Builder.h"
#include"JetEngine.h"
class AirBusBuilder : public Builder
{
public:
    Wheel getWheel();

    Engine* getEngine();

    Body getBody();
};
#endif // !_AIRBUSBUILDER_H_
