// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Rectangle Header File
#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {

    double width;
    double length;
public:
    Rectangle();
    // Used to get the type of object
    string getIdentifier() override;
    void Drive() override;
    Rectangle(double width, double length);
    double area() override;
    
};

#endif 