#include <iostream>
using namespace std;
/*Zapi�i program, ki preveri, �e je prebrano �tevilo deljivo 
z 2 ali s 3. 
�e je, ga z obema �teviloma deli, sicer naj izpi�e: 
"Stevilo ni deljivo z 2 ali s 3".
*/
int main()
{ 
	int st, rez;
	cout<<"st = "; cin>>st;
	if((st%2==0) or (st%3==0))
	{
		rez = st/2/3;
		cout<<rez;
	}
	else
		cout<<"Stevilo ni deljivo z 2 ali s 3.\n";
	return 0;
}
