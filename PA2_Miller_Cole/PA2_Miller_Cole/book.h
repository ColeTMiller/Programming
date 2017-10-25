#ifndef _Book_H_
#define _Book_H_

#include <string>
using namespace std; 

class Book 
{
private:
		string ISBN;
		string title;
		string authorLastName;
		string authorFirstName;
		bool SetStatues; 

public:
	// Constructor 
	Book(); 
	Book(string ISBN, string title, string authorLastName, string authorFirstName); 
	
	// getter 
	string getISBNNummber() const;
	string gettitleName()  const;
	string getauthorLastName() const;
	string getauthorFirstName() const;


	// setter 
	bool SetStatues();
	
};
#endif // !_Book_H_ 