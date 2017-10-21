/*
	N es un entero positivo que tiene exactamente 9 divisores y sus divisores suman 187131. ¿Cuánto vale N?
	a) Encontrar 1 solución.
	b) Encontrar todas las soluciones.
*/
#include <iostream>
using namespace std;
int main()
{
	int contDivisores = 0;
	int sumaDivisores = 0;
	
	for(int N=106260; N <=187131; N++)
	{
		contDivisores = 0;
		sumaDivisores = 0;

		for(int Divi=2; Divi =N ; Divi++)
		{
			if (N % Divi == 0)
			{
				contDivisores++;
				sumaDivisores += Divi;
				//cout << "Div: " << Divi << endl;
			}
		}
		sumaDivisores+=N;
		
		if(sumaDivisores == 187131 && contDivisores == 7)
		{
			cout << N << endl;
		} 
	}

	system ("pause");
	return 0;
}