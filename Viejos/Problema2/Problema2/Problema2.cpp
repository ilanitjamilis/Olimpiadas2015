#include <iostream>
using namespace std;
int main()
{
	for(int X=10; X<=1000000; X=X+1)
	{
		for (int Y=10; Y<=1000000; Y=Y+1)
		{
			int cuenta = (X*X + Y*Y);
				if(cuenta==10000)
				{
					cout << X << "," << Y << "." << endl;
				}
		}
	}
	system ("pause");
}