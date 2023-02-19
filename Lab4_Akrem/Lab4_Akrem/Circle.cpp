// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Circle Function File

#include "Circle.h"
#include <iostream>

Circle::Circle()
{
    // Constructor that sets type to circle
    this->type = "Circle";
    radius = 0.0;
}

std::string Circle::getIdentifier()
{
    // Returns constructor
    return this->type;
}

void Circle::Drive()
{
    // Prints circle drive status
    cout << "\nThis is a circle, cannot be driven" << std::endl;
}


Circle::Circle(double radius) : radius(radius) {}
// Funciton to calculate the area of the circle
double Circle::area()  {

    return 3.14 * radius * radius;
}