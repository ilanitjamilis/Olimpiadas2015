/*
	a) Buscar un X entero positivo tal que 3·X3 - 4018·X2 + 1020305·X + 229445566 < 0.
	b) ¿Cuántos cumplen esta propiedad?

#include <iostream>
using namespace std;
int main()
{
	cout << "Soluciones posibles\n" << endl;
	int cant = 0;

	for(int X=0; X<=1000000000; X++)
	{
		int cuenta = 3*X*X*X - 4018*X*X + 1020305*X + 229445566;

		if(cuenta<0)
		{
			cant++;
			cout << "X: " << X << ".\n" << endl;
		}
	}

	cout << "\nTotal de soluciones posibles: " << cant << ".\n" << endl;

	system("pause");
	return 0;
}
*/