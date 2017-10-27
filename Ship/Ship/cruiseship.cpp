#include <iostream> 
#include <string>
#include "cruiseship.h"

CruiseShip::CruiseShip(std::string name, std::string yearBuilt, int numPassengers) :
	Ship(name, yearBuilt), numPassengers(numPassengers) 
{
}

int CruiseShip::getNumPassengers() const
{
	return numPasengers;
}

void CruiseShip::print()
{
	Ship::print(); 
	std::cout << "Maximum passengers: " << numPasengers << std::endl; 
}

void CruiseShip::makeItGo()
{
	std::cout << "The cruise ship is going \n"; 
}
