// Group 13 - Owen - Ryan - Matteo
// Winter 2023
// Lab 04 - PROG71020-23W-Object Oriented Programming
// 
// 

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Drawable
{
public:

	virtual string getIdentifier() = 0;
	virtual void Drive() = 0;
	
};

// --------------------------------------------------------------------------------------

class Vehicle : public Drawable
{
protected:
	string brand;

public:
	// drive function that prints out model of car being driven.
	// will be virtual so that it can be overriden
	virtual void Drive()
	{
		cout << "Vehicle is being driven" << endl;
	}

	string getIdentifier() override
	{
		return this->brand;
	}

};

// BMW class
class BMW : public Vehicle
{
public:
	BMW()
	{
		this->brand = "BMW";
	}

	void Drive()
	{
		cout << "BMW is being driven vroooooooooom" << endl;
	}

	string getIdentifier() override
	{
		return this->brand;
	}

};


// Mazda class 
class Mazda : public Vehicle
{
public:
	Mazda()
	{
		this->brand = "Mazda";
	}

	void Drive()
	{
		cout << "Zoom Zoom Mazda is being driven" << endl;
	}

	string getIdentifier() override
	{
		return this->brand;
	}
};

// --------------------------------------------------------------------------------------

// Shape class
class Shape : public Drawable 
{
protected:
	string type; 

public:

	void Drive() override
	{
		cout << "\nThis is a shape, cannot be driven" << endl;
	}

	// used to get the type of object 
	string getIdentifier() override
	{
		return this->type;
	}
};

// Circle class
class Circle : public Shape
{

public: 
	// constructor that assigns the type circle 
	Circle()
	{
		this->type = "Circle";
	}

	// used to get the type of object 
	string getIdentifier() override
	{
		return this->type;
	}
	
	// prints an error message if you try to drive a circle
	void Drive() override
	{
		cout << "\nThis is a circle, cannot be driven" << endl;
	}

};

// Rectangle Class
class Rectangle : public Shape
{
public:
	// constructor that assigns the type rectangle 
	Rectangle()
	{
		this->type = "Rectangle";
	}

	// used to get the type of object 
	string getIdentifier() override
	{
		return this->type;
	}

	// prints an error message if you try to drive a rectangle
	void Drive() override
	{
		cout << "\nThis is a rectangle, cannot be driven" << endl;
	}
};

void Draw(Drawable& object)
{
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

	Circle circle1;
	object1 = &circle1;
	object1->Drive();
	Draw(*object1);

	Rectangle rectangle1; 
	object1 = &rectangle1; 
	object1->Drive(); 
	Draw(*object1);

	return 0;
}

