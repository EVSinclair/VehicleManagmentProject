// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#include "Vehicle.h"

Vehicle::Vehicle(string manufacturer, int year) {
	this->manufacturer = manufacturer;
	this->year = year;
}

Vehicle::Vehicle() {
	this->manufacturer = "";
	this->year = 0;
}

void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}