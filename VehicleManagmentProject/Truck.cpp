// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#include "Truck.h"

//Default constructor
Truck::Truck() : Vehicle("", 0){
	Truck::towingCapacity = 0.0;
}

//Constructor(manufacterer, year, towing capacity)
Truck::Truck(string manufacterer, int year, double towingCapacity) : Vehicle(manufacterer, year) {
	Truck::towingCapacity = towingCapacity;
}

//Display the information of the truck
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << towingCapacity << endl;
}