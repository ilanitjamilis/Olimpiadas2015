// Ver si un numero es primo o no.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long num;

	while (true)
	{
		cin >> num;
		vector<int>myVector;
		myVector.push_back(2);
		bool esPrimo = true;
		long j;

		for (long i = 3; i < num; i++)
		{
			esPrimo = true;
			j = 0;
			while (esPrimo == true && j < myVector.size() && myVector[j] < i / 2)
			{
				if (i%myVector[j] == 0)
				{
					esPrimo = false;
				}
			}
			if (esPrimo == true)
			{
				myVector.push_back(i);
			}
		}

		esPrimo = true;
		j = 0;
		while (esPrimo == true && j < myVector.size() && myVector[j] < num / 2)
		{
			if (num%myVector[j] == 0)
			{
				esPrimo = false;
			}
		}

		if (esPrimo == true)
		{
			cout << "Numero ingresado es primo.";
		}
		else
		{
			cout << "Numero ingresado no es primo.";
		}
	}
}