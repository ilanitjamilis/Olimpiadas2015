/*
9)	Contar cuántos números primos positivos hay menores o iguales que 1.000.000.000 tal que el producto de sus dígitos también es un número primo.
(Aclaración, ni 0 ni 1 son números primos).
*/

#include <iostream>
using namespace std;

unsigned long ResultMulti(unsigned long Num)
{
	unsigned long Resto = 0;
	unsigned long Multi = 1;

	while(Num>0)
	{
		Resto = Num % 10;
		Multi = Multi*Resto;
		Num = Num/10;
			//- Resto/10;
	}

	return Multi;
}

bool NumeroPrimo(unsigned long Num)
{
	bool primo = false;
	unsigned long cantDivisores = 0;
	unsigned long i2 = 2;
	while((cantDivisores == 0) && (i2<Num))
	{
		if(Num % i2 == 0)
		{
			cantDivisores++;
		}
		i2++;
	}
	if(cantDivisores == 0 && Num>1)
	{
		primo = true;
	}
	return primo; 
}

int main()
{
	cout << "Numero primo y producto de sus digitos primo:" << endl;
	unsigned long N = 1000000000;
	unsigned long i2;
	unsigned long multiplicado;
	bool resulNPrimo = false;
	unsigned long cant = 0;

	for(long i=2; i<=N; i++)
	{
		resulNPrimo = NumeroPrimo(i);
		if(resulNPrimo != false)
		{
			multiplicado = ResultMulti(i);
			resulNPrimo = NumeroPrimo(multiplicado);
			if(resulNPrimo != false)
			{
				cout << "\n						-" << i << endl;
				cant++;
			}
		}
	}
	cout << "\n\nCantidad total = " << cant << ".\n" << endl;
	system("pause");
	return 0;
}