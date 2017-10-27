#include <iostream>
#include <string>
#include "cargoship.h"

CargoShip::CargoShip(std::string name, std::string yearBuilt, int tonnage) :
	Ship(name, yearBuilt), tonnage(tonnage); 
{
}

int CargoShip::getTonnage() const
{
	return tonnage;
}

void CargoShip::print()
{
	Ship::print();
	std::cout << "Cargo capacity: " << tonnage << " tons\n"; 
}

void CargoShip::makeItGo()
{
	std::cout << "The cargo ship is going \n"; 
}
