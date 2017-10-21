/*
	Encontrar un número primo ABCDEF de 6 cifras tal que los tres números de 2 cifras AB, CD, EF sean también todos primos.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>myVector;
	myVector.push_back(2);
	int j = 0;
	bool esPrimo = true;
	bool ABesPrimo = true; 
	bool CDesPrimo = true;
	bool EFesPrimo = true;
	bool ABCDEFesPrimo = true;

	int AB = 0;
	int CD = 0; 
	int EF = 0;

	int ABCDEF = 0;

	/*for (int i = 3; i <= 999999; i++)
	{
		j = 0;
		esPrimo = true;

		while (esPrimo && j < myVector.size() && myVector[j] < i / 2)
		{
			if (i % myVector[j] == 0)
			{
				esPrimo = false;
			}
			j++;
		}
		if (esPrimo)
		{
			myVector.push_back(i);
		}
	}*/

	for (int A = 1; A <= 9; A++)
	{
		for (int B = 0; B <= 9; B++)
		{
			AB = A * 10 + B;
			if (AB > 1)
			{
				ABesPrimo = true;
				j = 0;
				while (ABesPrimo && j<myVector.size() && myVector[j] < AB / 2)
				{
					if (AB % myVector[j] == 0)
					{
						ABesPrimo = false;
					}
					j++;
				}
			}
			else
			{
				ABesPrimo = false;
			}
			if (ABesPrimo)
			{
				for (int C = 0; C <= 9; C++)
				{
					for (int D = 0; D <= 9; D++)
					{
						CD = C * 10 + D;
						if (CD > 1)
						{
							CDesPrimo = true;
							j = 0;
							while (CDesPrimo && j<myVector.size() && myVector[j] < CD / 2)
							{
								if (CD % myVector[j] == 0)
								{
									CDesPrimo = false;
								}
								j++;
							}
						}
						else
						{
							CDesPrimo = false;
						}
						if (CDesPrimo)
						{
							for (int E = 0; E <= 9; E++)
							{
								for (int F = 0; F <= 9; F++)
								{
									EF = E * 10 + F;
									ABCDEF = F + E * 10 + D * 100 + C * 1000 + B * 10000 + A * 100000;

									if (EF > 1)
									{
										EFesPrimo = true;
										j = 0;
										while (EFesPrimo && j<myVector.size() && myVector[j] < EF / 2)
										{
											if (EF % myVector[j] == 0)
											{
												EFesPrimo = false;
											}
											j++;
										}
									}
									else
									{
										EFesPrimo = false;
									}
									if (EFesPrimo)
									{
										if (ABCDEF > 1)
										{
											for (int i = 3; i <= ABCDEF; i++)
											{
												esPrimo = true;
												j = 0;
												while (esPrimo && j<myVector.size() && myVector[j] < i / 2)
												{
													if (i % myVector[j] == 0)
													{
														esPrimo = false;
													}
													j++;
												}
												if (esPrimo)
												{
													myVector.push_back(i);
												}
											}
											if (esPrimo)
											{
												cout << "Solucion: A= " << A << ", B= " << B << ", C= " << C << ", D= " << D << ", E= " << E << ", F= " << F << endl;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}