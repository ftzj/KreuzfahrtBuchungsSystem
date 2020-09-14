// NaiveImplementierung.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h>

#include <chrono>


using namespace std;
using namespace std::chrono;

tm erstelleDatum(int tag, int monat, int jahr);
void printDatum(tm datum);
tm addiereTage(tm datum, int dauer);

int main()
{
    std::cout << "Hello World!\n";
	
	tm datum;
	datum = erstelleDatum(29, 3, 2021);
	printDatum(datum);

	datum = addiereTage(datum, 10);
	printDatum(datum);

}

tm erstelleDatum(int tag, int monat, int jahr)
{
	tm datum;

	datum.tm_mday = tag;
	datum.tm_mon = monat;
	datum.tm_year = jahr;

	return datum;
}

void printDatum(tm datum) {
	cout << datum.tm_mday << "." << datum.tm_mon << "." << datum.tm_year << endl;
}

tm addiereTage(tm datum, int dauer) {

	datum.tm_mday += dauer;

	return datum;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
