#include "Kreuzfahrt.h"

Kreuzfahrt::Kreuzfahrt() {}
Kreuzfahrt::~Kreuzfahrt() {}

void Kreuzfahrt::bucheAnreise(
	int abfahrtTag, int abfahrtMonat, int abfahrtJahr,
	Datum ankunft) 
{
	//this->abfahrt = erstelleDatum(abfahrtTag, abfahrtMonat, abfahrtJahr);
	this->ankunft = &ankunft;
}

tm Kreuzfahrt::erstelleDatum(int tag, int monat, int jahr)
{
	tm datum;
	datum.tm_mday = tag;
	datum.tm_mon = monat;
	datum.tm_year = jahr;

	return datum;
}
