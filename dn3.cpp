/*Napisi program, ki bo prebral neko naravno stevilo n in potem zapisal postevanko tega stevila do 10*n. Uporabi FOR zanko.*/
#include <iostream>
using namespace std;

int main()
{
    unsigned int n, r = 0;
    cout << "Vnesite naravno stevilo= ";
    cin >> n;
    cout << "----------------------------" << endl;
    for (int i = 0; i < 11; i++)
    {
        cout << n * r << endl;
        r++;
    }
    cout << "----------------------------" << endl;
    return 0;
}
