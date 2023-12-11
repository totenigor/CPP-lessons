#include <iostream>
#include "figura.h"
#include "TrkR.h"
#include "Prostokat.h"
using namespace std;

int main(int argc, char const *argv[])
{
    // TrojkatR tr(2,2);
    // Prostokat k(2,3);

    // Figura *wsk;
    // wsk = &tr;
    // wsk -> oblPole();
    // wsk -> oblObwod();

    // wsk = &k;
    // wsk -> oblPole();
    // wsk -> oblObwod();




    int n = 10;
    Figura **tabela = new Figura*[n];
    tabela[0] = new Prostokat(2,3,"a");
    tabela[0]->oblPole();
    tabela[0]->oblObwod();
    tabela[1] = new Prostokat(4,3,"b");
    tabela[1]->oblPole();
    tabela[1]->oblObwod();
    tabela[2] = new Prostokat(5,3,"c");
    tabela[2]->oblPole();
    tabela[2]->oblObwod();
    tabela[3] = new TrojkatR(5,4,"siaba");
    tabela[3]->oblPole();
    tabela[3]->oblObwod();
    tabela[4] = new TrojkatR(5.5,6.5,"daba");
    tabela[4]->oblPole();
    tabela[4]->oblObwod();

    return 0;
}
