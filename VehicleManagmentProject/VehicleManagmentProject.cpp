// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main()
{
    //Declaring & Initializing variables
    string manufacterer = "";
    int year = 0;
    int numDoors = 0;
    double towLoad = 0.0;

    //Vehicle
    cout << "Vehicle: " << endl;

    //Get user input
    cout << "Enter the manufacturer: ";
    cin >> manufacterer;
    cout << "Enter the year built: ";
    cin >> year;

    //Display the vehicle Information
    cout << "Vehicle Information: " << endl;
    Vehicle vehicle(manufacterer, year);
    vehicle.displayInfo();

    cout << endl;

    //Car
    cout << "Car: " << endl;

    //Get user input
    cout << "Enter the manufacturer: ";
    cin >> manufacterer;
    cout << "Enter the year build: ";
    cin >> year;
    cout << "Enter the number of doors: ";
    cin >> numDoors;

    //Display the car information
    cout << "Vehicle Information: " << endl;
    Car car(manufacterer, year, numDoors);
    car.displayInfo();

    cout << endl;

    //Truck
    cout << "Truck: " << endl;

    //Gets the user input
    cout << "Enter the manufacturer: ";
    cin >> manufacterer;
    cout << "Enter the year build: ";
    cin >> year;
    cout << "Enter the towing capacity: ";
    cin >> towLoad;

    //Display truck information
    cout << "Vehicle Information: " << endl;
    Truck truck(manufacterer, year, towLoad);
    truck.displayInfo();
}
