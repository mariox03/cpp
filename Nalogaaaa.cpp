/*
a) Deklariraj funkcijo, s katero izracunas prostornino tetraedra, ce je podana stranica a.
Namesto stevila koren(2) uporabi konstanto 1,4142, prostornino izracunas po formuli v = koren(2) ulomeljeno 12 * pow(a,3)
b) Deklariraj funkcijo za ispis podatka in rezultata. Izpis naj se izvrsi znotraj zanke.
c) V glavnem programu s pomocjo prej deklarirane funkcije racunas volumne tetraedrov toliko casa, dokler je vnesena dolzina stranice dolzina stranice vecja od nic (while zanka). Vnos dolzin stranic se vrsi preko tipkovnice. Velikost stranic in izracunami razultati naj se sproti izpisujejo na ekran.
*/
#include <iostream>
#include <cmath>
using namespace std;

float v, a;
const float kor = 1.4142;

float prostornina(float a)
{
    v = (kor / 12) * pow(a, 3);
    return v;
}

void izpis(float a, float v)
{
    cout << "Stranica a je " << a << endl;
    cout << "Prostornina je " << v << endl;
}
int main()
{
    float pro;
    cout << "Vnesi stranico a." << endl;
    cin >> a;

    while (a > 0)
    {
        pro = prostornina(a);
        izpis(a, pro);
        cout << "Vnesi stranico a." << endl;
        cin >> a;
    }

    return 0;
}