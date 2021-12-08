/*
Dekariraj funkcijo za izracun ploscine kvadrata.
V glavnem programu vnesi N polmer.
Polmere shrani v tabelo Stranice, ploscine v tabelo Ploscine.
Isti index (isto mesto) v tabeli pomeni podatek za isti kvadrat.
*/

#include <iostream>
#include <cmath>
using namespace std;

float P, a, Ploscina;

float plKv(float a)
{
    P = pow(a, 2);
    return P;
};

void izpis(float s, float p)
{
    cout << s << "wtf" << p << endl;
}

int main()
{
    const int N = 10;
    float stranice[N] = {}, ploscine[N] = {};

    for (int i = 0; i < N; i++)
    {
        cout << "Vnesi " << i + 1 << ". to stevilo: ";
        cin >> a;

        Ploscina = P;
        stranice[i] = a;
        ploscine[i] = Ploscina;
    }
    for (int i = 0; i < N; i++)
    {
        izpis(stranice[i], ploscine[i]);
    }
    return 0;
}