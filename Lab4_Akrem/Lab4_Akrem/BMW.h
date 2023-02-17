// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// BMW Header File
#pragma once
#ifndef BMW_H   
#define BMW_H

#include "Vehicle.h"   
#include <string>      

// Define the BMW class that inherits from Vehicle
class BMW : public Vehicle   
{
public:
    BMW();             
    // Override the Drive() function of the base class
    void Drive() override;
    // Override the getIdentifier() function of the base class
    string getIdentifier() override;  
};

#endif  