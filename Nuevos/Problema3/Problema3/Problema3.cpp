/*
Consideramos las ternas de números enteros positivos (P; Q; R) tales que P, Q, R y Pal2+Qal2+Ral2 sean primos.

a) Encontrar 9 de ellas.

b) ¿Cuántas de ellas hay tales que P, Q, R son menores que 10000?
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> myVector;
	myVector.push_back(2);

	int cantSoluciones=0;

	while(cantSoluciones<10)
	{
		bool esPrimo=true;
		int j=0;
		for(int i=3; i<10000; i++)
		{
			if(i%2!=0)
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
				if(myVector.size()>=3)
				{
					for(
				}
			}
		}
	}
}