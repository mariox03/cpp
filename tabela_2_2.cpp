/*
1. Deklariraj tabelo, z imenom Stevila, v kateri bo shranjenih najvec 10 decimalnih stevil.
2. S pomocjo for zanke v tabelo vnesi stevila.
3. Izpisi vsa stevila v obliki: Stevila[*]=**, * - indeks, ** - vrednost
4. Sestej vsa stevila v tabeli. Izpis rezultata.
5. Sestej vsako drugo stevilo, zacni s prvim. Izpis rezultata.
*/
#include <iostream>
using namespace std;

int main()
{
    // 1.---------------------------------------------
    int N = 10;
    float Stevila[N] = {};
    float vsota, vsota2;
    vsota = 0;
    vsota2 = 0;
    // 2.---------------------------------------------
    for (int i = 0; i < N; i++)
    {
        cout << "Stevila[" << i << "] = ";
        cin >> Stevila[i];
    }

    cout << "----------------------" << endl;

    // 3.---------------------------------------------
    for (int i = 0; i < N; i++)
    {
        cout << "T[" << i << "] = " << Stevila[i] << endl;
    }
    // 4.---------------------------------------------
    for (int i = 0; i < N; i++)
    {
        vsota += Stevila[i];
    }
    cout << "----------------------" << endl;
    cout << "Vsota je: " << vsota << endl;

    // 5.---------------------------------------------
    for (int i = 0; i < N; i = i + 2)
    {
        vsota2 += Stevila[i];
    }
    cout << "----------------------" << endl;
    cout << "Vsota vsakega drugega je: " << vsota2 << endl;
    cout << "----------------------" << endl;

    return 0;
};
