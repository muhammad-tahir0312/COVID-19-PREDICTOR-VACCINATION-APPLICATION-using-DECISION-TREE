#ifndef CITIZEN_H			// USING PURE VIRTUAL FUNCTION
#define CITIZEN_H

// CHID OF CLASS HUMAN 
#include "Human.h"

class Citizen : public Human
{
	private:
		bool Vaccine_Status;	// 		1 Vaccinated ___ 0 Unvaccinated

	public:
		Citizen();	// DEFAULT CONSTRUCTOR
		Citizen(bool, string, string, string,string, string,	string, string, string, int);	// PARA. CONSTRUCTOR
	
	// SET FUNCTIONS
	void SetVaccine_Status(bool b);
	
	// GET FUNCTIONS
	bool GetVaccine_Status();
	
	// CITIZEN :: SET DATA FUNCTION	
	void Set_Citizen_Data();
	
	// CITIZEN :: GET DATA FUNCTION	
	void DisplayData();	// PURE VIRTUAL FUNCTION
	
};

#endif
