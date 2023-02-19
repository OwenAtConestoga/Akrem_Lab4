// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// 
// 
#include <iostream>
#include <string>
#include <cmath>

// Class Include Files
#include "Drawable.h"
#include "Vehicle.h"
#include "BMW.h"
#include "Mazda.h"
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "functionFile.h"

#define SHAPENUM 4

using namespace std;

int main()
{
	Drawable* object1;

	Mazda mazda1; 
	object1 = &mazda1;
	object1->Drive();
	Draw(*object1);

	BMW bmw1;
	object1 = &bmw1; 
	object1->Drive(); 
	Draw(*object1);

	Circle circle1(6);
	object1 = &circle1;
	//object1->Drive();
	Draw(*object1);

	cout << circle1.area() << endl;

	Rectangle rectangle1(12,6); 
	object1 = &rectangle1; 
	//object1->Drive(); 
	Draw(*object1);

	cout << rectangle1.area() << endl;

	cout << endl;

	Circle circle2(6);
	Circle circle3(6);
	Rectangle rectangle2(12,6);
	Rectangle rectangle3(12,6);


	Shape* shapeArray[SHAPENUM] = {&circle2, &circle3, &rectangle2, &rectangle3};

	double totalArea = getTotalArea(shapeArray[4], SHAPENUM);

	cout << totalArea << endl;

	return 0;
}


