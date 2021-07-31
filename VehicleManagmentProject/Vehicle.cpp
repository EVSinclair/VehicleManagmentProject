// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#include "Vehicle.h"

//Constructor
Vehicle::Vehicle(string manufacturer, int year) {
	this->manufacturer = manufacturer;
	this->year = year;
}

//Default Constructor
Vehicle::Vehicle() {
	this->manufacturer = "";
	this->year = 0;
}

//Display Information of Vehicle
void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}