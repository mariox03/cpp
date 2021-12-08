#include <iostream>
#include <cstdlib> //statisticne funkcije => rand()
#include <ctime>   //casovne funkcije
using namespace std;

int main()
{
    // srand(time(0)); // SEME: zacetno vrednost vecemo na sistemski cas
    for (int i = 0; i <= 10; i++)
        cout << rand() << " " << endl;
    cout << endl;

    // Nakljucna od 0 do 100
    for (int i = 0; i <= 10; i++)
        cout << rand() % 100 << " " << endl; // ostanek pri deljenju s 100

    // Nakljucna med 20 in 80
    for (int i = 0; i <= 10; i++)
        cout << 20 + rand() % 100 << " " << endl; // otanek pri deljenju s 100
    cout << endl;

    // med a = 20 in b = 110
    int a = 20, b = 110;
    for (int i = 0; i <= 20; i++)
        cout << a + rand() % (b - a) << " " << endl;
    return 0;
};
