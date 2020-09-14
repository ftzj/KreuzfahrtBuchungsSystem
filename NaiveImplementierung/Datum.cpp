#include "Datum.h"

#include <iostream>

using namespace std;

Datum::Datum(int tag, int monat, int jahr) {
	this->setDatum(tag, monat, jahr);
}

Datum::~Datum() {}

bool Datum::ueberpruefeDatum(int tag, int monat) {

	if (tag < 1 || tag > maxTageMonat(monat) || monat < 1 || monat > 12) {
		return false;
	}
	return true;
}

int Datum::maxTageMonat(int monat) {

	switch (monat) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
		break;
	case 2:
		if (schaltjahr(jahr)) {
			return 28;
		}
		else {
			return 29;
		}
	default:
		cout << "Monat falsch" << endl;
		return 0;
	}
}

bool Datum::schaltjahr(int jahr) {
	if (jahr % 4 != 0 || jahr % 100 == 0 || jahr % 400 != 0) {
		return false;
	}
	return true;
}

void Datum::print() {
	cout << tag << "." << monat << "." << jahr << endl;
}

Datum Datum::setDatum(int tag, int monat, int jahr) {
	if (!ueberpruefeDatum(tag, monat)) {
		//cout << "Datum nicht eingelesen" << endl;
		throw "FEHLER: Datum ist ungueltig.";
	}
	else {
		this->tag = tag;
		this->monat = monat;
		this->jahr = jahr;
	}
}

// rechnet nur ueber einen Monat hinweg korrekt
void Datum::addiereTage(int tage) {

	if (this->tag + tage > maxTageMonat(this->monat))
	{
		this->tag = this->tag + tage - maxTageMonat(this->monat);
		this->addiereMonate(1);
	}
}

void Datum::addiereMonate(int monate) {
	if (this->monat + monat > 12) {
		
		int anzJahre = monate % 12;
		monate = this->monat + (monate - monate * anzJahre) - 12;

		this->jahr += anzJahre;
	}
	else {
		this->monat += monate;
	}
}
