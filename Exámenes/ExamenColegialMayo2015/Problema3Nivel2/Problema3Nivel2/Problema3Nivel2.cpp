/*
Ilanit Jamilis 4 IB
Nivel 2
Problema 3= Encontrar la cantidad de soluciones con X entero positivo tal que 3·X3 + 4018·X2 + 1020305·X - 229445566 < 0
*/

#include <iostream>
using namespace std;
int main()
{
	//Declaro la variable en la cual se va a guardar el divisor mayor de 20102010, pero menor a 10000.
	int diviMayor=0;

	//Hago un for en el cual se vaya fijando si las condiciones que se deben cumplir son verdaderas; y si lo son, que se haga lo que se debe hacer.
	for(int divi=1; divi<=20102010;divi++)
	{
		//Declaro las 2 cuentas que luego voy a necesitar usar.
		int cuenta=20102010%divi;
		int cuenta2=20102010/divi;

		//Aqui, si el numero es divisor de 20102010, y es mayor que el que por ahora es mayor, y es menor a 10000, se guarda como el mayor divisor.
		if(cuenta==0 && cuenta2>diviMayor && cuenta2<10000)
		{
			diviMayor=cuenta2;
		}
	}

	//Aca, luego de que se haya encontrado la solucion, la muestro.
	cout << "Divisor mayor = " << diviMayor << "." << endl;

	system("pause");
	return 0;
}
