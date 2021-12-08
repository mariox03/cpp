/*
Program naj prebere N celih pozitivnih stevil.
Z uporabo while zanke sestej vsoto lihih (in vsoto sodih) stevil.
Rezultat izpise.
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    int i;                    // ga preberemo
    int vslih = 0, vssod = 0; // stevec prebranih stevil
    unsigned int st;

    cout << "Vljudno te prosim, ce poskusis vnesti stevilo vnosov: ";
    cin >> N;
    i = 0; // zacetna vrednost, steti zacnemo z ena

    while (i <= N)
    {
        cout << "st= ";
        cin >> st;

        if (st % 2 == 1)
        {
            vslih += st;
        };
        if (st % 2 == 1)
        {
            vssod += st;
        };

        i++; // v zanki while povecamo stevec prebranih
    }
    cout << "vsota lihih= " << vslih << endl;
    cout << "vsota sodih= " << vssod << endl;
    return 0;
}
