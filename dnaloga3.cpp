/*
Zapiši for zanko, ki bo izračunala vsoto prvih N večkratnikov števila 7. Vrednost N = 150.
Vse spremenljivke morajo biti deklarirane z najbolj ustreznim tipom podatka.
*/
#include <iostream>
using namespace std;

int main()
{
    const int N = 150;
    int v = 0;
    for (int i = 0; i < N; i = i + 7)
    {
        v = v + i;
    };
    cout << "Vsota prvih 150 veckratnikov stevila 7: " << v << endl;
    return 0;
}
