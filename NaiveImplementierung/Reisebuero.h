#pragma once

#include "Kreuzfahrt.h"

class Reisebuero
{
public:
	Reisebuero();
	~Reisebuero() {
		//delete kreuzfahrt;
	}

	//Kreuzfahrt* kreuzfahrt = new Kreuzfahrt();
	Kreuzfahrt bucheKreuzfahrt();

private:
};

