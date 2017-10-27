/******************************
Cole Miller
10/26/2017
Circle.cpp

********************************/

#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "basicshape.h"

class Circle : public BasicShape
{
private:
	double radius;
	double centerX;
	double centerY; 

public:
	// constructor 
	Circle(double centerX, double cneterY, double radius);

	// Getter 
	double getCenterX() const; 
	double getCenterY() const; 
	double getRadius() const; 

	// Setter 
	void setRadius(double radius);

	void calcArea() override; 

	//PI
	static constexpr double PI = 3.14159; 
};
#endif //_CIRCLE_H_