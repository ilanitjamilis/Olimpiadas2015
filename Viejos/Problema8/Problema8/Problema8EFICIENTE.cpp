/*
8)	Durante el año pasado 3 voluntarios juntaron 185 893 207 tapitas para el Hospital Garrahan. 
	Cada uno de los voluntarios juntó siempre la misma cantidad de tapitas por día. 
	Carlos juntó por día el triple que Bruno; Y Bruno juntó por día el triple que Alfredo. 
	Para compensar un poco, Alfredo trabajó el doble de días que Bruno; Y Bruno, el doble que Carlos. 
	¿Cuántos días trabajo cada uno? Dar todas las soluciones válidas.
*/
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

	//206.54.800 = 185.893.207/9	Dividido 9 porque C junta 9A por día.
	for(tapitasAlfredoPorDia=1; tapitasAlfredoPorDia<=20654800; tapitasAlfredoPorDia++)
	{
		tapitasBrunoPorDia=tapitasAlfredoPorDia*3;
		tapitasCarlosPorDia=tapitasBrunoPorDia*3;

			//91 = 365/4	Dividido 4 porque A trabaja 4C.
			for(diasCarlosTrabajados=1; diasCarlosTrabajados<=91; diasCarlosTrabajados++)
			{
				diasBrunoTrabajados=diasCarlosTrabajados*2;
				diasAlfredoTrabajados=diasBrunoTrabajados*2;
				
					if(tapitasAlfredoPorDia*diasAlfredoTrabajados + tapitasBrunoPorDia*diasBrunoTrabajados + tapitasCarlosPorDia*diasCarlosTrabajados == 185893207)
					{
						cout << "Solucion valida:\n	Tapitas por dia:\n			Alfredo: " << tapitasAlfredoPorDia << ".\n			Bruno: " << tapitasBrunoPorDia << 
						".\n			Carlos: " << tapitasCarlosPorDia << ".\n	Dias trabajados:\n			Alfredo: " << diasAlfredoTrabajados << 
						".\n			Bruno: " << diasBrunoTrabajados << ".\n			Carlos: " << diasCarlosTrabajados << ".\n\n" << endl;
					}
			}
	}
	system("pause");
	return 0;
}