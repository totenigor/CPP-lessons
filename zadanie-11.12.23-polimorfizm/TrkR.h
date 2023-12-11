#pragma once
#include <iostream>
#include "figura.h"
using namespace std;

class TrojkatR :public Figura
{
    private:
        float h;
        float a;
        string nazwa;
    public:
        TrojkatR(float h, float a, string nazwa);
        virtual void oblObwod();
        virtual void oblPole();
};