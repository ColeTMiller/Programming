#include "book.h"

Book::Book(std::string ISBN, std::string title, std::string lName, std::string fName) : ISBN(ISBN), title(title), lName(lName),  fName(fName)
{
}

void Book::getISBN(std::string ISBN)
{
		this->ISBN = ISBN;
}

void Book::getTtile(std::string title)
{
	this->title = title;
}

void Book::getlName(std::string lName)
{
	this->lName; 
}

void Book::getfName(std::string fName)
{
	this->fName; 
}

void Book::setSatues(bool status)
{
}
