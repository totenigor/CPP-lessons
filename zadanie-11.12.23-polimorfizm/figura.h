#pragma once
#include <iostream>
using namespace std;

class Figura{
    protected:
        float pole;
        float obwod;
    public:
        virtual void oblObwod() = 0;
        virtual void oblPole() = 0;
        Figura(){};
};