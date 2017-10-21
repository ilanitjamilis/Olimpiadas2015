#include <iostream>
using namespace std;
int main()
{
	for (int X=1; X<=577; X++)
	{
		for (int Y=1; Y<= 433; Y++)
		{
			int cuenta= (X*Y + 2*X + 3*Y);
					if (cuenta == 1733)
					{
						cout << X << "," << Y << "." << endl;
					}
		}
	}
	system ("pause");
	return 0;
}