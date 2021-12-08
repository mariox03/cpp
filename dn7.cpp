/*Z uporabo while zanke, zapiši program, ki bo shranjeval vnesena pozitivna števila v tabelo z imenom ManjsaOd50 toliko časa, dokler bo vsota vnesenih števil manjša od 4000.
Shrani in sešteva naj le števila, ki so manjša od 50.
Če je število večje ali enako 50 naj izpiše: "Število je preveliko.".
Na koncu naj program naj izpiše, z ustreznim komentarjem, izračunano vsoto.
*/

#include <iostream>
using namespace std;

int main()
{
    int N = 999;
    int vsota = 0;
    unsigned int ManjsaOd50[N] = {};

    cout << "Vnesi stevila:" << endl;
    while (vsota < 4000)
    {
        cin >> ManjsaOd50[N];
        while (ManjsaOd50[N] >= 50)
        {
            cout << "Število je preveliko." << endl;
            cin >> ManjsaOd50[N];
        }
        if (ManjsaOd50[N] < 50)
        {
            vsota += ManjsaOd50[N];
        }
    }
    cout << "Vsota stevil je: " << vsota << endl;

    return 0;
};
