#include <iostream>
#include <cmath>
using namespace std;
/*
Izracunaj ploscine enakostranicnih trikotnokov za
dolzine stranic med 3 in 12 s korakom 1/5.
Vrednosti shrani v atbelo.
*/

int main()
{
	float a, P;
	int i; // stevec v tabeli
	int N = 50;
	float tab[N] = {}; // 5*9 => 50, raje malo vec a ne prevec
	// ce sta dva stevca, ju dekleriramo zunaj for

	for (a = 3; a <= 12; a += 0.20, i++)
	{

		tab[i] = (sqrt(3) * pow(a, 2)) / 2;
		cout << "p(" << a << ") = " << tab[i] << " " << endl;
	}
	// izpis i je dekleriran zunej for loopa

	return 0;
};
