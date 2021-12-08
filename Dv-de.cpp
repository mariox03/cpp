/*iz dvojiskega v desetisko st*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	unsigned long i, n, stevilo = 0, d;

	cout << "Vnesi desetisko stevilo: ";
	cin >> n;
	cout << "Decimalna pretvorba " << n << " je ";

	for (i = 0; n != 0; ++i)
	{
		d = n % 10;
		stevilo = (d) * (pow(2, i)) + stevilo;
		n = n / 10;
	}

	cout << stevilo;

	return 0;
}
