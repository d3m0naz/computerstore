#pragma once
/*
Oliver Held
Daten aus einer ext. Datei in einen dynamischen Array einlesen
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int ausgabe_ram()
{
	for (i = 0; i < x_ram; i++)
	{
		printf("\n%-2s  %-3i%-40s %2.2f\n", artikel_ram[i].artnr_ram.c_str(), artikel_ram[i].anzahl_ram, artikel_ram[i].bez_ram.c_str(), artikel_ram[i].preis_ram);

	}
	return 0;
}