#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int prvi = 20;
    int drugi = 80;
    // srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        cout << rand() % (80 + 20) - 20 << endl;
    }

    return 0;
};
