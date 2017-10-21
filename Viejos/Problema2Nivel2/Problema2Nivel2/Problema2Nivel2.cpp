#include <iostream>
using namespace std;
int main()
{
	int cantdivi = 0;

	for(int N=17784; N<=1778400000; N++)
	{
		cantdivi = 0;
		
		for(int divisores=1; divisores<=N; divisores++)
		{
			if(N%divisores == 0)
			{
				cantdivi++;
			}

		}
		if(cantdivi == 18 && N%17784==0)
		{
			cout << "N= " << N << "." << endl;
			break;
		}

	}
	system ("pause");
	return 0;
}
