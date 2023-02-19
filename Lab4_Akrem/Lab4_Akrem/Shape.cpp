// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Shape Function File

#include "Shape.h"
#include <iostream>

void Shape::Drive()
{
    cout << "\nThis is a shape, cannot be driven" << std::endl;
}


// returns the type of the shape as a string
string Shape::getIdentifier()
{
    return this->type;
}
