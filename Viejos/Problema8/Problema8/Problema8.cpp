/*
8)	Durante el a�o pasado 3 voluntarios juntaron 185 893 207 tapitas para el Hospital Garrahan. 
	Cada uno de los voluntarios junt� siempre la misma cantidad de tapitas por d�a. 
	Carlos junt� por d�a el triple que Bruno; Y Bruno junt� por d�a el triple que Alfredo. 
	Para compensar un poco, Alfredo trabaj� el doble de d�as que Bruno; Y Bruno, el doble que Carlos. 
	�Cu�ntos d�as trabajo cada uno? Dar todas las soluciones v�lidas.
*/
/*
#include <iostream>
using namespace std;
int main()
{
	long tapitasAlfredoPorDia=1;
	long tapitasBrunoPorDia=1;
	long tapitasCarlosPorDia=1;
	int diasCarlosTrabajados=1;
	int diasBrunoTrabajados=1;
	int diasAlfredoTrabajados=1;

	for(tapitasCarlosPorDia=1; tapitasCarlosPorDia<=185893207; tapitasCarlosPorDia++)
	{
		if(tapitasCarlosPorDia%3==0 && (tapitasCarlosPorDia/3)%3==0)
		{
			tapitasBrunoPorDia=tapitasCarlosPorDia/3;
			tapitasAlfredoPorDia=tapitasBrunoPorDia/3;

			for(diasAlfredoTrabajados=4; diasAlfredoTrabajados<=364; diasAlfredoTrabajados++)
			{
				if(diasAlfredoTrabajados%2==0 && (diasAlfredoTrabajados/2)%2==0)
				{
					diasBrunoTrabajados=diasAlfredoTrabajados/2;
					diasCarlosTrabajados=diasBrunoTrabajados/2;
				
					if(tapitasAlfredoPorDia*diasAlfredoTrabajados + tapitasBrunoPorDia*diasBrunoTrabajados + tapitasCarlosPorDia*diasCarlosTrabajados == 185893207)
					{
						cout << "Solucion valida:\n	Tapitas por dia:\n			Alfredo: " << tapitasAlfredoPorDia << ".\n			Bruno: " << tapitasBrunoPorDia << 
						".\n			Carlos: " << tapitasCarlosPorDia << ".\n	Dias trabajados:\n			Alfredo: " << diasAlfredoTrabajados << 
						".\n			Bruno: " << diasBrunoTrabajados << ".\n			Carlos: " << diasCarlosTrabajados << ".\n\n" << endl;
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
*/