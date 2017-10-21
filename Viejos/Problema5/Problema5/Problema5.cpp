#include <iostream>
using namespace std;
int main()
{
	for(int A=0; A<324; A=A+1)
	{
		for(int B=0; B<322; B=B+1)
		{
			int cuenta = (207*A+208*B);
			if(cuenta == 66935)
			{
				if((A%2==0 && B%3==0)||(A%3==0 && B%2==0))
				{
					{
						cout << "A= " << A << " B= " << B << "." << endl;
					}
				}
			}
		}
	}
	
	system ("pause");
		return 0;
}