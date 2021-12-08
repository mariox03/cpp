/*
Zapiši if stavek, ki bo v primeru, če je število N deljivo s 4, to število delil s 3.
Če število ni deljivo s 4, naj izpiše: "Stevilo 4 ne deli N." (namesto N naj izpiše dejansko vrednost).
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Vnesi stevilo: ";
    cin >> N;
    if (N % 4 == 0)
    {
        N = N / 3;
    }
    if (N % 4 != 0)
    {
        cout << "Stevilo 4 ne deli " << N << endl;
    }

    return 0;
}
