#include <iostream>
#include "Prostokat.h"
#include <string>
using namespace std;

Prostokat::Prostokat(float x, float y,string nazwa):Figura(){
    this->x = x;
    this->y = y;
    this->nazwa = nazwa;
};

void Prostokat::oblPole()
{
    cout<<"Pole Prostokatu o nazwie '"<<nazwa<<"' to: "<<to_string(x*y)<<endl;
    pole = x*y;
};

void Prostokat::oblObwod()
{
    cout<<"Obwod Prostokatu o nazwie '"<<nazwa<<"' to: "<<to_string((2*x)+(2*y))<<endl;
    obwod = (2*x)+(2*y);
};