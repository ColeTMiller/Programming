#include <string>

#include "book.h"

Book::Book(std::string ISBN, std::string title, std::string lName, std::string fName) :ISBN(ISBN), title(title), lName(lName), fName(fName)
{}

std::string Book::getISBNNummber() const
{
	return ISBN;
}

std::string Book::gettitleName() const
{
	return title;
}

std::string Book::getlName() const
{
	return lName;
}

std::string Book::getfName() const
{
	return fName;
}

bool Book::SetStatues()
{
	return false;
}
