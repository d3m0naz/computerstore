#include<string>
#include<fstream>
#include<iostream>

using namespace std; 

struct ram
{
	string artnr_ram;
	string anzahl_ram;
	string bez_ram;
	string preis_ram;
};

int main()
{
	string zeilen_ram;
	int i, i_ram=0;
	int j_ram=0;
	
	ifstream ram_in;
	ram artikel[8];
	ram_in.open("ram.dat");
	if (!ram_in)
	{
		printf("Fehler: Datei nicht vorhanden.\n\n");
	}
	else
	{
		printf("RAM Datenbank erfolgreich geöffnet.\n\n");
	}
	while (getline(ram_in, zeilen_ram)) j_ram++;
	i_ram = j_ram/4;


	cout << "Es sind " << i_ram << " Datensaetze (i)\n\n";
	cout << "in " << j_ram << " Zeilen (j) vorhanden.\n\n";

	//ram >> i_ram;

	for(i=0;i<i_ram;i++)
	{
		ram_in >> artikel[i].artnr_ram;
		ram_in >> artikel[i].anzahl_ram;
		ram_in >> artikel[i].bez_ram;
		ram_in >> artikel[i].preis_ram;
		printf("Der Vertreter mit der Nummer %2s\n", artikel[i].artnr_ram.c_str());
		cout << artikel[i].bez_ram;
	}

	


	system("Pause");
	return 0;
}