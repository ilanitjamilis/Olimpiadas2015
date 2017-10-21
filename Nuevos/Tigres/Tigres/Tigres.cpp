/*
	Tres tristes tigres tragan trigo de un trigal. Tristes están porque sólo trigo tragan. 
	La primera tabla da el nombre de cada tigre, la cantidad mínima y máxima de kilocalorías que puede comer, 
	y la cantidad mínima o máxima (en porcentaje del peso ingerido) que debe comer de cada macronutriente 
	(proteínas, lípidos, hidratos de carbono).

	tigre		mín kcal	máx kcal 	mín %prot.	mín %líp.	máx % hidr. carb.
	Tristán		6696		8184		18.5 %		4.0 %		70.0 %
	Tirso		5670		6930		16.5 %		3.5 %		75.0 %
	Tatiana		4653		5687		13.5 %		3.0 %		80.0 %

	Hay tres variedades de trigo. La segunda tabla da la composición nutricional de cada variedad, 
	por cada pastilla de trigo de 100g que no se puede fraccionar, y cuántas pastillas disponibles hay.

	trigo		kcal		proteínas	lípidos		hidr. carb.	past.	disponible
	germen		360			23.15		9.72		51.80				18
	salvado		216			15.55		4.25		64.51				22
	harinero	331			10.35		1.56		74.24				30

	a) Dar un menú posible, es decir, cuántas pastillas de cada variedad darle a cada tigre.
	b) Dar todos los menús posibles.

*/

#include <iostream>
using namespace std;
int main()
{
	int germenTristan = 0;
	int salvadoTristan = 0;
	int harineroTristan = 0;

	int germenTriso = 0;
	int salvadoTriso = 0;
	int harineroTriso = 0;

	int germenTatiana = 0;
	int salvadoTatiana = 0;
	int harineroTatiana = 0;

	int germenDisponible = 18;
	int salvadoDisponible = 22;
	int harineroDisponible = 30;

	for (int germen = 0; germen <= germenDisponible; germen++)
	{
		for (int salvado = 0; salvado <= salvadoDisponible; salvado++)
		{
			for (int harinero = 0; harinero <= harineroDisponible; harinero++)
			{
				int kcal = germen * 360 + salvado * 216 + harinero * 331;
				double proteinas = germen*23.15 + salvado*15.55 + harinero*10.35;
				double lipidos = germen*9.72 + salvado*4.25 + harinero*1.56;
				double hidrCarb = germen*51.80 + salvado*64.51 + harinero*74.24;

				if (kcal >= 6696 && kcal <= 8184 && proteinas >= 18.5 && lipidos >= 4 && hidrCarb <= 70)
				{
					germenTristan = germen;
					salvadoTristan = salvado;
					harineroTristan = harinero;

					germenDisponible -= germenTristan;
					salvado -= salvadoTristan;
					harineroDisponible -= harineroTristan;

					for (germen = 0; germen <= germenDisponible; germen++)
					{
						for (salvado = 0; salvado <= salvadoDisponible; salvado++)
						{
							for (harinero = 0; harinero <= harineroDisponible; harinero++)
							{
								kcal = germen * 360 + salvado * 216 + harinero * 331;
								proteinas = germen*23.15 + salvado*15.55 + harinero*10.35;
								lipidos = germen*9.72 + salvado*4.25 + harinero*1.56;
								hidrCarb = germen*51.80 + salvado*64.51 + harinero*74.24;

								if (kcal >= 5670 && kcal <= 6930 && proteinas >= 16.5 && lipidos >= 3.5 && hidrCarb <= 75)
								{
									germenTriso = germen;
									salvadoTriso = salvado;
									harineroTriso = harinero;

									germenDisponible -= germenTriso;
									salvadoDisponible -= salvadoTriso;
									harineroDisponible -= harineroTriso;

									for (germen = 0; germen <= germenDisponible; germen++)
									{
										for (salvado = 0; salvado <= salvadoDisponible; salvado++)
										{
											for (harinero = 0; harinero <= harineroDisponible; harinero++)
											{
												kcal = germen * 360 + salvado * 216 + harinero * 331;
												proteinas = germen*23.15 + salvado*15.55 + harinero*10.35;
												lipidos = germen*9.72 + salvado*4.25 + harinero*1.56;
												hidrCarb = germen*51.80 + salvado*64.51 + harinero*74.24;

												if (kcal >= 4653 && kcal <= 5687 && proteinas >= 13.5 && lipidos >= 3 && hidrCarb <= 80)
												{
													germenTatiana = germen;
													salvadoTatiana = salvado;
													harineroTatiana = harinero;

													cout << "Solucion posible: \n" << endl;
													cout << "Triso:		germen " << germenTriso << "	salvado " << salvadoTriso << "	harinero " << harineroTriso << endl;
													cout << "Tristan:		germen " << germenTristan << "	salvado " << salvadoTristan << "	harinero " << harineroTristan << endl;
													cout << "Tatiana:	germen " << germenTatiana << "	salvado " << salvadoTatiana << "	harinero " << harineroTatiana << endl;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}