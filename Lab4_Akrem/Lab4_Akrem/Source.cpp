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
#include "getTotalArea.h"



#define SHAPENUM 4

using namespace std;


void Draw(Drawable& object)
{
	// strings set for the identification of what is being printed
	string identifier = object.getIdentifier();
	string mazda = "Mazda";
	string bmw = "BMW";
	string circle = "Circle";
	string rectangle = "Rectangle";



	// print a mazda car if the brand is Mazda 
	if (int result = identifier.compare(mazda) == 0)
	{
		cout << "*******************" << endl;
		cout << "*                 *" << endl;
		cout << "*    *       *    *" << endl;
		cout << "*    * *   * *    *" << endl;
		cout << "*    *  * *  *    *" << endl;
		cout << "*    *   *   *    *" << endl;
		cout << "*******************" << endl;
		cout << "    O         O    \n" << endl;
	}

	// print a BMW car
	else if (int result = identifier.compare(bmw) == 0)
	{
		cout << "************************************************" << endl;

		cout << "*  BBBBB      ";
		cout << "   MM     MM   ";
		cout << "     WW       WW  *" << endl;

		cout << "*  B    B     ";
		cout << "   MMM   MMM   ";
		cout << "     WW   W   WW  *" << endl;

		cout << "*  BBBBB      ";
		cout << "   MM M M MM   ";
		cout << "     WW  W W  WW  *" << endl;

		cout << "*  B    B     ";
		cout << "   MM  M  MM   ";
		cout << "     WW W   W WW  *" << endl;

		cout << "*  BBBBB      ";
		cout << "   MM     MM   ";
		cout << "     WWW     WWW  *" << endl;

		cout << "************************************************" << endl;
		cout << "         O                       O              " << endl;

	}

	// print a circle if that is the object type
	else if (int result = identifier.compare(circle) == 0)
	{
		cout << "\n";
		int radius = 5;  // adjust the radius to change the size of the circle
		for (int y = -radius; y <= radius; y++) {
			for (int x = -radius; x <= radius; x++) {
				if (sqrt(x * x + y * y) <= radius) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}

	// print a rectangle if that is the object type
	else if (int result = identifier.compare(rectangle) == 0)
	{
		cout << "\n";
		int width = 12;   // adjust the width of the rectangle
		int height = 6;   // adjust the height of the rectangle
		for (int y = 0; y < height; y++) {
			for (int x = 0; x < width; x++) {
				if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
					cout << "* ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}



}

int main()
{
	// Declare a pointer to a Drawable object
	Drawable* object1;

	// Create a Mazda object and assign its address to the pointer
	Mazda mazda1;
	object1 = &mazda1;
	// Call the Drive() function for the Mazda object through the pointer
	object1->Drive();
	// Draw the Mazda object through the pointer
	Draw(*object1);

	// Create a BMW object and assign its address to the pointer
	BMW bmw1;
	object1 = &bmw1;
	// Call the Drive() function for the BMW object through the pointer
	object1->Drive();
	// Draw the BMW object through the pointer
	Draw(*object1);

	// Create a Circle object with radius 6 and assign its address to the pointer
	Circle circle1(6);
	object1 = &circle1;
	// Draw the Circle object through the pointer
	Draw(*object1);
	// Print the area of the Circle object
	cout << "\nArea of circle with radius 6 is = " << circle1.area() << endl;

	// Create a Rectangle object with length 12 and width 6 and assign its address to the pointer
	Rectangle rectangle1(12, 6);
	object1 = &rectangle1;
	// Draw the Rectangle object through the pointer
	Draw(*object1);
	// Print the area of the Rectangle object
	cout << "Area of rectangle with 12 length and width 6 = " << rectangle1.area() << endl;

	// Create four Shape objects and store their addresses in an array of Shape pointers
	Circle circle2(6);
	Circle circle3(10);
	Rectangle rectangle2(12, 6);
	Rectangle rectangle3(10, 8);
	Shape* shapeArray[SHAPENUM] = { &circle2, &circle3, &rectangle2, &rectangle3 };

	double totalArea;
	// Calculate the total area of the shapes in the array by calling the getTotalArea() function
	totalArea = getTotalArea(shapeArray);
	// Print the total area
	cout << "\nTotal area of the 4 shapes passed in is = " << totalArea << endl;

	return 0;
}


