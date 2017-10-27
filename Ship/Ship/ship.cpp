#include <iostream>
#include <string>


#include "ship.h"

Ship::Ship(std::string name, std::string yearBuilt):
		name(name), yearBuilt(yearBuilt)
{ 
}

std::string Ship::getName() const
{
	return name;
}

std::string Ship::getYearBuilt() const
{
	return yearBuilt;
}

void Ship::print()
{
	std::cout << "Name:" << name << std::endl 
	   << "Year built: " << yearBuilt << std::endl;

}
