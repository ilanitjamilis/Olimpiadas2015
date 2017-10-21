#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>myVector;
	myVector.push_back(2);

	bool esPrimo = true;
	int j = 0;

	int auxP = 0;
	int auxQ = 0;
	int auxR = 0;

	int cantSoluciones = 0;

	for (int i = 3; i <= 10000; i++)
	{
		j = 0;
		esPrimo = true;

		while (esPrimo && j < myVector.size() && myVector[j]< i/ 2)
		{
			if (i%myVector[j] == 0)
			{
				esPrimo = false;
			}
			j++;
		}
		if (esPrimo)
		{
			myVector.push_back(i);
			if (myVector.size() > 3)
			{
				for (int P = myVector[auxP]; P <= myVector.size(); auxP++)
				{
					for (int Q = myVector[auxQ]; Q <= myVector.size(); auxQ++)
					{
						for (int R = myVector[auxR]; R <= myVector.size; auxR++)
						{
							int cuenta = P*P + Q*Q + R*R;

							for (int f = 3; f <= cuenta; f++)
							{
								j = 0;
								esPrimo = true;

								while (esPrimo && j < myVector.size() && myVector[j] < f / 2)
								{
									if (f%myVector[j] == 0)
									{
										esPrimo = false;
									}
									j++;
								}
								if (esPrimo)
								{
									cantSoluciones++;
									cout << "P: " << P << ", Q: " << Q << ", R: " << R << endl;
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}