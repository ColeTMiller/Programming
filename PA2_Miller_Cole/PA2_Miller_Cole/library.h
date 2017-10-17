//Cole Miller 
//October 11, 2017
//Library.h

#ifndef  _Library_H_
#define _Library_H_

#include "book.h"
#include <string>

class Library
{
	Book * Books;
		std::string  ISBN;
		std::string title;
		std::string lNmae;
		std::string fName; 

public:
		//Constructor 
	Library();
	Library(std::string FILENAME); 

	// interface 
	void loadBooks(std::string FileNAME);
	void addBook(Book *  Books); 
	void checkBookOut(std::string ISBN);
	void checkBookIn(std::string ISBN);
	void printBookList(); 

private:
	bool StatuesofBook(); 
	bool sortByName(Book &rhs, Book &lhs); 
	
	
};

#endif
