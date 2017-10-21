/*
Ilanit Jamilis.
Problema 2:Julio extiende (hasta el 2015) el trazado usual de la rayuela asi: todos los m�ltiplos de 4 van en casillas dobles, 
junto con el n�mero anterior o el n�mero posterior, eligiendo de entre ellos el que deja menor resto en su divisi�n por 5. 
Para jugar, se da 1 salto para avanzar de casilla, pero con dos pies en las casillas dobles. 
�Cu�ntos saltos hacen falta para llegar al 2015?
*/

#include <iostream>
using namespace std;
int main()
{
	//Declaro una variable que es la cantidad m�xima de pasos que se van a realizar; obviamente de aqu� se van a ir restando.
	int cantSaltos = 2015;

	//Hago una repetitiva exacta que recorra desde 1 hasta 2015, para poder detectar los m�ltiplos de 4. 
	for(int i=1; i<=2015; i++)
	{
		//Si se detecta un m�ltiplo de 4 se resta 1 a la cantidad de saltos, debido a que ese n�mero comparte casilla con otro. 
		if(i%4==0)
		{
			cantSaltos--;
		}
	}
	/*Luego de terminar toda la repetitiva, la variable en la que guardo la cantidad de pasos qued� con el n�mero final.
	Este es 2015 menos la cantidad de m�ltiplos de 4 que hay entre 1 y 2015. 
	Al tener la soluci�n, la muestro. */
	cout << "Cantidad de saltos: " << cantSaltos << ".\n" << endl;

	system("pause");
	return 0;
}