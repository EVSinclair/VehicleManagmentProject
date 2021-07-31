// Eashan Vytla
// CIS 1202 101
// July 30, 2021

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
	string manufacturer;
	int year;
public:
	Vehicle(string, int);
	Vehicle();
	void displayInfo();
};