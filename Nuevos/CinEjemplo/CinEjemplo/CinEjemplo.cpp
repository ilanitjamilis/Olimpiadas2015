#include <iostream>
using namespace std;

void(main)()
{
	while(true)
	{
		//Calcula la suma de digitos anteriores a x.
		double num;
		cin>>num;
		double suma=0;
		/*for(int i=1;i<num;i++)
		{
			suma+=i;
		}*/
		suma=num*((num/2)-0.5);
		cout << "\nLa suma de los numeros anteriores a " << num << " es: " << suma << ".\n\n" << endl;
	}
}
