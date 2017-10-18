//Cole Miller 
// October 11, 2017
// library.h
#ifndef _LIBRARY_H_
#define _LIBRARY_H_

#include <vector>
#include <string>

#include "book.h"

using namespace std; 

class Library
{
private: 
	Book* Books;

	string ISBN;
	string title; 
	string lName;
	string fName; 
	bool setStatues; 

public:
		//Constructor 
	Library();
	Library(string fileName);

	//Interface
	void addBook(Book* Book);
	void checkBookOut(string ISBN);
	void checkBookIn(string ISBN);
	void printBookList();
	
private:

	std::vector<Book> loadBooks(string fileName);

};

#endif //!_LIBRARY_H_