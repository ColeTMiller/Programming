//cole Miller 
// october 10, 2017
// pharmacy.h

#ifndef _PHAMACY_H_
#define _PHAMACY_H_

#include <map>
#include <string>
#include "Patienceaccount.h"

enum class MedicationType
{
	ANTIBIOTIC,
	ANTINAUSEA,
	ANTIINFLAMATORY,
	LIGHTPAIN,
	STRONGPAIN,
	NUM_MEDICATION
};

class Pharmacy
{
private:
	std::map<MedicationType, double> pharmacyRate;
public:
	// consturctor 
	Pharmacy();

	void updateAccount(PatientAccount& pa, MedicationType med);
	std::string getMedicationName(MedicationType med); 
};
#endif //!_PHAMACY_H_