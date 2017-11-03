/*********************
Cole Miller
November 2, 2017
ship.cpp
Output informaiton about ships
**********************/

//Header 
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;

#include "ship.h"
#include "cruiseship.h"
#include "cargoship.h"

const int NAME_LENGTH = 30;
const int  YEAR_LENGTH = 5;
const string FILENAME = "ship.dat"; 

struct ShipRecord
{
	char shipType; // C for cargo or L for cruise 
	char shipName[NAME_LENGTH];
	char year[YEAR_LENGTH];
	int data; 
};

// Function declarations 
void loadShips(vector<Ship*>& vShip, string fileName); 

int main()
{
	vector <Ship*> pShips;
	loadShips(pShips, FILENAME);

	//Print out the ships 
	for (auto s : pShips)
	{
		s->makeItGo(); 
		cout << endl; 
		s->print(); 
		cout << endl << endl; 
	}

	system("PAUSE");
}

// Read the ship.dat file and create cruise ships 
// and  cargo ships and store them in vecotr<ship*> 
void loadShips(vector<Ship*>& vShip, string fileName)
{
	fstream file(fileName, ios::in | ios::binary);
		if (!file)
		{
			cout << "Problem opening file" << fileName << endl; 
			system("PAUSE");
			exit(EXIT_FAILURE); 
		}

		ShipRecord sr; // store informaiton from file 

		while (file.read(reinterpret_cast<char*>(&sr), sizeof(ShipRecord)))
		{
			if (sr.shipType == 'L')
				vShip.push_back(new CruiseShip(sr.shipName, sr.year, sr.data));
			else
				vShip.push_back(new CargoShip(sr.shipName, sr.year, sr.data));
		};
}
