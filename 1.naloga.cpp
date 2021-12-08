/*
1.Zapisi program, ki izpise vecje od dveh prebranih decimalnih stevil. Ce sta stevili enaki naj izpise: "stevili sta enaki."
*/
#include <iostream>
using namespace std;

int main()
{
	float a, b;
	cout << "Vnesite dve stevilki: ";
	cin >> a >> b;
	if (a == b)
	{
		cout << "Stevili sta enaka" << endl;
	}
	else
	{
		if (a > b)
		{
			cout << a << " je vecje stevilo." << endl;
		}
		else
		{
			cout << b << " je vecje stevilo." << endl;
		}
	}
	return 0;
};
