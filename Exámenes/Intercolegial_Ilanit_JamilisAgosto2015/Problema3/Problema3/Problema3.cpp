/*
Ilanit Jamilis
Problema 3: a) Hallar tres enteros positivos X, Y y Z todos menores de 10000 que cumplan las siguientes dos ecuaciones simultáneamente:
2*X + 3*Y*Y + 5*Z*Z = 18.143.426
5*X + 4*Y*Y + 2*Z*Z = 10.278.149
			b) Hallar todas las soluciones del ítem a.
*/
#include <iostream>
using namespace std;
int main()
{
	/*Hago una repetitiva exacta para probar todas las posibilidades que puede tomar X.
	La inicializo en 1 porque dice que X tiene que ser un entero positivo, y la termino en 9999 porque el problema pide que sea menor a 10000. 
	No puedo achicar el número mayor que puede tomar X, porque despejando las ecuaciones no se llega a un valor menor a 10000. */
	for(int X=1; X<10000; X++)
	{
		/*Realizo el mismo procedimiento que con X con Y respectivamente.
		Achique el máximo de Y, despejando la Y en las dos ecuaciones (poniendo que X y Z valen 0), y tomé el valor más grande de los dos.*/
		for(int Y=1; Y<2460; Y++)
		{
			/*Vuelvo a realizar lo mismo con Z, probar todos los valores que este puede llegar a tomar. 
			Achique Z realizando el mismo procedimiento que con la Y, pero con sus debidos números; despejé las 2 ecuaciones. */
			for(int Z=1; Z<2267; Z++)
			{
				/*Declaro y obtengo las soluciones de las 2 cuentas que luego tengo que verificar si los resultado son los pedidos, 
				con la X, la Y y la Z que están en este momento. */
				int cuenta1 = 2*X + 3*Y*Y + 5*Z*Z;
				int cuenta2 = 5*X + 4*Y*Y + 2*Z*Z;

				//Pregunto si a los resultados que se llego son los que deben ser para que X, Y y Z sean posibles soluciones de este problema.
				if(cuenta1==18143426 && cuenta2==10278149)
				{
					//Si acorde a la X, la Y, y la Z que se llego en ese momento, los resultados de las cuentas son las que se piden, muestro X, Y y Z.
					cout << "Solucion posible:\n		X= " << X << ".     Y= " << Y << ".     Z= " << Z << ".\n" << endl;
				}
			}
		}
	}
	system("pause");
	return 0;
}