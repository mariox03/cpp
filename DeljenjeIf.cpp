/*
Program prebere dve realni stevil, nato pa vecje deli z manjsim.
Rezultat izpise.
*/
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d;

    cout << "Vnesi prvo stevilo a = ";
    cin >> a;
    cout << "Vnesi drugo stevilo b = ";
    cin >> b;

    cout << "-------------------------" << endl;

    c = a / b;
    d = b / a;

    if (a > b)
    {
        cout << "Rezultat je: " << c << endl;
    };
    if (a < b)
    {
        cout << "Rezultat je: " << d << endl;
    };
    if (a == b)
    {
        cout << "Rezultat je: " << 1 << endl;
    }
    return 0;
}
