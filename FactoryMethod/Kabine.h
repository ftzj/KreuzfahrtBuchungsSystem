#pragma once

#include<string>
#include<time.h>

using namespace std;

class Kabine
{
private:

	// Anzahl der Kabinen mit uebereinstimmenden Merkmalen
	int anzahl;
	// bereits gebuchte Kabinen
	int gebucht;
	// Nummer der Kabine
	int nummer;
	// Wert = Balkon, Meerblick, Innen 
	string lage;
	// wert = Doppelzimmer, Familienzimmer, JuniorSuite, Suite
	string art;
	// Anzahl der Betten
	int betten;

public:

	Kabine(int anzahl, int nummer, string lage, string art, int betten);
	~Kabine();

	void print();
};

