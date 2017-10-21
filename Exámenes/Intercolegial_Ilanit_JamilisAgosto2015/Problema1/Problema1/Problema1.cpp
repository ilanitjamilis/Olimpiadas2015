/*
Ilanit Jamilis
Problema 1: Encontrar digitos A, B y C tales que el producto 4A . 9B . 2C termine en 492.
*/

#include <iostream>
using namespace std;
int main()
{
	//Acá declaro las variables que luego tendré que utilizar para guardar los últimos 3 dígitos del resultado de la cuenta.
	int dig1=0;
	int dig2=0;
	int dig3=0;
	
	/*Acá hago la repetitiva de los números que va a tomar el dígito A, para probar todas las posiblidades posibles.
	Inicializo la variable en 0 porque es el dígito menor que puede tomar, y termina en 9 porque es el mayor que puede ser.*/
	for(int A=0; A<=9; A++)
	{
		//Acá hago el mismo procedimiento que hice con A, pero con B.
		for(int B=0; B<=9; B++)
		{
			//Y acá realizo lo mismo, pero con C.
			for(int C=0; C<=9; C++)
			{
				//Acá declaro la cuenta que se debe hacer en cada caso, para verificar si su resultado es acorde al que se pide.
				int cuenta = (40+A)*(90+B)*(20+C);

				/*Aca lo que realizo es guardar los últimos 3 dígitos del resultado de la cuenta, cada uno en otra variable, 
				para luego verificar si cumplen las condiciones requeridas. */
				
				//Acá guardo el último dígito.
				dig1=cuenta%10;
				//Y ahora corto el número, sacándole el dígito que ya guarde, para poder encontrar los otros 2. 
				cuenta=cuenta/10;
				//Ahora vuelvo a buscar el último dígito, que es el anteúltimo del número.
				dig2=cuenta%10;
				//Ahora achico de nuevo el número, sacandole el dígito que acabo de guardar. 
				cuenta=cuenta/10;
				/*Ahora buscó el último número que necesito, que es el último de este número que fui cortando, 
				que es el antepenúltimo del resultado al que llegue anteriormente. */
				dig3=cuenta%10;

				//Ahora pregunto si los ultimos 3 dígitos son los que deben ser. El antepenúltimo 4, el anteúltimo 9 y el último 2.
				if(dig1==2 && dig2==9 && dig3==4)
				{
					//Si la condición es verdadera, muestro las soluciones.
					cout << "Solucion posible:\n		A= " << A << ",   B= " << B << ",   C= " << C << ".\n" << endl;
				}
			}
		}
	} 
	system("pause");
	return 0;
}