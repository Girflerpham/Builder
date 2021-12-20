#ifndef _BUILDER_H_
#define _BUILDER_H_
#include"Engine.h"
#include"Body.h"
#include"Wheel.h"
class Builder
{
public:
    virtual Wheel getWheel() = 0;
    virtual Engine *getEngine() = 0;
    virtual Body getBody() = 0;
    virtual ~Builder() {};
};
#endif // !_BUILDER_H_
