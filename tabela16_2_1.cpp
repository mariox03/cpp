/*
Deklarija tabelo, ki vsebuje pozitivna cela stevila. Velikost in vrednost v njej so razvidne iz skice: 3,5,4,<siva>1<siva>,2,3,4,5, , .
Zapisi program, ki bo v tabelo vrinil stevilko 9 v celico, obarvano z sivo barvo.
Ostala stevila pa v istem vrstem redu pomakne za eno mesto desno.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N = 10; // velikost tabele
    // tip ImeTabele[velikost] = {vrednosti...}
    unsigned int PozSt[N] = {3, 5, 3, 1, 2, 3, 4, 5};
    // izpis vnesenih stevil
    for (int i = 0; i < N; i++)
    {
        cout << PozSt[i] << ' ';
    }
    cout << endl;
    // premik stevil od sivega polja naprej za 1 desno
    // da ne "povozimo" ze vneseni vrednosti, zacnemo na desni
    for (int i = 8; i >= 4; i--)
    {
        PozSt[i] = PozSt[i - 1]; // vrednost na desni dobi vrednost predhodnika
        // na 3. mesto (steti zacnemo z 0) vstavimo vrednost 9
    }
    PozSt[4] = 9;
    for (int i = 0; i < N; i++)
    {
        cout << PozSt[i] << ' ';
    }
    cout << endl;

    return 0;
};