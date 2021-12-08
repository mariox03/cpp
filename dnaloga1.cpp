/*
Zapiši celoten program (tudi pripadajoče knjižnice).
Program naj prebere stranico kocke, izračuna dolžino robov (8a), površino (6a2) in dolžino diagonale (√3 a).
Izračunane rezultate naj tudi izpiše.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, r, p, d;
    cout << "Vnesi stranico kocke: ";
    cin >> a;
    r = 8 * a;
    p = 6 * pow(a, 2);
    d = sqrt(3) * a;
    cout << "Dolzina robov je: " << r << endl;
    cout << "Povrsina je: " << p << endl;
    cout << "Dolzina diagonale je: " << d << endl;

    return 0;
}
