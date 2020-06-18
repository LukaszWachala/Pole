#include "pole.h"
#include <iostream>

using namespace std;

void pole::oblicz(double a, double b)
{
    wynik=a*b;
    cout <<"Pole: "<<wynik <<endl;
}

void pole::oblicz_siatke(double a, double b, double h)
{
    wynik=2*a*b+2*a*h+2*b*h;
    cout <<"Pole siatki: "<<wynik <<endl;
}
