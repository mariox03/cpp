#include <iostream>
#include <cmath>
using namespace std;
/*. a)Zapi�i program, ki izra�una vrednosti funkcije y= 3x^3-2x+3 za vsa cela �tevila med 12 in 112.
b) Izra�unane vrednosti naj sproti shranjuje v tabelo z imenom vrednosti.
c) Program naj izra�una in izpi�e najve�jo vrednost izra�unanih vrednosti v tabeli vrednosti.

*/
int main()
{
	int x, y;//y je spremenljivka za izra�un y 
	int vrednosti[101]={};//112-12 = 100, pri�tejemo �e prvo (12): 101
	int max;//spremenljivka, kjer bomo shranili njave�jo vrednost
	int i;//�tevec v tabeli vrednosti, na katerem mestu je izra�unana vreednost y
	//for(za�etne vrednosti "�tevcev"; pogoj; spremembe "�tevcev"
	//x je med 12 in 112, vrednosti v tabeli je 101
	for(i=0, x = 12;x<=112;x++, i++)
	{
		y = 3*pow(x,3)-2*x+3;//izra�unamo y
		vrednosti[i]=y; //y shranimo na i-to mesto v tabeli
	};
	//prvi kandidat za max naj bo kar prvi element v tabeli
	max = vrednosti[0];
	//vse ostale vrednosti primerjamo z max, �e je
	//vrednost v tabeli vi�ja, dobi max to vrednost
	for(int k = 0;k<101;k++)
	{
		if(vrednosti[k]>max)
			max = vrednosti[k];
	};
	cout<<"max = "<<max<<endl;
	return 0;	
};







