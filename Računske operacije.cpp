/*
Osnovne racunske operacije
*/
#include <iostream>
using namespace std;

int main()
{
	int a, b, rez; // deklaracija spremenjivk
	a = 13;
	b = 5; // priredimo vrednost

	// sestevanje
	rez = a + b;
	cout << "vsota = " << rez << endl; // endl END Line, skok v novo vrstico

	// odstevanje
	rez = a - b;
	cout << "razlika = " << rez << endl;

	// mnozenje
	rez = a * b;
	cout << "produkt = " << rez << endl;

	// deljenje
	rez = a / b;
	cout << "kolicnik = " << rez << endl;
	/* ce delimo dve celi stevili, je rezultat celo stevilo: CELOSTEVILSKO DELJENJE, celi del*/
	/* ce so v izrazu le cela stevila, je tudi rezultat celo stevilo*/

	// ostanek pri deljenju
	rez = a % b;
	cout << "ostanek = " << rez << endl;

	// a++, b--
	cout << "a = " << a << endl;
	a++;
	cout << "a++ = " << a++ << endl;

	cout << "b = " << b << endl;
	b--;
	cout << "b-- = " << b-- << endl;

	return 0;
}
