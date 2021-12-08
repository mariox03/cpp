/*Število je noro, če v razcepu na prafaktorje vsebuje le števila 7 in 3.
Sestavi program, ki bo izpisal vsa nora števila med ena in N. Uporabo FOR zanko.*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "N = ";
    cin >> N;
    cout << endl;
    cout << "Nora stevila: " << endl;
    for (int i = 1; i < N; i++) // I preverjamo, ce je noro
    {
        if ((i % 3 == 0) && (i % 7 == 0))
        {
            cout << i << endl;
        }
    }

    return 0;
}
