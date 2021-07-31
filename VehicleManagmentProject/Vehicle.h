// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
	//Member Data: 
	// Manufacturer
	// Year
	string manufacturer;
	int year;
public:
	Vehicle(string, int); //Constructor
	Vehicle(); //Default Constructor
	void displayInfo(); //Display Vehicle Information
};