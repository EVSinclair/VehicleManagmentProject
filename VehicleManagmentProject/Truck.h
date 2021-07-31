// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	double towingCapacity = 0.0;
public:
	Truck();
	Truck(string manufacterer, int year, double towingCapacity);
	void displayInfo();
};