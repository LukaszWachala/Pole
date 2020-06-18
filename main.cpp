#include <iostream>
#include "pole.h"
#include "objetosc.h"

using namespace std;

int main()
{
    pole p;
    objetosc o;
    double a, b ,h;
    cout<<"Podaj dlugosc a: "; cin>>a;
    cout<<"Podaj dlugosc b: "; cin>>b;
    cout<<"Podaj dlugosc H: "; cin>>h;
    
    cout<<"Prostokat(podstawa)" <<endl;
    p.oblicz(a,b);
    cout<<"Prostopadloscian" <<endl;
    p.oblicz_siatke(a,b,h);
    o.oblicz(a,b,h);    

    return 0;
}
