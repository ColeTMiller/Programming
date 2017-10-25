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
	std::vector<Book> books; 

public:
		//Constructor 
	Library();
	Library(string fileName);

	//Interface
	void loadBooks(std::vector<Book>); 
	void addBook(Book* Book);
	void checkBookOut(string ISBN);
	void checkBookIn(string ISBN);
	void printBookList();
	


};

#endif //!_LIBRARY_H_