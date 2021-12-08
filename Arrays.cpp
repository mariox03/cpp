#include <iostream>
using namespace std;

int main()
{
    int anArray[9];
    for (int x = 0; x < 9; x++)
    {
        anArray[x] = 45;
        cout << x << ": " << anArray[x] << endl;
    }

    return 0;
}