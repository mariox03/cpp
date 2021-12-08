/*
Program izracuna povprecno vrednost N vnesenih pozitivnih celih stevil.
Stevilo N vnesemo. Uporabi while zanko.
Na koncu naj rezultat izpise v obliki: "Povprecje vnesenih stevil je: <rezultat>.".
*/
#include <iostream>
using namespace std;

int main()
{
    int N, i;
    float pov; // povprečno
    float st, vsota = 0.0;

    i = 0;

    cout << "Vnesi stevilo vnosov: ";
    cin >> N;

    cout << "---------------------------------" << endl;

    while (N <= 0)
    {
        cout << "Stevilo mora biti pozitivno" << endl;
        cout << "Vnesi stevilo vnosov ponovno: ";
        cin >> N;
    }

    while (i < N)
    {
        cout << i + 1 << ". Vnesi stevilo: ";
        cin >> st;
        vsota += st;
        ++i;
    }

    cout << "---------------------------------" << endl;

    pov = vsota / N;
    cout << "Povprecje vnesenih stevil je: " << pov << endl;
    return 0;
}
