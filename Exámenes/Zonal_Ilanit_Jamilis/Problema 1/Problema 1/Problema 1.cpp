/*
Problema 1: Hallar todos los n�meros de la forma CASA compuestos por los d�gitos A, C y S no nulos 
que cumplan que el resultado de SACA * CASA empiece con S y termine con SA.
Ejemplo: 2015 empieza con 2 y termina con 15.

Soluci�n: CASA = 8525 o CASA=7616.
*/

#include <iostream>
using namespace std;

int main()
{
	//Ac� declaro todas las variables que voy a necesitar luego. 

	int A;
	int C;
	int S;
	int SACA;
	int CASA;
	int cuenta;
	int ultimoDigito;
	int anteultimoDigito;
	int primerDigito;
	int cantSoluciones=0;

	//Ac� hago tres repetitivas con las letras pedidas para luego, en la �ltima, tener todos los valores 
	//que toman A, C y S en ese momento. Las letras las declaro que pueden ir de 1 a 9 porque cada letra
	//es un n�mero, es decir, un solo d�gito. 
	for(A=1; A<=9; A++)
	{
		for(C=1; C<=9; C++)
		{
			for(S=1; S<=9; S++)
			{
				//Ac� hago las cuentas de cuanto valen SACA y CASA con los valores que se est�n tomando
				//en ese momento.
				SACA=A+C*10+A*100+S*1000;
				CASA=A+S*10+A*100+C*1000;
				//Ahora multiplico estos n�meros para ver cu�nto da el resultado total.
				cuenta=SACA*CASA;
				//Ahora lo que hago es ver cuanto vale el �ltimo d�gito, para luego ver si vale lo mismo que A.
				//Para hacer esto lo que hago es ver cuanto es el resto de la divisi�n por 10. Este va a ser el
				//�ltimo d�gito.
				ultimoDigito=cuenta%10;
				//Ahora saco ese �ltimo d�gito, para ver luego el ante�ltimo de la misma manera que lo hice con
				//el anterior. Para esto divido cuenta por 10. 
				cuenta=cuenta/10;
				//Ahora hago lo mismo que antes para sacar el anteultimo d�gito de SACA * CASA. Para esto me fijo
				//el �ltimo d�gito que tiene "cuenta" en este momento.
				anteultimoDigito=cuenta%10;
				//Y ahora, para poder averiguar el primer d�gito, lo que hago es dividir la cuenta por 10, hasta
				//que los d�gitos sean menores a 2. Cuando la cantidad de d�gitos es menor a 2 quiere decir que
				//ya tengo el primer digito de mi gran n�mero. 
				while(cuenta>10)
				{
					cuenta=cuenta/10;
				}
				primerDigito=cuenta;
				//Ahora pregunto si el �ltimo d�gito es igual a A, si el ante�ltimo y el primero son iguales a S.
				if(ultimoDigito==A && anteultimoDigito==S && primerDigito==S)
				{
					//Si lo son, sumo uno a la cantidad de soluciones; y muestro la soluci�n completa. 
					cantSoluciones++;
					cout << "Posible solucion\nA: " << A << ".  C: " << C << ".  S: " << S << ".  CASA: " << CASA << "\n\n" << endl;
				}
			}
		}
	}

	cout << "\n\nCantidad de soluciones: " << cantSoluciones << ".\n" << endl;

	return 0;
}