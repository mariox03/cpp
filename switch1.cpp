#include <iostream>
using namespace std;

main()
{
	long long int a, b, c, d, e, f;

	cout << "Opcija 0, sabira dva unesena broja" << endl;
	cout << "Opcija 1, oduzima dva unesena broja" << endl;
	cout << "Opcija 2, mnozi dva unesena broja" << endl;
	cout << "Opcija 3, dijeli dva unesena broja" << endl;
	cout << "-----------------------------------" << endl;

	long long int broj1, broj2;

	cout << "Unesi prvi broj: ";
	cin >> broj1;
	cout << "Unesi drugi broj: ";
	cin >> broj2;

	c = broj1 + broj2;
	d = broj1 - broj2;
	e = broj1 * broj2;
	f = broj1 / broj2;

	cout << "-----------------------------------" << endl;

	cout << "Unesi svoju opciju: ";
	cin >> a;

	cout << "-----------------------------------" << endl;

	switch (a)
	{
	case 0:
		cout << "Zbir ova dva broja je: " << c << endl;
		break;
	case 1:
		cout << "Razlika ova dva broja je: " << d << endl;
		break;
	case 2:
		cout << "Mnozioc ova dva broja je: " << e << endl;
		break;
	case 3:
		cout << "Delioc ova dva broja je: " << f << endl;
		break;
	}

	cout << "-----------------------------------" << endl;

	return 0;
}
