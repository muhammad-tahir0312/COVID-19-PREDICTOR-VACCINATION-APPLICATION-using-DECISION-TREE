#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <ctime>

// HEADER FILE :: Citizen.h
#include "Citizen.h"
// CHID OF CLASS HUMAN 
#include "Human.h"

using namespace std;

	// CONSTRUCTORS
	
// DEFAULT CONSTRUCTOR
Citizen::Citizen(){	}
	
// PARA. CONSTRUCTOR
Citizen::Citizen(bool Vaccine_Status,string Name,string Gender,string Address,string Center, string CNIC,	string Province, string City, string Contact, int Age):Human( Name, Gender, Address, Center, CNIC, Province, City, Contact, Age){
	this->Vaccine_Status = Vaccine_Status;
}

	// SET FUNCTIONS

void Citizen::SetVaccine_Status(bool b){
	Vaccine_Status = b;
}	
	
	// GET FUNCTIONS
bool Citizen::GetVaccine_Status(){
	return Vaccine_Status;
}

	// CITIZEN :: SET DATA FUNCTION
void Citizen::Set_Citizen_Data(){
	
	int a, t;
	bool b;
	
	cout << "Enter Patient's Vaccine Status: (0/1) " << endl;
	do{
		cin >> t;
	}while(!(t==0 || t==1));
	b = t;
	SetVaccine_Status(b);

}

	// CITIZEN :: GET DATA FUNCTION
void Citizen::DisplayData(){
	cout<<"\n\t\tPatient's Details\n";
	cout << "\n\t\tName: " << GetName() 
		 <<	"\n\t\tGender: " << GetGender()
		 << "\n\t\tAddress: " << GetAddress()
		 << "\n\t\tCNIC: " << GetCNIC()
		 << "\n\t\tProvince: " << GetProvince()
		 << "\n\t\tCity: " << GetCity()
		 << "\n\t\tContact: " << GetContact()
		 << "\n\t\tAge: " << GetAge() 
		 << "\n\t\tVaccine_Status: " << GetVaccine_Status() << endl;
}

