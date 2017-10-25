#include <string>

#include "book.h"

Book::Book()
{}

Book::Book(std::string ISBN, std::string title, std::string lName, std::string fName) :ISBN(ISBN), title(title), authorLastName(lName), authorFirstName(fName)
{}

std::string Book::getISBNNummber() const
{
	return ISBN; 
}

std::string Book::gettitleName() const
{ 
	return title;
}

std::string Book::getauthorLastName() const
{
	return authorLastName;
}

std::string Book::getauthorFirstName() const
{
	return authorFirstName;
}

bool Book::SetStatues()
{
	return false;
}
