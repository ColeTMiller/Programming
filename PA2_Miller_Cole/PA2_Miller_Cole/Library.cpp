#include "Library.h"

Library::Library()
{
}

Library::Library(std::string FILENAME)
{
	FILENAME = "BookFile.txt"; 
}

void Library::loadBooks(std::string FILENAME)
{
	
}

void Library::addBook(Book * Books)
{
}

void Library::checkBookOut(std::string ISBN)
{
}

void Library::checkBookIn(std::string ISBN)
{
}

void Library::printBookList()
{
}

bool Library::StatuesofBook()
{
	return false;
}

bool Library::sortByName(Book & rhs, Book & lhs)
{
	std::string name1(lhs.lName), name2(rhs.lNmae)
		return  name1 < name2; 
}
