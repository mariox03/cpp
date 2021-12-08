#include <iostream>

using namespace std;

int kvadrat(int stevilo)
{
	int kv;
	kv = stevilo * stevilo;
	return kv;
}

int main()
{
	int x, y;
	x = 3;
	y = kvadrat(x);
	cout << y << endl;

	return 0;
}
