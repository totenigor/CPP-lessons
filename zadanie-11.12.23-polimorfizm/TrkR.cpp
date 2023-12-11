#include <iostream>
#include "TrkR.h"
#include <string>
using namespace std;

TrojkatR::TrojkatR(float h, float a, string nazwa):Figura(){
    this->h = h;
    this->a = a;
    this->nazwa = nazwa;
};

void TrojkatR::oblPole()
{
cout<<"Pole Trojkata rownobocznego o nazwie '"<<nazwa<<"' to: "<<to_string(0.5*a*h)<<endl;
};

void TrojkatR::oblObwod()
{
    cout<<"Obwod Trojkata rownobocznego o nazwie '"<<nazwa<<"' to: "<<to_string(3*a)<<endl;
};
