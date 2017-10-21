#include <iostream>
using namespace std;

bool funcionEsPrimo(int n)
{
	bool esPrimo = true;
	if (n > 1)
	{
		for (int a = 2; a*a <= n; a++)
		{
			if (n%a == 0)
			{
				esPrimo = false;
			}
		}
	}
	else
	{
		esPrimo = false;
	}
	return esPrimo;
}

int main()
{
	while (true)
	{
		int n = 0;
		cin >> n;
		bool esPrimo = funcionEsPrimo(n);
		if (esPrimo)
		{
			cout << "ES PRIMO" << endl;
		}
		else
		{
			cout << "NO ES PRIMO" << endl;
		}
	}
}