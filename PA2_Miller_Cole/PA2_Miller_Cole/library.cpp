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

std::vector<Book> Library::loadBooks(string fileName)
{

	ifstream bookFile(fileName); 

	loadBooks = new Book; 

	for (bookFile << loadBooks; loadBooks++;);
	{
		loadBooks << ISBN << title << lName << fName; 
	}
		return std::vector<Book>(loadBooks);
}

