/*
1. Deklariraj tabelo, z imenom Cela,
v kateri bo shranjenih najvec 15 celih stevil.
2. S pomocjo for zanke v tabelo vnesi stevila.
3. Izpizi vsa stevila v obliki: Cela[*]=**, * - indeks, ** - vrednost
4. Zmnozi vsa stevila v tabeli. Izpis rezultata.
5. Sestej vsako tretje stevilo, zacni s prvim. Izpis rezultata.
*/
#include <iostream>
using namespace std;

int main()
{
    // 1.---------------------------------------------
    int N = 15;
    float Cela[N] = {};
    float vsota, vsota2;
    vsota = 1;
    vsota2 = 0;
    // 2.---------------------------------------------
    for (int i = 0; i < N; i++)
    {
        cout << "Cela[" << i << "] = ";
        cin >> Cela[i];
    }
    cout << "----------------------" << endl;
    // 3.---------------------------------------------
    for (int i = 0; i < N; i++)
    {
        cout << "T[" << i << "] = " << Cela[i] << endl;
    }
    // 4.---------------------------------------------
    for (int i = 0; i < N; i++)
    {
        vsota *= Cela[i];
    }
    cout << "----------------------" << endl;
    cout << "Zmnozena st. " << vsota << endl;

    // 5.---------------------------------------------
    for (int i = 0; i < N; i = i + 3)
    {
        vsota2 += Cela[i];
    }
    cout << "----------------------" << endl;
    cout << "Vsota vsakega tretjega je: " << vsota2 << endl;
    cout << "----------------------" << endl;

    return 0;
};
