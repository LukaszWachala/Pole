#include "objetosc.h"
#include <iostream>

using namespace std;

void objetosc::oblicz(double a, double b, double H)
{
    wynik=a*b*H;
    cout <<"Objetosc : " <<wynik <<endl;
}
