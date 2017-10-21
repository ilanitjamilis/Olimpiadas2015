//Problema 10: ¿Cuántos divisores primos distintos tiene 1.279.224?
#include <iostream>
using namespace std;
int main()
{
	cout << "Divisores primos de 1.279.224:" << endl;
	unsigned long divisoresPrimos = 0;
	for(int i=2; i<=1279224; i++)
	{
		unsigned long cantDivisores = 0;
		unsigned long i2 = 2;
		
		while((cantDivisores == 0)&&(i2<i))
		{
			if(i%i2 == 0)
			{
				cantDivisores++;
			}
			i2++;
		}
		if(cantDivisores == 0)
		{
			if(1279224%i == 0)
			{
				cout << "\n				- " << i << endl;
				divisoresPrimos++;
			}
		}
	}
	cout << "\nTotal de divisores primos de 1.279.224: " << divisoresPrimos << "." << endl;
	system("pause");
	return 0;
}