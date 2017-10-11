//Cole Miller 
// October 11, 2017
// library.h
#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include "book.h"

class library
{
	Book*BooksNumber;
	double ISBN;
	string Title; 
	int lName;
	int fName; 

public:
		//Constructor 
	library(Book*BooksNumber, double ISBN, string Title,
																int lName, int fName);

};

#endif //!_LIBRARY_H_