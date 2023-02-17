// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// BMW Header File
#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include <string>

class Circle : public Shape
{
public:
    // Constructor that assigns the type circle 
    Circle();

    // Used to get the type of object 
    std::string getIdentifier() override;

    // Prints an error message if you try to drive a circle
    void Drive() override;
};

#endif