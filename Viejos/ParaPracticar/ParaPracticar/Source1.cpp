/*
	Encontrar un número entero positivo que sea divisor de 17784 y que tenga exactamente 18 divisores.
*/
#include <iostream>
using namespace std;
int main()
{
	int f = 0;
	int N = 17784;
	int cantDivisores = 0;

	while(f==0)
	{
		for(int i=1; i<=N; i++)
		{
			if(i%N==0)
			{
				cantDivisores = 0;
				for(int i2=1; i<=i; i2++)
				{
					if(i%i2==0)
					{
						cantDivisores++;
					}
				}
				if(cantDivisores==18)
				{
					cout << "Solucion: " << i << ".\n" << endl;
					f=1;
				}
			}
		}
	}
	system("pause");
	return 0;
}