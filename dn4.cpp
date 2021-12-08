/*Napiši program, ki prebere dve celi števili A in B. Število A izpiše tolikokrat, kot je vrednost števila B. Uporabo WHILE zanko.*/
#include <iostream>
using namespace std;

int main()
{
    int A, B, i;
    i = 0;
    cout << "Vnesi prvo stevilo: ";
    cin >> A;
    cout << "Vnesi drugo stevilo: ";
    cin >> B;
    while (i < B)
    {
        cout << A << endl;
        i++;
    }

    return 0;
}
