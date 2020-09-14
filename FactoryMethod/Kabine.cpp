#include "Kabine.h"

#include <iostream>
#include<time.h>

Kabine::Kabine(int anzahl, int nummer, string lage, string art, int betten) {
	this->gebucht = 0;

	this->anzahl = anzahl;
	this->nummer = nummer;
	this->lage = lage;
	this->art = art;
	this->betten = betten;
}

Kabine::~Kabine(){}

void Kabine::print() {
	cout << "\nKabinennummer: " << nummer << endl;
	cout << "Lage: " << lage << endl;
	cout << "Art: " << art << endl;
	cout << "Anzahl Betten: " << betten << "\n" << endl;
}