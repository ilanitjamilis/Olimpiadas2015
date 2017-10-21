/*
Una editorial public� una gran tabla de n�meros primos, plegada en formato libro de 2012 paginas, con 9 n�meros por p�gina.
Como fue impreso en Jap�n, las p�ginas quedaron numeradas al rev�s que en Argentina. Asi, 2, 3, 5, 7, 11, 13, 17, 19 y 23
quedaron en la pagina 2012. Luego 23, 31, 37, 41, 43, 47, 53, 59 y 61 quedaron en la p�gina 2011, y asi siguiendo hasta la p�gina 1.

Dar todos los valores de P tal que el n�mero P quedo impreso en la p�gina P. 

Solucion posible: 1979. 
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>myVector;
	int numeroDePagina=2012;
	int auxCantPrimos=0;
	int i=2;
	bool esPrimo=true;
	int j=0;

	while(numeroDePagina>0 && numeroDePagina>=i)
	{
		j=0;
		esPrimo=true;
		while(esPrimo==true && j<myVector.size() && myVector[j]<i/2)
		{
			if(i%myVector[j]==0)
			{
				esPrimo=false;
			}
			j++;
		}
		if(esPrimo)
		{
			myVector.push_back(i);
			auxCantPrimos++;
			if(i==numeroDePagina)
			{
				cout<<"Solucion posible: "<<i<<".\n"<<endl;
			}
			if(auxCantPrimos==9)
			{
				numeroDePagina--;
				auxCantPrimos=0;
			}
		}
		i++;
	}
	system ("pause");
	return 0;
}