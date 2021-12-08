#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    float v = 0.0;
    float pov = 0.0;
    int max, min;
    int a[N] = {};

    for (int i = 0; i < N; i++)
    {
        cout << "Vnesi " << i + 1 << ". stevilo: ";
        cin >> a[i];
    };

    max = a[0];
    min = a[0];
    for (int i = 0; i < N; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        if (min > a[i])
        {
            min = a[i];
        }
        v += a[i];
    }
    pov = v / N;
    cout << "-------------------------------" << endl;
    cout << "Povprecje vnesenih stevil je: " << pov << endl;
    cout << "-------------------------------" << endl;
    cout << "Najvecjo stevilo je: " << max << endl;
    cout << "-------------------------------" << endl;
    cout << "Najmanjse stevilo je: " << min << endl;
    cout << "-------------------------------" << endl;
    return 0;
};
