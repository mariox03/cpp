/*
Preveri deljivost števil z 8?
*/
#include <iostream>
using namespace std;

int main()
{
	int const osem = 8;
	int ostanek;
	// osem = 8; vrednosti konstante ne moremo spremeniti
	int st;
	cout << "st: "; // deljivost
	cin >> st;
	ostanek = st % osem;
	if (ostanek == 0) // ostanek = 0: prireditev, ostenek dobi vrednost 0
	{
		cout << "DA\n";
	}
	else
	{
		cout << "NI\n";
	}
	return 0;
};
