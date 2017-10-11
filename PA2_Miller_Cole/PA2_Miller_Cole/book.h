#ifndef _Book_H_
#define _Book_H_

#include <string>

class Book 
{
private:
	double ISBN;
	string Title;
	int  lName; 
	int fName; 

public:
		// Constructor 
		Book();
		Book(double ISBN, std::string Ttile,
			int lName, int fName); 

		// Desctructor 

		// setter methods 
		void setISBNNumber(double ISBN);
		void setTitleName(std::string Title); 
		void setlName(int lName);
		void setfName(int fName); 

		//getter methods
		double getISBNNumber() const;
		std::string getTtileName() const;
		int getlName() const;
		int getfName() const; 
	
};
#endif // !_Book_H_ 