// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Shape Header File

#pragma once
#ifndef SHAPE_H
#define SHAPE_H

#include "Drawable.h"
#include <string>

class Shape : public Drawable
{
protected:
    // protected member variable that stores the type of shape
    string type;

public:
    void Drive() override;

    virtual double area() = 0 ;

    // getIdentifier function returns the type of the shape object
    string getIdentifier() override;
};

#endif