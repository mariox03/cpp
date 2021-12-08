/*
Zapisi program, ki izpise vecje od dveh prebranih decimalnih stevil.
Ce sta stevili enaki naj izpise:"Stevili sta enaki."
*/
#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Vnesite prvo stevilo: ";
    cin >> a;
    cout << "Vnesite drugo stevilo: ";
    cin >> b;

    cout << "---------------------------" << endl;

    if (a > b)
    {
        cout << "Prvo stevilo je vecje." << endl;
    };
    if (a < b)
    {
        cout << "Drugo stevilo je vecje." << endl;
    };
    if (a == b)
    {
        cout << "Stevila sta enaka." << endl;
    }
    return 0;
}
