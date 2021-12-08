/*Napiši program, ki med tremi prebranimi števili A, B in C izpiše največje (ali najmanjše) število.*/
#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cout << "Vnesi prvo stevilo: ";
    cin >> A;
    cout << "Vnesi drugo stevilo: ";
    cin >> B;
    cout << "Vnesi tretje stevilo: ";
    cin >> C;

    cout << "------------------------" << endl;

    cout << "Najvecje stevilo je: ";
    if ((A > B) && (A > C))
    {
        cout << A << endl;
    }
    if ((B > A) && (B > C))
    {
        cout << B << endl;
    }
    if ((C > A) && (C > B))
    {
        cout << C << endl;
    }

    cout << "------------------------" << endl;

    cout << "Najmanjse stevilo je: ";
    if ((A < B) && (A < C))
    {
        cout << A << endl;
    }
    if ((B < A) && (B < C))
    {
        cout << B << endl;
    }
    if ((C < B) && (C < A))
    {
        cout << C << endl;
    }

    return 0;
}
