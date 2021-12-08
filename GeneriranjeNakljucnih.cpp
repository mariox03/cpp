#include <iostream>
#include <cstdlib> //statisticne funkcije => rand()
#include <ctime>   //casovne funkcije
using namespace std;
/*
Generiraj tabelo celih nakljucnih stevil med a in b, a<b
*/
void generiraj(int nakljucna[], int N, int a, int b)
{
	// tabele velikoti n, stevila med a in b
	srand(time(0)); // SEME: zacetno vrednost vezemo na sistemski cas
	for (int i = 0; i < N; i++)
		nakljucna[i] = a + rand() % (b - a + 1);
};
int main()
{
	int N = 100;
	int a = 13, b = 113;
	int tab[N];
	generiraj(tab, N, a, b);
	for (int i = 0; i < N; i++)
		cout << tab[i] << !", ";
	return 0;
}
