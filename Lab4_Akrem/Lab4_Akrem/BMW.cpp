// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// BMW Funciton File

#include "BMW.h"
#include <iostream>

BMW::BMW()
{
    // Constructor that sets the brand to BMW
    this->brand = "BMW";
}

void BMW::Drive()
{
    cout << "BMW is being driven vroooooooooom" << endl;
}
//returns the brand of the BMW
string BMW::getIdentifier()
{
    return this->brand;
}