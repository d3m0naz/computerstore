#pragma once
/*
Oliver Held
Daten aus einer ext. Datei in einen dynamischen Array einlesen
*/
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

int i, i_ram = 0, x_ram = 0;
string zeilen_ram;
string stringzahl;

struct ram
{
	string artnr_ram;
	int anzahl_ram;
	string bez_ram;
	float preis_ram;
};

ram* artikel_ram;

int einlesen_ram()
{
	std::locale::global(std::locale("German_germany"));
	ifstream in_ram;
	in_ram.open("ram.dat");


	if (!in_ram)
	{
		cout << "Datenbankfehler - Datei nicht gefunden.";
	}
	else
	{
		while (getline(in_ram, zeilen_ram)) i_ram++;

		printf("Anzahl Datensätze in Datenbank RAM: %i\n", i_ram / 4);

		in_ram.clear();                 // clear fail and eof bits
		in_ram.seekg(0, std::ios::beg); // back to the start! Quelle:http://stackoverflow.com/questions/7681555/resetting-the-end-of-file-state-of-a-ifstream-object-in-c

		x_ram = i_ram / 4;


		artikel_ram = new ram[x_ram];

		for (i = 0; i < x_ram; i++)
		{
			getline(in_ram, artikel_ram[i].artnr_ram);
			getline(in_ram, stringzahl);
			artikel_ram[i].anzahl_ram = atoi(stringzahl.c_str());
			getline(in_ram, artikel_ram[i].bez_ram);
			getline(in_ram, stringzahl);
			artikel_ram[i].preis_ram = atof(stringzahl.c_str());
		}

		in_ram.close();

	}
	return 0;
}