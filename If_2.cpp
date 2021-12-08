/*
Preveri, ce je celo pozitivno stevilo sodo (liho)
*/
#include <iostream>
using namespace std;

int main()
{
	unsigned int st1 = 13, st2; // inicializacija, dodelitev vrednosti ob deklaraciji
	st2 = 16;					// prireditev vrednosti
	if (st2 % 2 == 0)			// st%2 je ostanek pri deljenju z 2
	{
		cout << st2 << "je soda\n"; // brez {}, ker je le en ukaz => ;
	}
	if (st1 % 2 == 1) // st%2 je ostanek pri deljenju z 2
	{
		cout << st1 << "je liho\n\n";
	}
	if (st2 % 2 == 1) // st2 = 16, 16%2 = ostanek 0, 0 ni enako 1
	{
		cout << "bla bla bla\n"; // stavki se izvedejjo le, ce je pogoj izpolnjen, tu ni
	}
};
