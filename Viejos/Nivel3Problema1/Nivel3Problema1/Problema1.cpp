/*
Encontrar la cantidad las combinaciones de cifras A, B, C, de manera que se satisfaga la ecuación:
AB • BC • CA = 123760.
*/

#include <iostream>
using namespace std;
int main()
{
	int cantidadSoluciones = 0;
	for(int A=1; A<=9; A++)
	{
		for(int B=1; B<=9; B++)
		{
			for(int C=1; C<=9; C++)
			{
				int cuenta=(A*10+B)*(B*10+C)*(C*10+A);

				if(cuenta==123760)
				{
					cantidadSoluciones++;
					cout << "Solucion valida:\n			A= " << A << "  B= " << B << "  C= " << C << endl;
				}
			}
		}
	}
	cout << "\nCantidad de soluciones: " << cantidadSoluciones << "\n" << endl;
	system("pause");
	return 0;
}