/*
Ilanit Jamilis
Problema 1: Encontrar digitos A, B y C tales que el producto 4A . 9B . 2C termine en 492.
*/

#include <iostream>
using namespace std;
int main()
{
	//Ac� declaro las variables que luego tendr� que utilizar para guardar los �ltimos 3 d�gitos del resultado de la cuenta.
	int dig1=0;
	int dig2=0;
	int dig3=0;
	
	/*Ac� hago la repetitiva de los n�meros que va a tomar el d�gito A, para probar todas las posiblidades posibles.
	Inicializo la variable en 0 porque es el d�gito menor que puede tomar, y termina en 9 porque es el mayor que puede ser.*/
	for(int A=0; A<=9; A++)
	{
		//Ac� hago el mismo procedimiento que hice con A, pero con B.
		for(int B=0; B<=9; B++)
		{
			//Y ac� realizo lo mismo, pero con C.
			for(int C=0; C<=9; C++)
			{
				//Ac� declaro la cuenta que se debe hacer en cada caso, para verificar si su resultado es acorde al que se pide.
				int cuenta = (40+A)*(90+B)*(20+C);

				/*Aca lo que realizo es guardar los �ltimos 3 d�gitos del resultado de la cuenta, cada uno en otra variable, 
				para luego verificar si cumplen las condiciones requeridas. */
				
				//Ac� guardo el �ltimo d�gito.
				dig1=cuenta%10;
				//Y ahora corto el n�mero, sac�ndole el d�gito que ya guarde, para poder encontrar los otros 2. 
				cuenta=cuenta/10;
				//Ahora vuelvo a buscar el �ltimo d�gito, que es el ante�ltimo del n�mero.
				dig2=cuenta%10;
				//Ahora achico de nuevo el n�mero, sacandole el d�gito que acabo de guardar. 
				cuenta=cuenta/10;
				/*Ahora busc� el �ltimo n�mero que necesito, que es el �ltimo de este n�mero que fui cortando, 
				que es el antepen�ltimo del resultado al que llegue anteriormente. */
				dig3=cuenta%10;

				//Ahora pregunto si los ultimos 3 d�gitos son los que deben ser. El antepen�ltimo 4, el ante�ltimo 9 y el �ltimo 2.
				if(dig1==2 && dig2==9 && dig3==4)
				{
					//Si la condici�n es verdadera, muestro las soluciones.
					cout << "Solucion posible:\n		A= " << A << ",   B= " << B << ",   C= " << C << ".\n" << endl;
				}
			}
		}
	} 
	system("pause");
	return 0;
}