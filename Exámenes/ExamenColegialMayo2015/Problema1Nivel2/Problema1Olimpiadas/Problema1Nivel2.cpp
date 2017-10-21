/* 
Ilanit Jamilis 4IB
Nivel 2
Problema 1: Encontrar tres números enteros positivos A, B y C tales que A < B < C y 208·A + 45·B2 + C3 = 8266.
*/

#include <iostream>
using namespace std;
int main()
{
	/*Hago un for primero con el numero C porque es el que mayor valor va a tomar de todos (A,B y C). Por lo tanto, si hago esto, luego 
	puedo poner como condicion que el numero sea menor al anterior.
	*/
	for(int C=0; C<=21; C++)
	{
		//Ahora hago otro for para encontrar el numero B, el cual es menor que C.
		for(int B=0; B<C; B++)
		{
			//Ahora, por ultimo, averiguo A, el cual es menor que B, y por lo tanto, menor que C.
			for(int A=0; A<B; A++)
			{
				//Aca declaro la cuenta que se debe cumplir si A, B, y C son los numeros correctos.
				int cuenta = (208*A + 45*B*B + C*C*C);
				
				//Ahora, si la cuenta da lo que debe dar, quiere decir que los valores que toman A, B y C en ese momento son las soluciones.
				if(cuenta==8266)
				{
					//Aca muestro las soluciones.
					cout << "A= " << A << ", B= " << B << ", C= " << C << "." << endl;
				}
			}
		}
	}

	system ("pause");
	return 0;
}