#include "Circle.h"

Circle::Circle(double centerX, double cneterY, double radius) :
	centerX(centerX), centerY(centerY), radius(radius)
{
	calcArea(); 
}

double Circle::getCenterX() const
{
	return centerX;
}

double Circle::getCenterY() const
{
	return centerY;
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double radius)
{
	this->radius = radius;
	calcArea(); 
}

void Circle::calcArea()
{
	// courld do it as BasicShape::setArea(PI* radius * radius); 
	setArea(PI * radius * radius); 
}
