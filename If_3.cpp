/*
Preveri, ce je vneseno celo stevilo med a = 5 in b = 10.
*/
#include <iostream>
using namespace std;

int main()
{ // deklaracije
	const int a = 5, b = 10;
	int st; // preberemo stevilo

	cout << "Vnesi celo stevilo: ";
	cin >> st; // vpisem jst

	if ((st > a) and (st < b)) // je umes
	{
		cout << st << " je med " << a << " in " << b << endl;
	}
	if ((st <= a) or (st >= b)) // ni vmes
	{
		cout << st << " ni med " << a << " in " << b << endl;
	}

	//*! na drug nacin, z dvema ifoma
	if (st > a) // najprej, ce je vec od a...
	{
		if (st < b) // ce je, preverimo ce je manjsi od b
		{
			cout << "2.nacin: " << st << " je med " << a << " in " << b << endl;
		}
	}
	return 0;
};
