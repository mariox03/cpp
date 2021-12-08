#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    const int N = 70; // med -5 in 10 velikost tabele
    float VredF[N] = {};
    // potrebujemo dva stevca: x, i - mesta v tabeli
    // ker sta razlicnih tipov, jih deklariramo pred for zanko
    int i;                                          // deklariramo lahko kjerkoli, a pred uporabo
    float x;                                        // nepisano pravilo: na zacetku programa
    for (i = 0, x = -5; x <= 10; i++, x = x + 0.25) // preverjamo le x
    {
        VredF[i] = 2 * pow(x, 3) - 2 * pow(x, 2) + 3 * x + 4;
        cout << "VredF[" << i << "] za x = " << x << " je " << VredF[i] << endl;
    }

    // z While zanko
    cout << "\nZ While zanko:\n";
    i = 0;
    x = -5;
    while (x <= 20) // ce zelimo izracunati le 20 vrednosti
    {
        VredF[i] = 2 * pow(x, 3) - 2 * pow(x, 2) + 3 * x + 4;
        cout << "VredF[" << i << "] za x = " << x << " je " << VredF[i] << endl;
        i++;
        x = x + 0.25;
    }

    return 0;
};
