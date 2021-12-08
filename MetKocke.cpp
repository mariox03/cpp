/*
1. Funkcija za met kocke
2. Shranimo N metov kocke
3. Prestejemo, kolikokrat se posamezna stevilka pojavi
*/
#include <iostream>
#include <cstdlib> //statististicne funkcije => rand()
#include <ctime>   //casovne funkcije
using namespace std;

int met()
{
	int StMet;
	// vrednosti od 1 do 6
	StMet = rand() % 6 + 1; // ostanki pri deljenju s 6: 0,1,2,3,4,5 => +1
	return StMet;
};

// Funkcija, ki shrani N vrednosti metov
void Meti(int VrMetov[], int N)
{
	for (int i = 0; i < N; i++)
		VrMetov[i] = met(); // na vsakem koraku vrzemo kocko
};

void izpis(int tab[], int N)
{ // za vse tabele, zato je poimenovanje tabele brezpredmetno
	for (int i = 0; i < N; i++)
	{
		if (i % 50 == 0)
			cout << endl;
		cout << tab[i] << " ";
	};
};

// stetje posameznih metov
void stetje(int stevc[], int Meti[], int N)
{
	stevc[7] = {};
	for (int i = 0; i < N; i++)
	{
		stevc[Meti[i]]++;
	}
}

// 3 enake cifre zapored: kolikokrat (return), tabela: kje
int enake(int Meti[], int N, int kje[], int &k)
{
	int st = 0;
	for (int i = 0; i < N - 3; i++)
	{ // primjeramo tri zaporedne
		if ((Meti[i] == Meti[i + 1]) && (Meti[i + 1] == Meti[i + 2]) && (Meti[i] == 6))
		{
			st++;
			kje[k] = i; // shranimo mesto
			k++;
		}
	}
	return st;
}

int main()
{
	int N = 1200;
	int kocka[N], stevec[7] = {}, kje[20], kol, st;
	srand(time(0));
	Meti(kocka, N); // funkcija meti je znotraj te
	stetje(stevec, kocka, N);

	izpis(kocka, N);

	st = enake(kocka, N, kje, kol);
	cout << "Vrgli smo" << st << " trojk." << endl;
	for (int i = 0; i < kol; i++)
	{
		cout << kje[i] << " " << endl;
	}

	return 0;
}