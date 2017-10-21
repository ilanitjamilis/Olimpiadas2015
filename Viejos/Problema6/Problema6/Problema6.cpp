#include <iostream>
using namespace std;
int main()
{
	int cuenta;

	for (int A=-23; A<23; A++)
	{
		for(int B=-32; B<32; B++)
		{
			cuenta = 4*A*A + 2*B*B;

			if (cuenta == 2008)
			{
				cout << "A= " << A << " B= " << B << "." << endl;
			}
		}
	}
	system ("pause");
	return 0;
}