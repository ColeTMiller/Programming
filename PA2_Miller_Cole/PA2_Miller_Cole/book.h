#ifndef _Book_H_
#define _Book_H_

#include <string> 


class Book 
{
private:
	std:: string ISBN;
	std:: string title; 
	std:: string lName;
	std:: string fName;
	bool status; 

public:
		//constructor
	Book(std:: string ISBN, std:: string title,std:: string lName, std::string fName); 

		//getter 
	void getISBN(std::string ISBN);
	void getTtile(std::string title);
	void getlName(std::string lName);
	void getfName(std::string fName); 

		// setter methods 
		void setSatues(bool status); 
};
#endif // !_Book_H_ 