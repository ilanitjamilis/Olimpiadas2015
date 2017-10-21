#include <iostream>
using namespace std;
int main()
{
	for(int A=1; A<=100; A=A+1)
	{
		for (int B=1; B<=100; B=B+1)
		{
			for (int C=1; C<=100; C=C+1)
			{
				for(int D=1; D<=100; D=D+1)
				{
					int cuenta=(A*A+3*B);
					if(cuenta==(C*C+D*D))
					{
						cout << A << "," << B << "," << C << "," << D << "." << endl;
					}
				}
			}
		}
	}
	system ("pause");
}