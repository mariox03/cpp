#include <iostream>
#include <cmath>
/*a) Z uporabo while zanke, zapi�i progam, ki bo se�teval vnesena decimalna �tevila toliko �asa, 
  dokler je vsota teh �tevil manj�a od celo�tevilska konstante k = 2000.
b) Se�teva naj le pozitivna �tevila, ter jih sproti tudi �teje.
c) Na koncu naj izpi�e, koliko pozitivnih �tevil je se�tel, ter kolik�na je njihova vsota. 
  Izpis naj vsebuje ustrezne komentarje.
*/
using namespace std;

int main()
{
	const int k = 2000;
	float st;//prebrana (vnesena) �tevila
	int soda = 0;//�tevec pozitivnih, za�etna vrednost je 0
	float vsota = 0;//vsota sodih �tevil, za�etna vrednost je 0
	
	while(vsota<k)
	{
		cout<<"Vnesi stevilo: ";
		cin>>st;
		if(st>0)//preverimo pozitivnost
		{
			vsota = vsota + st; //pri�tejemo
			soda++;//pove�amo �tevec pozitivnih
		}	
	};
	//izpis
	cout<<"Vsota sodih = "<<vsota<<"; sesteli smo "<<soda<<" stevil\n";
	return 0;	
};







