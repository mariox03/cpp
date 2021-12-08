/*
Vrednost izrazov
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;	   // cela stevila
	unsigned int m, n; // nenegativna - nic in pozitivna, vecja ali enaka nic, >= 0
	float x, y, z;

	a = 3.5; // shrani le celi del
	cout << "3.5 = " << a << endl;

	x = 3.5;
	y = 0.77;
	z = x / y;
	cout << "3.5/0.77=" << z << endl;

	c = x / y; // rezultat shranimo v celostevilsko spremenljivko
	cout << "3.5/0.77=" << c << endl;

	a = 4;
	b = 3;
	x = 1;
	y = x * a / b; // float*int => float
	z = a / b * x; // int*float => int
	cout << "y = " << y << ", z = " << z << endl;

	z = 1.0 * a / b * x; // float*... na zacetek izraza damo 1.0 nevtralno z mnozenje
	cout << "y = " << y << ", z = " << z << endl;

	z = (float)13 / 5; // prisilna konverzija tipov, sprememba
	cout << "z = " << z << endl;

	cout << "2.4*2.12 = " << 2.4 * 2.12 << ", (int)2.4*2.12 = " << (int)(2.4 * 2.12) << endl;

	cout << 4 / 3 << " + " << 4 % 3 << " = " << 4.0 / 3 << endl; // 4%3 je ostanek pri deljenju

	m = 10; // pozitivno
	n = 12;
	m = m - n; // spremenjivki m dodelimo vrednost, m-=n
	cout << m << endl;

	m = 0;
	m--; // m zmanjsamo za 1
	cout << m << endl;

	cout << "Najvecje pozitivno celo �tevilo je " << INT_MAX + 1 << endl;
	// INT_MAX+1 je najmanjse celo stevilo

	return 0;
};
