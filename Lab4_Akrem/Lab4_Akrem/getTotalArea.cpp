// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// getTotalArea Funciton File

#include "getTotalArea.h"
#include "getTotalArea.h"
#include "Drawable.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include "getTotalArea.h"


#define SHAPENUM 4

using namespace std;


// This function takes an array of Shape pointers and returns the sum of their areas
double getTotalArea(Shape* shapeArray[]) {

	// Get the size of the array
	int arraySize = SHAPENUM;

	// Check if the array is null, and print an error message if so
	if (shapeArray == nullptr) {
		std::cerr << "Error: shapeArray is null\n";
		return 0.0;
	}

	// Initialize a variable to hold the total area
	double totalArea = 0.0;

	// Loop through the array and add the area of each Shape to the total
	for (int i = 0; i < arraySize; i++) {
		// Call the area() function for each Shape object in the array and add it to the total
		totalArea += shapeArray[i]->area();
	}

	// Return the total area
	return totalArea;
}