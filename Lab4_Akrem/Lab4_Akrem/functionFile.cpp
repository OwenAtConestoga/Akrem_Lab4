// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// Function Funciton File

#include "functionFile.h"
#include "Drawable.h"
#include <iostream>

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
		int radius = 6;  // adjust the radius to change the size of the circle
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