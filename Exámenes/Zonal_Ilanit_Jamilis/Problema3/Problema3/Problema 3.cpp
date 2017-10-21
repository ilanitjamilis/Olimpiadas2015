/*
Problema 3: Los vecinos de Villa La Estrechua quieren construir un nuevo tanque de agua. El tanque
tendrá forma prismática (como una caja). El costo del techo es de $23 por metro cuadrado (debe 
resistir el sol y la lluvia). El costo de las paredes norte y sur es $17 por metro cuadrado 
(debe resistir los vientos). El costo de las otras dos paredes es de $13 por metro cuadrado. 
El piso ya está construido y no tiene costo. Por los bloques de construcción usados, las 
dimensiones del tanque son cantidades enteras en metros. El tanque contendrá exactamente mil 
millones de litros de agua. ¿Cuáles deben ser las dimensiones del tanque para que el costo 
sea mínimo? Dar todas las posibilidades...
a) ...si además ninguna de las tres dimensiones del tanque pueden superar los 1000m. 
b) ... si es aceptable que cualquiera de las tres dimensiones supere ese valor. 

Soluciones a: Techo y piso: 1001*1001. Paredes norte y sur: 1001*1001. Otras dos paredes: 1001*1001.
*/

#include <iostream>
using namespace std;

int main()
{
	int techoP=23;
	int paredesSNP=17;
	int paredesABP=13;
	long metrosCuadrados;
	long dimensionTechoMinimo; 
	long dimensionParedesSNMinimo; 
	long dimensionParedesABMinimo; 
	long plataMin=83000000;
	long auxPlata;
	long techoPiso;
	long paredesSN;
	long paredesAB;

	for(techoPiso=1; techoPiso<=1000; techoPiso++)
	{
		for(paredesSN=1; paredesSN<=1000; paredesSN++)
		{
			for(paredesAB=1; paredesAB<=1000; paredesAB++)
			{
				metrosCuadrados= techoPiso*paredesSN*paredesAB;
				if(metrosCuadrados==1000000)
				{
					auxPlata=(techoPiso*techoPiso*techoP)+(paredesSN*paredesSN*paredesSNP*2)+(paredesAB*paredesAB*paredesABP*2);
					if(auxPlata<plataMin)
					{
						dimensionTechoMinimo=techoPiso;
						dimensionParedesSNMinimo=paredesSN;
						dimensionParedesABMinimo=paredesAB;
					}
				}
			}
		}
	}

	cout << "Dimensiones costo mínimo\nTecho y piso: " << techoPiso <<"*"<<techoPiso<<". Paredes sur y norte: "<< paredesSN<<"*"<<paredesSN<<".  Otras paredes: "<<paredesAB<<"*"<<paredesAB<<"."<<endl;

	system("pause");
	return 0;
}