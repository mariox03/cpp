#include <iostream>
#include <cmath>
using namespace std;
/*. a) Z uporabo while zanke, zapi�i program, ki bo se�teval vnesena pozitivna 
�tevila toliko �asa,dokler bo vsota se�tetih �tevil manj�a od 4000.  
Se�teva naj le �tevila, ki so manj�a od 50. 
�e je �tevilo ve�je ali enako 50 naj izpi�e: "�tevilo je preveliko.".
Na koncu naj program naj izpi�e, z ustreznim komentarjem, izra�unano vsoto.

*/
int main()
{
	unsigned int st, vsota = 0;
	while(vsota < 4000)
	{
		
		cout<<"st = "; 
		cin>>st;
		if(st<50)
			vsota = vsota + st;
		else
			cout<<"Stevilo je preveliko.\n";
	};
	cout<<"Vsota sestetih stevil je "<<vsota<<endl;
	return 0;
}
