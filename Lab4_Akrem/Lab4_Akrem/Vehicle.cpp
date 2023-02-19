// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Vehicle Function File

#include "Vehicle.h"

#include "Vehicle.h"
#include <iostream>
using namespace std;

// Prints the vehicle status
void Vehicle::Drive()
{
    cout << "Vehicle is being driven" << endl;
}
// Constructor 
string Vehicle::getIdentifier()
{
    return this->brand;
}