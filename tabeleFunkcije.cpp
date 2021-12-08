#include <iostream>
using namespace std;
/*
Ce funkcija le spremeni vrednosti v tabeli, naj bo tipa void
Ce pa s pomocjo izracunamo vrednost (min,povp...) pa naj bo tipa, ki ga funkcija obraca
*/

/*
Poveca vredosti v tabeli za 1 (spremeni le vrednosti => void
*/

void poveca(int tabela[], int N)
{ // ime tabele[] , velikost N
	// tabela[] "pokaze" na prvi elemnt, N je pa st elementov
	// Kazalec na prvega ker bi morala funkcija vsebovati N st kot argument
	// spreminjajo se  vrednosti v originalu

	for (int i = 0; i < N; i++)
	{				 // zacnem z 0; ker se steje v tabeli pricne z 0
		tabela[i]++; // tabela[i] = tabela[1]+1; tabela[i]+=1
	}
}
void izpis(int stevila[], int M)
{

	for (int i = 0; i < M; i++)
	{
		cout << stevila[i] << "\t";
	}
	cout << endl;
};

int main()
{

	int I = 7;
	int tab[I] = {1, 2, 3, 4, 5, 6, -1};
	poveca(tab, I); // le ime tabele in velikost, brez[
	izpis(tab, I);
	return 0;
};
