#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "einlesen_ram.h"

using namespace std;


int bearbeiten_ram()
{
	x_ram = 0;
	i_ram = 0;
	ifstream out_ram;
	out_ram.open("ram.dat");

	if (!out_ram)
	{
		cout << "Datenbankfehler - Datei nicht gefunden.";
	}
	else
	{
		while (getline(out_ram, zeilen_ram)) i_ram++;

		printf("Anzahl Datensätze in Datenbank RAM: %i\n", i_ram / 4);

		out_ram.clear();                 // clear fail and eof bits
		out_ram.seekg(0, std::ios::beg); // back to the start! Quelle:http://stackoverflow.com/questions/7681555/resetting-the-end-of-file-state-of-a-ifstream-object-in-c

		x_ram = i_ram / 4 + 1;


		artikel_ram = new ram[x_ram];

		cout << x_ram;
	}

	return 0;
}