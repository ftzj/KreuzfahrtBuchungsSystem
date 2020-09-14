#pragma once

#include <time.h>

#include "Datum.h"

class Kreuzfahrt
{
public:
	Kreuzfahrt();
	~Kreuzfahrt();

	void bucheAnreise(
		int abfahrtTag, int abfahrtMonat, int abfahrtJahr, 
		Datum ankunft
	);

	/*void bucheAbreise();
	void bucheKabine();
	void print();*/


private:
	tm* abfahrt = NULL;
	Datum* ankunft = NULL;
	// Dauer der Kreuzfahrt in Tagen
	int dauer = 0;

	// Methode zur Erstellung des Ab- und Anreisedatums als struct tm
	tm erstelleDatum(int tag, int monat, int jahr);
};

