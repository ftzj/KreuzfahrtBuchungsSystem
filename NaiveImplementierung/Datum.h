#pragma once

class Datum
{
private:
	int tag;
	int monat;
	int jahr;

	int maxTageMonat(int monat);
	bool schaltjahr(int jahr);
	Datum setDatum(int tag, int monat, int jahr);

public:
	Datum();
	Datum(int tag, int monat, int jahr);
	~Datum();

	bool ueberpruefeDatum(int tag, int monat);
	void print();
};

