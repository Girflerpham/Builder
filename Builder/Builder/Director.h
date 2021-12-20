#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_
#include"Builder.h"
#include"Plane.h"
class Director
{
    Builder* builder;

public:
    void setBuilder(Builder* newBuilder);
    Plane* getPlane();
    ~Director(){
        delete builder;
    }
};
#endif // !_DIRECTOR_H_
