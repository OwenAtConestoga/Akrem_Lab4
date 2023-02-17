// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Rectangle Function File

#include "Rectangle.h"
#include <iostream>
using namespace std;

// Constructor for Rectangle
Rectangle::Rectangle() {
    this->type = "Rectangle";
}
// Returns the identifier for this shape
string Rectangle::getIdentifier() {
    return this->type;
}
// Implements the Drive() method for this shape
void Rectangle::Drive() {
     cout << "\nThis is a rectangle, cannot be driven" << endl;
}