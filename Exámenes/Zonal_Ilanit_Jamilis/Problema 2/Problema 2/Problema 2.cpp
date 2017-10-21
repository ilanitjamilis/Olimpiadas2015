/*
Problema 2: Hallar la canitdad de parejas (X, Y) de enteros positivos menores que 2015 para los cuales
2*X + 3*Y es primo. 

Soluci�n: Cantidad de parejas= 88929.
*/

#include <iostream>
using namespace std;

int main()
{
	//Ac� declaro todas las variables que necesitar� luego en mi programa. 
	long cantParejasXY=0;
	bool esPrimo=true;
	long i=0;
	long cuenta;

	//Ahora aplico dos repetitivas para poder ver los valores que toman X y Y en un momento determinado.
	for(long X=1; X<1006; X++)
	{
		for(long Y=1; Y<671; Y++)
		{
			//Ahora calculo cuanto da la cuenta con los valores de X y Y tomados en el momento. 
			cuenta=2*X+3*Y;

			//Y ahora hago un procedimiento para ver si el resultado obtenido es primo o no. 
			//Para hacer esto realizo una repetitiva inexacta en la cual me fijo si el n�mero obtenido tiene
			//divisores o no. 
			i=2;
			esPrimo=true;
			//Pongo estas condiciones en el while porque me tengo que fijar mientras el n�mero es primo pero
			//tambien mientras que una variable auxiliar llamada i sea menor al n�mero el cual me estoy fijando
			//si es primo o no. 
			while(esPrimo==true && i<cuenta)
			{
				//Ahora pregunto si el n�mero es divisor de la i. Si lo es asigno que este n�mero ya no es primo.  
				if(cuenta%i==0)
				{
					esPrimo=false;
				}
				i++;
			}
			//En caso de que el n�mero haya salido de la repetitiva siendo primo, es decir, que haya salido
			//debido a la segunda condicion, sumo uno a una mi variable de contador de soluciones.
			if(esPrimo==true)
			{
				cantParejasXY++;
				cout << "Solucion posible\nX= " << X << ".  Y= " << Y <<".  Cuenta: " << cuenta << "\n\n" << endl;
			}
		}
	}	cout << "Cantidad total de soluciones: " << cantParejasXY << ".\n" << endl;
	
	return 0;
}