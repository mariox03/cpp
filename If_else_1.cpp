/*
Preveri, �e je vneseno celo �tevilo med a = 5 in b = 10.
*/
#include <iostream>
using namespace std;

int main()
{
	const int a = 5, b = 10;
	int st; //preberemo �tevilo

	cout << "Vnesi celo stevilo: ";
	cin >> st;

	if ((st > a) and (st < b)) //je vmes
	{
		cout << st << " je med " << a << " in " << b << endl;
	}
	else
	{
		cout << st << " ni med " << a << " in " << b << endl;
	}
	return 0;
};
