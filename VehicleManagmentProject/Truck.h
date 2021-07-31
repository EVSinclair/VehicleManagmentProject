// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#pragma once
#include "Vehicle.h"
class Truck : public Vehicle
{
private:
	//Member Data: 
	// Towing Capacity
	double towingCapacity = 0.0;
public:
	Truck(); //Default Constructor
	Truck(string manufacterer, int year, double towingCapacity); //Constructor
	void displayInfo(); //Display Truck Information
};