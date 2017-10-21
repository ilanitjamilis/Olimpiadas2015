/*
¿Cuántos divisores de 2009 elevado a la 2010 terminan en 127?
*/

#include <iostream>
using namespace std;

int main()
{
	unsigned long N = 1;
	int cantSoluciones = 0;

	for (int i = 1; i <= 2010; i++)
	{
		N = N * 2009;
	}
	cout << "N = " << N << ".\n\n" << endl;

	for (unsigned long f = 1; f<=N; f++)
	{
		if (N % f == 0)
		{
			if (f % 1000 == 127)
			{
				cantSoluciones++;
				cout << "Solucion posible: " << f << ".\n" << endl;
			}
		}
	}
	cout << "\nTotal de soluciones posibles: " << cantSoluciones << "." << endl;
	system("pause");
	return 0;
}