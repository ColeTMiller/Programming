#include <iomanip>
#include <iostream>
#include <fstream>	
#include <vector>
#include <string>

#include "library.h"
using namespace std;


library::library()
{}

library::library(string fileName)
{
	
}

void library::addBook(Book * Book)
{
}

void library::checkBookOut(string ISBN)
{
}

void library::checkBookIn(string ISBN)
{
}

void library::printBookList()
{
}

std::vector<Book> library::loadBooks(string fileName)
{
	Book* Books;

	ifstream bookFile(fileName);

	bookFile = new Book[Books]; 

	bookFile.open(ios::in); 

	if (!bookFile)
		return "CANNOT OPEN FILE";
	system("PAUSE");


	return std::vector<Book>();

}

