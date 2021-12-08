/*
Preko tipkovnice vnasas poljubna cela stevila. Program naj presteje koliko vnesenih stevil je bilo lihih. Uporabi do while zanko, zanka se zakljuci ko uporbanik vnese 10 lihih stevil.
*/
#include <iostream>
using namespace std;

int main()
{
    int st, i = 0;

    do
    {
        cout << "Vnesi celo stevilo: ";
        cin >> st;

        if (st % 2 == 1)
        {
            i++;
        }
    } while (i < 10);

    cout << "--------------------------------" << endl;
    cout << "Vnesenih lihih stevil je bilo " << i << endl;

    return 0;
}
