// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#pragma once

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : protected Vehicle
{
private:
	int numDoors = 0;
public:
	Car(string manufacterer, int year, int numDoors);
	Car();
	void displayInfo();
};

