#include <iostream>
using namespace std;

int main()
{
	const int N = 100;
	int vnosi = 0; // steje vnose
	float StA[N] = {0}, StB[N] = {}, x;
	float vsota = 0;
	float povprecje = 0, minimum, maksimum; // domaca naloga najmanj 15 stevil

	cout << "-------------------------------" << endl;
	cout << "Vnos stevil konca tako da pritisnes katerokoli tipko s crko" << endl;
	cout << "-------------------------------" << endl;
	cout << "x = ";
	cin >> x;

	while (cin)
	{
		StA[vnosi] = x; // shranimo podatek prebran pred zanko
		vnosi++;
		cout << "x = ";
		cin >> x;
	}

	// izpis v obratnem vrstnem redu
	for (int i = vnosi - 1; i >= 0; i--) // vnosi-1: ker mesta v tabeli zacnemo z 0
	{
		cout << "StA[" << i << "] => " << StA[i] << endl;
	}

	/*maksimum = INT_MIN; //najmanjse
	minimum = INT_MAX;	//najvecje
	cout << "Najvecje celo " << INT_MAX << ", najmanjse celo " << INT_MIN << endl;*/

	// izpis negativnih
	cout << "-------------------------------" << endl;
	cout << "Izpis negativnih: " << endl;
	for (int i = 0; i < vnosi; i++)
	{
		if (StA[i] < 0)
		{
			cout << StA[i] << endl;
		}
	}

	maksimum = StA[0];
	minimum = StA[0];
	for (int i = 0; i < vnosi; i++)
	{
		if (maksimum < StA[i])
		{
			maksimum = StA[i];
		}
		if (minimum > StA[i])
		{
			minimum = StA[i];
		}
		vsota += StA[i];
	}
	povprecje = vsota / vnosi;
	cout << "-------------------------------" << endl;
	cout << "Povprecje vnesenih stevil je: " << povprecje << endl;
	cout << "-------------------------------" << endl;
	cout << "Najvecjo stevilo je: " << maksimum << endl;
	cout << "-------------------------------" << endl;
	cout << "Najmanjse stevilo je: " << minimum << endl;
	cout << "-------------------------------" << endl;

	return 0;
};
