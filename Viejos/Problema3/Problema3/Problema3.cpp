#include <iostream>
using namespace std;
int main()
{
	for (int A=0; A<=9; A=A+1)
	{
		for(int B=0; B<=9; B=B+1)
		{
			for (int C=0; C<=9; C=C+1)
			{
				int cuenta = (C+6*10+B*100+4*1000+A*10000);
					if((cuenta%2006)==0)
					{
						cout << "A= " << A << " B= " << B << " C= " << C << "." << endl;
					}
			}
		}
	}
system("pause");
}
