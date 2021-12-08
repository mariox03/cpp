#include <iostream>
#include <string>
using namespace std;

/* Kolikokrat se vneseni znak pojavi v nizu */
int presledki(string);

int main()
{

	string besedilo = "Stetje pojavnosti znaka v nizu.";
	char znak;
	int dolzina_niza;
	int kolikokrat = 0; // ce podanega znaka v besedilu ni, se ta vrednost ne spremeni

	/*
	ce zelimo prebrati poljubne niz, ki vsebuje tudi presledke,
	niz preberemo z ukazom getline(cin,nizA,'/'); / znak za konec je poljuben
	Z ukazom cin beremo LE DO PRESLEDKA!!
	*/
	cout << "Vnesi poljuben niz, niz naj se konca z /.\n";
	getline(cin, besedilo, '/');
	// vnos znaka
	cout << "Vnesi poljuben znak, ki ne sme biti preseledek: ";
	cin >> znak;
	//	znak = ' ';//presledek lahko dolocis z dodelitvijo vrednosti
	dolzina_niza = besedilo.length();

	// Pregled: pregledujemo znake v besedilo, od prvega do zadnjega.
	// ce je znak enak vnesenenu znaku, si zapomnimo mest, indeks, na katerem se pojavi
	// in "gremo ven" iz for zanke.
	for (int i = 0; i < dolzina_niza; i++)
		if (znak == besedilo[i])
		{
			kolikokrat++;
			// break; //prekinitev izvajanja zanke (while, do while, for)
		};

	if (kolikokrat > 0)
		cout << "Znak " << znak << " se pojavi " << kolikokrat << "." << endl; // Ker zacne steti z 0
	else
		cout << "Znaka " << znak << " ni v danem besedilu.\n";

	int presledki = 0;

	for (auto c : besedilo) // presledek
	{
		if (c == ' ')
		{
			presledki++;
		}
	}

	cout << "V stavku je " << presledki << " presledka." << endl;

	cout << besedilo << endl;

	return 0;
	// Domaca naloga za 5: kako vnesti presledek.
}
