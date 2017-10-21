#include <iostream>
using namespace std;
int main()
{
	for(int A=0; A<=9; A=A+1)
	{
		for(int B=0; B<=9; B=B+1)
		{
			int cuenta = ((A*10+B)*(A*1000+B*100+A*10+B)*(A*1000+A*100+B*10+B));
				if(cuenta==154713416)
				{
					cout << "A= " << A << " B= " << B << "."<< endl;
				}
		}
	}
	system("pause");
	return 0;
}
