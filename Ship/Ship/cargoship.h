#ifndef _CARGOSHIP_H_
#define _CARGOSHIP_H_

#include <string>
#include "ship.h"

//CargoShip class 
class CargoShip : public Ship
{
private: 
	int tonnage;		// How much weight can the ship carry
	

public: 
		//constructor 
	CargoShip(std::string name, std::string yearBuilt, int tonnage);

	//Getter 
	int getTonnage() const; 

	//Print method
	void print() override; 

	void makeItGo() override; 
};
#endif //!_CARGOSHIP_H_
