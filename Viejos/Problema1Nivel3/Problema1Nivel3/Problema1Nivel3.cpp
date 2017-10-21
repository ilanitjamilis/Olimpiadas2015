//Encontrar la cantidad las combinaciones de cifras A, B, C, de manera que se satisfaga la ecuación: AB • BC • CA = 123760.

#include <iostream>
using namespace std;
int main()
{
	int cantCombinaciones=0;

	for (int A=0; A<=9; A++)
	{
		cantCombinaciones=0;

		for(int B=0; B<=9; B++)
		{
			for(int C=0; C<=9; C++)
			{
				int cuenta=((A*10+B)*(B*10+C)*(C*10+A));
				if(cuenta==123760)
				{
					cantCombinaciones++;
					cout << "A= " << A << ", B= " << B << ", C= " << C << endl;
					cout << "Cant combinaciones= " << cantCombinaciones << endl;
				}
			}
		}
	}
	
	system("pause");
	return 0;
}