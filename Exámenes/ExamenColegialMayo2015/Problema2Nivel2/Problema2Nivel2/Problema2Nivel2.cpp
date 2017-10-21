
/*
Ilanit Jamilis 4IB
Nivel 2
Problema 2: Encontrar la cantidad de soluciones con X entero positivo tal que 3·X3 + 4018·X2 + 1020305·X - 229445566 < 0.
*/

#include <iostream>
using namespace std;
int main()
{
	//Aca declaro la cantidad de soluciones que va a tomar X.
	int cantSoluciones=0;

	//Ahora hago un for para averiguar los valores que puede tomar X.
	for(int X=1; X<229445566; X++)
	{
		//Aca declaro la cuenta que se debe hacer.
		int cuenta = (3*X*X*X+ 4018*X*X + 1020305*X - 229445566);

		//Si la solucion de la cuenta, tomando lo que vale X en ese momento, da menor a 0, se suma 1 a la cantidad de soluciones posibles.
		if(cuenta<0)
		{
			cantSoluciones++;
		}
	}

	//Aca, afuera del for porque debe terminar de buscar todas las soluciones, muestro la cantidad de soluciones posibles para X que se encontraron.
	cout << "Cantidad de soluciones= " << cantSoluciones << "." << endl;

	system("pause");
	return 0;
}