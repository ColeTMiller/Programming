#include "Employee.h"

Employee::Employee(std::string Id, std::string first_name, std::string last_name) :
																	Id(Id), first_name(first_name), last_name(last_name)
{

}
std::string Employee::getid() const
{
	return Id;
}

std::string Employee::getfirstName() const
{
	return first_name;
}

std::string Employee::getlastName() const
{
	return last_name;
}
