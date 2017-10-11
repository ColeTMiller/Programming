//Cole Miller
// october 10, 2017
// patientaccount.h

#ifndef _PATIENTACCOUNT_H_
#define _PATIENTACCOUNT_H_

#include <iostream>

class PatientAccount
{
private:
	double charges;	//what patinet owes 
	int days;		// number of days in hospital 

public:
	// constructor 
	PatientAccount();

	// Setter
	void setDays();

	// Getters 
	double getCharges() const;
	int getDays() const;

	void updateCharges(double charge);
	friend std::iostream& operator<<(std::ostream& os,
										const PatientAccount& pa);
};
#endif 