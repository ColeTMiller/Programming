#ifndef _Book_H_
#define _Book_H_

#include <string>
using namespace std; 
class Book 
{
private:
		string ISBN;
		string title;
		string lName;
		string fName;
		bool SetStatues; 

public:
	// Constructor 
	Book(string ISBN, string title, string lName, string fName); 
	
	// getter 
	string getISBNNummber() const;
	string gettitleName()  const;
	string getlName() const;
	string getfName() const;


	// setter 
	bool SetStatues();
	
};
#endif // !_Book_H_ 