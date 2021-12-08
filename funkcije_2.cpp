/*Deklariraj funkcije za:
- obseg pravokotnika
- ploscino pravokotnika
- diagonalo pravokotnika
- izpis podatkov in rezultatov (void)
*/
#include <iostream>
#include <cmath>
using namespace std;

float obseg(float a, float b)
{
    float o;
    o = 2 * (a + b);
    return o;
}
float ploscina(float a, float b)
{
    float pl;
    pl = a * b;
    return pl;
}
float dia(float a, float b)
{
    float dia;
    dia = sqrt(pow(a, 2) + pow(b, 2));
    return dia;
}

void izpis(float a, float b, float O, float P, float d)
{
    cout << "a = " << a << ", b = " << b << endl;
    cout << "o = " << O << ", P = " << P << ", d = " << d << endl;
}

int main()
{
    float Ob, Pl, di, stra, strb;

    cout << "Prva stranica: ";
    cin >> stra;
    cout << "Druga stranica: ";
    cin >> strb;

    Ob = obseg(stra, strb);
    Pl = ploscina(stra, strb);
    di = dia(stra, strb);
    izpis(stra, strb, Ob, Pl, di);
    //ker ne vraca rezultata, ni prireditve

    return 0;
};
