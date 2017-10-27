/******************************
Cole Miller
10/26/2017
rectangle.cpp

********************************/
#ifndef  _RECTANGLE_H_
#define _RECTANGLE_H_

#include "basicshape.h"	
class Rectangle : public BasicShape
{
private: 
	double width;
	double length;

public:
	//Constructor 
	Rectangle(double width, double length);

	//Getter 
	double getWidth() const;
	double getLength() const; 

	//Setter
	void setWidth(double width);
	void setLength(double length); 

	void calcArea() override; 
};
#endif // !_RECTANGLE_H_;