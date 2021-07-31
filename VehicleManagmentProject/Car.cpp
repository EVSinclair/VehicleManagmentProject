// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#include "Car.h"

Car::Car(string manufacterer, int year, int numDoors) : Vehicle(manufacterer, year){
	Car::numDoors = numDoors;
}

Car::Car() : Vehicle("", 0){
	Car::numDoors = 0;
}

void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << "Number of doors: " << Car::numDoors << endl;
}