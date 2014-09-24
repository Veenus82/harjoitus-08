/******
*ohjelman nimi: harjoitus 8
*tekij� Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka tulostaa annetut kolme lukua suuruus-
järjestyksessä (pienimmästä suurimpaan) näytölle
(katso harj. 1 suunnitelma)
a) käytä liukulukuja
*versio 1.0
*pvm: 24.9.2014
*/
#include <iostream>
using namespace std;
float main()
{
	float luku1;
	float luku2;
	float luku3;

	cout << "Anna luku1 ";
	cin >> luku1;
	cout << "Anna luku2 ";
	cin >> luku2;
	cout << "Anna luku3 ";
	cin >> luku3;

	if (luku1 >= luku2)
	{
		if (luku2 >= luku3)
			cout << luku3 << ", " << luku2 << ", " << luku1;
		else
			cout << luku2 << ", " << luku3 << ", " << luku1;
	}

	else if (luku3 >= luku1)
	{
		if (luku1 >= luku2)
			cout << luku2 << ", " << luku1 << ", " << luku3;
		else
			cout << luku1 << ", " << luku2 << ", " << luku3;
	}
	else if (luku2 >= luku1)
	{

		if (luku1 >= luku3)
			cout << luku3 << ", " << luku1 << ", " << luku2;
		else
			cout << luku1 << ", " << luku3 << ", " << luku2;
	}

}