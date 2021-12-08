#include <iostream>
#include <cmath>
using namespace std;

void kvadrat(float a, float &ob, float &P, float &d)
{
    ob = 4 * a;
    P = a * a;
    d = sqrt(2) * 2;
}
int main()
{
    float a = 3;
    float obseg, ploscina, diagonala;
    kvadrat(a, obseg, ploscina, diagonala);
    cout << "O=" << obseg << endl;
    cout << "P=" << ploscina << endl;
    cout << "d=" << diagonala << endl;

    return 0;
};
