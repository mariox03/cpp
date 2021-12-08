/*Podane so tri dolžine (a, b, c)
Preveri, ce sestavljajo trikotink.
Veljati morajo vse tri trikotniske neenakosti.
a+b >=c
a+c >=b
b+c >=a
teoreticno: ce velja enakost, je tudi trikotnik.

Funkcija je tipa bool, vrne true ali false
Arumenti so dolzine tipa float (decimalna stevila, realna stevila)
*/

#include <iostream>
using namespace std;

bool izracun(float a, float b, float c)
{
    if (a + b >= c && a + c >= b && b + c >= a)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    float a, b, c;
    bool jeNi;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    jeNi = izracun(a, b, c);

    if (jeNi)
    {
        cout << "obstaja" << endl;
    }
    else
    {
        cout << "ne obstaja" << endl;
    }

    return 0;
};
