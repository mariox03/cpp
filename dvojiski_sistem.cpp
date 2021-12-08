/*
pretvori vneseno desetisko stevil v dvojisko
*/

#include <iostream>
using namespace std;

int main()
{
	long long celidel, desetisko; // celidel uporabljamo v postopku----to stevilo vnesemo
	long long dvojisko = 1;		  // zacetna vrednost dvojiskega
	long long ostanek;			  // tu shranimo vneseno stevilo

	cout << "Vnesi desetisko stevilo: ";
	cin >> desetisko;

	celidel = desetisko; // shranimo prebrano stevilo, ker ga v postopku spreminjamo

	while (celidel > 0)
	{
		ostanek = celidel % 2; // ostanek, desni stolpec
		dvojisko = dvojisko * 10 + ostanek;
		celidel = celidel / 10; // 123/10 = 12 le celi del, ker deilomo celo stevilo s celim
	};
	cout << desetisko << " Dvojisko: " << dvojisko << endl;

	return 0;
};
