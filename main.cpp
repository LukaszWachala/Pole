#include <iostream>
#include "pole.h"
#include "objetosc.h"

using namespace std;

int main()
{
    pole p1;
    objetosc p2;
    double a, b ,h;
    cout<<"Podaj dlugosc a: "; cin>>a;
    cout<<"Podaj dlugosc b: "; cin>>b;
    cout<<"Podaj dlugosc H: "; cin>>h;

    p1.oblicz(a,b);
    p2.oblicz(a,b,h);    

    return 0;
}
