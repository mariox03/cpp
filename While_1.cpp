/*
Sestevajte prebrana pozitivna stevila toliko casa, dokler bo vsota manjsa od 100
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned int st;
	int vsota = 0;
	while (vsota < 100)
	{
		cout << "stevilo: ";
		cin >> st;
		vsota += st;
	}
	cout << "vsota je " << vsota << endl;
	return 0;
};
