/******************************
Cole Miller
10/26/2017
basicshape.cpp

********************************/

#ifndef _BASICSHAPE_H_
#define _BASICSHAPE_H_

// Abstract class for basic shapes 
class BasicShape
{
private:
	double area;

protected:
	void setArea(double area); 

public:
	double getArea() const;

	virtual void calcArea() = 0; 

};

#endif // !_BASICSHAPE_H_