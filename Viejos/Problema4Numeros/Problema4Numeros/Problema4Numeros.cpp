#include <iostream>
using namespace std;
int main()
{
	
/*	int X;
	int Y;
	int Z;
	int W;
	
	for (X=10;X<=20;X++)
	{
		for (Y=10;Y<=20;Y++)
		{
			for (Z=10;Z<=20;Z++)
			{
				for(W=10;W<=20;W++)
				{
					if((X*Y + Z*W) == 539)
					{
						cout << X <<
						*/
	for (int x=10; x<=20; x=x+1)
	{
		for (int y=10; y<=20; y=y+1)
		{
			for (int z=10; z<=20; z=z+1)
			{
				for (int w=10; w<=20; w=w+1)
				{
					int cuenta= (x*y + z*w);
					if (cuenta == 539)
					{
						cout << x << "," << y << "," << z <<"," << w << "," << endl;
					}
				}
			}
		}
	}

	system ("pause");
				

}