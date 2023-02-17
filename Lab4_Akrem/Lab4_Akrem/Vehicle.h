// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Vehicle Header File
#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include "Drawable.h"
#include <string>

class Vehicle : public Drawable
{
protected:
    // protected member variable representing the brand of the vehicle
    string brand;

public:
    // virtual function that drives the vehicle
    virtual void Drive() override;
    // function to get the identifier of the vehicle
    string getIdentifier() override;
};

#endif

