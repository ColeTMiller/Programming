// cole Miller 

#ifndef _SHIP_H_
#define _SHIP_H_

#include <string>

//ship is an abstrct base class 
class Ship 
{
private:
		std::string name;		 // ship name 
		std::string yearBuilt;   // Year it was built 

public:
	// constructor 
	Ship(std::string name, std::string yearBuilt);

	//Getters
	std::string getName() const; 
	std::string getYearBuilt() const; 

	//Print function 
	virtual void print(); 

	//Pure virtual function 
	virtual void makeItGo() = 0; 
}
#endif
