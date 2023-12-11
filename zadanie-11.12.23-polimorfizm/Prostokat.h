#pragma once
#include <iostream>
#include "figura.h"
using namespace std;

class Prostokat :public Figura
{
    private:
        float x;
        float y;
        string nazwa;
    public:
        Prostokat(float x, float y, string nazwa);
        virtual void oblObwod();
        virtual void oblPole();
};