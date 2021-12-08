/*Zapiši program, ki shrani vrednosti funkcije f(x)= (3x)^3-2x za soda števila med 11 in 111 v tabelo Vrednosti.
Izračuna in izpiše naj povprečno vrednost izračunanih vrednosti. Uporabi for zanko.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N = 999;
    int Vrednosti[N] = {};
    int x;
    float vsota = 0;
    float povprecje = 0;
    int vnosi = 0;

    for (int i = 12; i < 111; i++)
    {
        if (i % 2 == 0)
        {
            x = i;
            Vrednosti[i] = 3 * pow(x, 3) - 2 * x;
            cout << "Vrednost[" << i << "] za f(x) = " << x << " je " << Vrednosti[i] << endl;
            vsota += Vrednosti[i];
            vnosi += 1;
        }
    }
    povprecje = vsota / vnosi;
    cout << "-------------------------------" << endl;
    cout << "Povprecje stevil je: " << povprecje << endl;
    cout << "-------------------------------" << endl;

    return 0;
};
