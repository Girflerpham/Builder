#ifndef _BOEINGBUILDER_H_
#define _BOEINGBUILDER_H_
#include"Builder.h"
#include"PropellerEngine.h"
class BoeingBuilder : public Builder
{
public:
    Wheel getWheel();

    Engine* getEngine();

    Body getBody();
};
#endif // !_BOEINGBUILDER_H_
