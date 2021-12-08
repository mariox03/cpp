/*
V tabelo vpisi TOCNO 10 stevil, ki so deljiva s 13.
Vnasa poljubna stevila,v for zanki preverjas deljivost z while zanko
*/

#include <iostream>

using namespace std;

int main()
{

	int N = 10, x;
	int stevila[N] = {};

	cout << "vnesi stevila: ";
	while (N < 10)
	{
		for (int i = 0; i < 10; i++)
		{
			cin >> x;
			if (x % 13 == 0)
			{
				stevila[i] = x;
			}
		};
	}

	return 0;
}
