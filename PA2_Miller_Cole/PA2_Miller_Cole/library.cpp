#include <iomanip>
#include <iostream>
#include <fstream>	
#include <vector>
#include <string>

#include "library.h"
using namespace std;


Library::Library()
{}

Library::Library(string fileName)
{
 
}

void Library::loadBooks(std::vector<Book>)
{
	ifstream bookFile(fileName);

	loadBooks = new Book;

	for (bookFile << loadBooks; loadBooks++;);
	{
		loadBooks << ISBN << title << authorLastName << authorFirstName;
	}
	return std::vector<Book>(loadBooks);
}

void Library::addBook(Book * Book)
{
}

void Library::checkBookOut(string ISBN)
{

}

void Library::checkBookIn(string ISBN)
{
}

void Library::printBookList()
{
}