/*
MK4 Supra		⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡤⢤⣶⣶⣶⣶⣶⣒⣒⣀⣺⣿⣿⠿⢶⣶⣶⣶⣦⣤⣤⣤⣄⣀⣀⣀⣀⡀⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠴⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠛⠒⠲⠦⢤⣉⠙⣿⣿⣿⣟⢿⣿⠿⠿⠿⢿⣿
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣷⡦⠞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⡇⠀⠈⠛⢿⣿⡀⠀⠀⠀⠻
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣤⠤⢴⣿⣉⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⠙⣿⣄⡀⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣤⡶⠞⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠉⠓⠒⠒⠢⠤⠤⣄⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⠀⢠⠤⠤⠤⣤⣾⠀⠙⢦⡀
		⠀⠀⠀⠀⠀⠀⠀⠀⣠⠴⣾⣛⣩⢴⣿⠿⠶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠙⠒⠒⠒⠤⠤⢤⣤⣾⢿⣴⢏⣀⣀⣤⡼⠻⡆⠀⠈⢷
		⠀⠀⠀⠀⢀⣴⠋⠁⠀⠀⠀⠀⠙⠓⠲⠤⠬⠷⠀⠀⢀⣀⣀⣀⣀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⠤⡞⠉⠀⠀⠹⡟⠀⠀⠀⠀⠀⢱⠀⢠⣼
		⠀⠀⠀⣀⡴⠋⠈⢙⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠢⠤⢄⣀⣠⠴⠛⣋⣠⠴⠒⠉⠉⢉⣲⠶⠀⣀⡠⠤⠒⠊⠉⠁⠀⠀⠀⠠⠀⡂⠐⢹⠂⠀⠀⠀⠀⣼⢰⣿⣿
		⡀⣠⣼⠏⠀⠀⣰⠟⠦⢤⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠓⠒⠒⠒⠋⣉⠤⠒⠋⠁⠀⠀⠀⠀⡀⠠⠀⠈⠀⠁⠀⠀⠀⢸⠀⠀⠀⠀⢀⣯⣼⣿⣿
		⡟⠋⠹⢤⣠⠞⠁⠀⠀⠀⠀⠈⠉⠐⠲⠤⢄⣀⡀⠀⠀⠀⠀⣀⠤⠤⠤⠤⠤⣄⣀⣀⠀⢀⡠⠖⠋⠀⠀⠀⠄⡠⢐⠤⠀⠂⠀⣀⣀⡀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⢸⣿⣿⣿⣿
		⢻⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⢒⡶⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⢦⠀⠀⠀⠈⠈⠀⠀⠀⠀⢀⣴⣿⡿⣿⡝⣆⠀⠀⠀⠴⣽⠤⠞⣠⣵⠿⣻⣿⣿⠈
		⢿⣿⣿⠶⢤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢨⠇⠀⠀⠀⠀⣀⣀⣤⣤⣾⣿⢿⡆⢸⣧⢹⠀⠄⣪⣶⣿⣴⠟⢋⣥⠴⢻⣿⠏⠀
		⢸⣿⣿⡇⠀⠘⣿⣶⣦⣤⣀⡀⠀⠀⠀⠀⠀⠀⠈⠑⠲⠤⢤⣀⣀⡀⠀⠀⠀⠀⠀⠀⣀⣀⣞⣀⣠⣤⣾⣿⣿⣿⣿⣿⣿⢻⢸⣿⣾⣿⣾⣤⣾⣿⠿⢋⡡⠞⠉⠉⠉⠉⠀⠀⠀
		⣼⡟⣿⡇⠀⠀⢹⣄⠈⠙⠒⠯⣽⣶⢶⣤⣤⣄⣀⣀⠀⠀⠀⠀⠈⠙⠻⠿⠿⠿⠿⠿⠿⠛⠛⠛⢉⣉⣽⠶⣿⠟⣿⣿⣧⣿⣾⣿⣿⡇⢹⡿⠋⣡⠖⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀
		⣇⠳⣼⣧⠴⠛⠉⠉⠉⠒⣦⣤⣀⡀⠀⠀⠉⠙⢦⠀⠉⠉⢙⣷⣶⠒⠒⠒⠶⡶⠶⠶⢶⣤⠖⠚⠉⠁⠀⣰⣷⠾⣿⢿⢥⣼⣾⣿⣿⠃⣸⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
		⠈⠳⣌⣿⢦⣄⠀⢀⣴⣿⣿⣷⣿⡯⣗⠲⠤⣀⡈⣇⠀⠀⠻⡄⠈⣷⠀⠀⠀⡿⠒⠶⠾⢿⠀⠀⠀⢠⣾⡏⠁⣸⡇⢸⡸⢠⡌⢡⣿⠴⠿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⠈⠙⠳⢿⣙⠺⢽⣿⣮⣿⣿⠗⠋⠀⠀⠀⠉⡿⠀⠀⣀⣹⣿⣯⣤⣶⣚⣛⣒⣛⣓⣿⠀⠀⠀⢽⣿⣶⣶⡏⢧⣼⣷⡿⢁⣾⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⠀⠈⠙⠢⢬⣙⠛⠧⢤⣀⣀⠀⢀⣴⠃⠀⢀⣹⢦⣤⣉⣉⣯⣍⣹⣿⣿⣿⡃⣀⡤⠴⠛⠋⠁⠀⡇⠘⣜⣏⣠⣿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠓⠦⢤⣈⡉⠉⠙⠛⠛⠛⠲⠤⠤⠤⠴⣶⣶⣿⣿⢿⡿⣯⠀⠀⠀⠀⠀⢀⣠⡟⠤⠿⠟⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀
		⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠒⠲⠤⢤⣄⣀⣀⣀⣤⣈⣤⣤⠤⣴⣿⣥⠤⠴⠒⠚⠋⠉⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀

	*/
