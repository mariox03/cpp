/*
Podani sta kateti a in b.
Deklariraj funkiji:
- ki kot rezultat vrne dolžino hipotenuze
- izpise rezultat v obliki a = *, b = *, c = *

V glavnem programu izvedi klica obeh funkcij, dolzini katete preberi s pomocjo tipkovnice
*/

#include <iostream>
#include <cmath>
using namespace std;

float hipotenuza(float a, float b)
{
    float c = sqrt(pow(a, 2) + pow(b, 2));
    return c;
}
float obseg(float a, float b, float c)
{
    float ob;
    ob = a + b + c;
    return ob;
}
void rezultat(float a, float b, float c, float o)
{
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", o = " << o << endl;
}

int main()
{
    float a, b, c, o;
    cout << "Prva kateta: ";
    cin >> a;
    cout << "Druga kateta: ";
    cin >> b;

    c = hipotenuza(a, b);
    o = obseg(a, b, c);

    rezultat(a, b, c, o);
    return 0;
};
