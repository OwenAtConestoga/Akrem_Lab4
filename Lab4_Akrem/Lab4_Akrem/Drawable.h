// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Drawable Header File
#pragma once
#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string>
using namespace std;

class Drawable
{
public:
    // This pure virtual function returns the identifier for the Drawable object.
    virtual string getIdentifier() = 0;
    virtual void Drive() = 0;
};

#endif
