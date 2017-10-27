/*********************
Cole Miller
10/25/2015
shipt.cpp
**********************/

#ifndef _CRUISESHIP_H_
#define _CRUISESHIP_H_

#include <string>
#include "ship.h"

//CruiseShip class 
class CruiseShip : public Ship
{
private:
	int numPasengers;		// Number of passengers 

public: 
	// Constructor 
	CruiseShip(std::string name, std::string yearBuilt, int numPassengers); 

	//Getter 
	int getNumPassengers() const; 

	//Print function 
	void print() override;

	void makeItGo() override; 




};
#endif _CRUISESHIP_H_
