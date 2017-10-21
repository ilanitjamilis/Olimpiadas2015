// Divisores de 1.279.224
#include <iostream>
using namespace std;
int main()
{
	cout << "Divisores de 1.279.224:" << endl;
	long cantDivisores=0;
	for (int i = 1; i <=1279224 ; i++)
	{
		if(1279224%i==0)
		{
			cantDivisores++;
			cout << "			- " << i << endl;
		}
	}
	cout << "\nCantidad total de divisores: " << cantDivisores << "." << endl;
	system("pause");
	return 0;
}