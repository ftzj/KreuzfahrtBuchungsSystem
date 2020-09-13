#include "Reisebuero.h"


Reisebuero::Reisebuero() {}
//Reisebuero::~Reisebuero() {}

Kreuzfahrt Reisebuero::bucheKreuzfahrt() {

	//Kreuzfahrt* kreuzfahrt = new Kreuzfahrt();
	Kreuzfahrt kreuzfahrt;

	kreuzfahrt.bucheAnreise();
	kreuzfahrt.bucheAbreise();
	kreuzfahrt.bucheKabine();
	kreuzfahrt.print();
	return kreuzfahrt;
}


