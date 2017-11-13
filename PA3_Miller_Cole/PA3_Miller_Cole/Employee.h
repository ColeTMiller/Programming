#ifndef			_EMPLOYEE_H_
#define		_EMPLOYEE_H_

#include <string>
class  Employee
{
private:
	std::string Id;							//Employee ID
	std::string first_name;		// Employee First Name
	std::string last_name;		//Empoyee Last Name

public:
	//Constructor 
	Employee(std::string Id, std::string first_name, std::string last_name);
	//Getters 
	std::string getid() const;
	std::string getfirstName() const; 
	std::string getlastName() const; 

	//Virtual function for CalculatePay

};
#endif; 
