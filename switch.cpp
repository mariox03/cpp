#include <iostream>
using namespace std;

main()
{
    int a, b, c, d, e, f;

    cout << "Option 0, sums the two numbers entered." << endl;
    cout << "Option 1, subtracts the two numbers entered." << endl;
    cout << "Option 2, multiplies the two numbers entered." << endl;
    cout << "Option 3, divides the two numbers entered" << endl;
    cout << "---------------------------------------------" << endl;

    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    c = num1 + num2;
    d = num1 - num2;
    e = num1 * num2;
    f = num1 / num2;

    cout << "Enter your option: ";
    cin >> a;

    switch (a)
    {
    case 0:
        cout << "The sum of these two numbers is: " << c << endl;
        break;
    case 1:
        cout << "The difference between these two numbers is: " << d << endl;
        break;
    case 2:
        cout << "The multiplier of these two numbers is: " << e << endl;
        break;
    case 3:
        cout << "The divisor of these two numbers is: " << f << endl;
        break;
    }

    return 0;
}
