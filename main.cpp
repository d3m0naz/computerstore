/*
Oliver Held
Daten aus einer ext. Datei in einen dynamischen Array einlesen
*/
#include <iostream>
#include <string>
#include <fstream>
#include "einlesen_ram.h"
#include "ausgabe_ram.h"
#include "bearbeiten_ram.h"

using namespace std;
char aktion;

int main()
{
	einlesen_ram();

	do
	{
		printf("\nDatensatz (a)usgeben \n");
		printf("Datensatz (b)earbeiten \n");
		printf("Beenden mit \"0\" \n");
		scanf("%c", &aktion);

		switch (aktion)
		{
			case 'a': 
				ausgabe_ram();
				break;
			case 'b': 
				bearbeiten_ram();
				break;
			default: 
				break;
		}
	} 
	while (aktion != '0');

	/*cout << "(1) RAM Bestand listen?"; cin >> aktion;
	if (aktion == 1)
	{
		ausgabe_ram();
	}
	else
	{
		cout << "falsche Eingabe, versuchen Sie \"1\"\n";
	}*/
	cout << "\nHauptfunktion endet hier.\n";
	system("Pause");
	return 0;
}