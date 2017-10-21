#include <iostream>
#include <vector>
using namespace std;

int main()
{
	long long num;
	long long suma;
	//Vector dinámico = lista. NO LIMITE.
	//Suma de primos anteriores a N.
	while(true)
	{
		cin>>num;
		vector<int> myVector;
		myVector.push_back(2);//insert
		//myVector.size();//largo
		//int i= myVector[0];//get
		long long i=0;
		bool esPrimo=true;
		long long j=0;
		if(num>2)
		{
			suma=2;
			for(int i=3; i<num; i++)
			{
				if(i%2!=0)
				{
					j=0;
					esPrimo=true;
					while(esPrimo==true && j<myVector.size() && myVector[j]<i/2)
					{
							if(i%myVector[j]==0)
							{
								esPrimo=false;
							}
							j++;
					}
					if(esPrimo)
					{
						myVector.push_back(i);
						suma+=i;
					}
				}
			}
		}
		else
		{
			suma=0;
		}
		
		cout <<"La suma de numeros primos anteriores a "<<num<<" es: "<<suma<<".\n\n";
	}
	
}