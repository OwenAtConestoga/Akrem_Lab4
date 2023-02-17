// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Mazda Function File

#include "Mazda.h"
#include <iostream>

Mazda::Mazda()
{
    // Constructor that sets brand to mazda
    this->brand = "Mazda";
}

void Mazda::Drive()
{
    cout << "Zoom Zoom Mazda is being driven" << std::endl;
}
// Return the brand of the mazda
string Mazda::getIdentifier()
{
    return this->brand;
}