#include <iostream>
using namespace std;

int main()
{

    int max, max2, s;
    max = 0;
    max2 = 0;
    int i = 0;

    cout << "Vnesi 10 stevil: " << endl;

    for (i = 0; i < 10; i++)
    {
        cin >> s;
        if (i == 0)
        {
            max = s;
        }
        else if (s > max)
        {
            max2 = max;
            max = s;
        }
        /*else if (s > max2 && s != max)
        {
            max2 = s;
        }*/
    }

    cout << "2 najvecje st. je: " << max2 << endl;
    return 0;
};
