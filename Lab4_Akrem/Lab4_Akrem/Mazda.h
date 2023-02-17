// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Mazda Header File
#pragma once
#ifndef MAZDA_H
#define MAZDA_H

#include "Vehicle.h"
#include <string>

class Mazda : public Vehicle
{
public:
    // Overrides the Drive() virtual function from the parent class. 
    Mazda();
    void Drive() override;
    string getIdentifier() override;
};

#endif