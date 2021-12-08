/*Program naj izpise stevke stevila, najprej enice, nato desetice....
Primer: A = 12234, izpis: 4, 3, 2, 2, 1. Kaj pa izpis v istem vrstnem redu? A = 12345, izpis: 1, 2, 3, 4, 5. (FOR zanka)*/
#include <iostream>
using namespace std;

int main()
{
	int n, i, e, d, s, t;
	cout << "Unesite stevilo: ";
	cin >> n;
	for (i = 0; i < 1; i++)
	{
		e = n % 10;
		d = (n / 10) % 10;
		s = (n / 100) % 10;
		t = n / 1000;
		cout << e << ", " << d << ", " << s << ", " << t << "." << endl;
		cout << t << ", " << s << ", " << d << ", " << e << "." << endl;
		cout << "Enice= " << e << endl;
		cout << "Desetice= " << d << endl;
		cout << "Stotice= " << s << endl;
		cout << "Tisocice= " << t << endl;
	}
	return 0;
}
