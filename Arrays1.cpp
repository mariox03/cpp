#include <iostream>
using namespace std;

int main()
{
    int a[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[] = {4, 5, 6};

    cout << a[2][1] + b[0]<< endl;

    return 0;
}
