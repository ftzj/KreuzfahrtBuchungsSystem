#pragma once

#include <string>
#include <vector>

using namespace std;

// Konkretes Produkt
class StandardOstsee
{
private:
	enum Haefen {
		Kiel,
		Aarhus,
		Kopenhagen,
		HafenStart = Kiel,
		HafenEnde = Kopenhagen
	};
	
	

	string anreise;
	string abreise;
	//int anzAusfluegeInklusive[anzHaefen] = {};
	int groesseKabine;

public:
	StandardOstsee() {
		

	}
};

