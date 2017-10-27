#include "rectangle.h"

Rectangle::Rectangle(double width, double length) :
	width(width), length(length)
{
	calcArea();
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

void Rectangle::setWidth(double width)
{
	this->width = width; 
	calcArea(); 
}

void Rectangle::setLength(double length)
{
	this->length = length;
	calcArea(); 
}

void Rectangle::calcArea()
{
	setArea(length * width); 
}
