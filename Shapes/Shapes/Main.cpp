/******************************
  Cole Miller
  10/26/2017
  Main.cpp
  
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#include "basicshape.h"
#include "Circle.h"
#include "rectangle.h"


int main()
{
	double x, y, length, width, radius; 

	//Get circle stuff 
	cout << "Enter the x coordinate of the circle's center: ";
	cin >> x; 
	cout << "Enter the y coordinat of the circle's center: ";
	cin >> y;
	cout << "Enter the radius of the circule: ";
	cin >> radius; 
	Circle c(x, y, radius); 
	cout << "the area of the circle is " << c.getArea() << ". " << endl; 

	//Do a rectangle 
	cout << "\n\nEnter the length of a rectangle: ";
	cin >> length;
	cout << "\n\nEnter the width of a rectangle: ";
	cin >> width; 
	Rectangle r(width, length); 
	cout << "The area of the rectangle is " << r.getArea() << ". " << endl; 

	system("PAUSE"); 
}
