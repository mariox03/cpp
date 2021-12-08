/*Zapisi program ki zamenja dve vrednosti med seboj. Tabela: 12 stevil, zamenjaj i-to in j-to*/

#include <iostream>
using namespace std;

int main()
{
    int N = 12, i = 3, j = 7, shramba; // zamenjali bomo 3. in 7. stevilo
    int stevila[N];

    for (int i = 0; i < 12; i++)
    { // i je interna spremenljivka, ker je deklarirana v for zanko. Zunaj zanke ne ohrani vrednosti
        cout << "vnesi " << i + 1 << ".to stevilo: ";
        cin >> stevila[N];
    };
    for (int i = 0; i < 12; i++)
    {
        cout << stevila[i] << " ";
    };
    cout << endl;
    cout << "PO menjavi: ";
    shramba = stevila[i];
    stevila[i] = stevila[j];
    stevila[j] = shramba;
    for (int i = 0; i < 12; i++)
    {
        cout << stevila[i] << " ";
    }

    return 0;
};