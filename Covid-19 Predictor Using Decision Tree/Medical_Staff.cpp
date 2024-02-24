#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <fstream>

// HEADER FILE :: Medica_Staff
#include "Medical_Staff.h"
// CHID OF CLASS HUMAN 
#include "Human.h"

	// 	CONSTRUCTORS

// 	DEFAULT CONSTRUCTOR
Medical_Staff::Medical_Staff(){	};	

//	PARA. CONSTRUCTOR
Medical_Staff::Medical_Staff(int Experience,int dayToVolunteer,string Name,string Gender,string Address,string Center, string CNIC,	string Province, string City, string Contact, int Age):Human( Name, Gender, Address, Center, CNIC, Province, City, Contact, Age){
	this->Experience = Experience;
	this->dayToVolunteer = dayToVolunteer;
}

	// SET FUNCTIONS
void Medical_Staff::SetExperience(int a){
	Experience = a;
}

	// GET FUNCTIONS
int Medical_Staff::GetExperience(){
	return Experience;
}

	// MEDICAL_STAFF :: SET DATA FUNCTION
void Medical_Staff::Set_Medi_Staff_Data(){; 
	float a, day;
	cout << "Enter Medical Staff's Experience [in years]: " << endl;
	cin >> a;
	SetExperience(a);
	while(1){
		cout<< "Would you like to volunteer for mobile vaccination service to Areas with low vaccinations? ( 1 => 'Yes' / 0 => 'No' ): ";
		cin>>day;
		if(day == 1 || day == 0 ){
			dayToVolunteer = day;
			break;
		}
		else cout<<"Invalid Input. Try Again.\n";
	}
}

void Medical_Staff::writeMedicData(){
	ofstream file("medicStaff.txt", ios::app);
	file<<GetName()<<" "<<dayToVolunteer<<endl;
    file.close();
}

void Medical_Staff::DisplayData(){

	cout << "\n\tName: " << GetName() 
		 <<	"\n\tGender: " << GetGender()
		 << "\n\tAddress: " << GetAddress()
		 << "\n\tCNIC: " << GetCNIC()
		 << "\n\tProvince: " << GetProvince()
		 << "\n\tCity: " << GetCity()
		 << "\n\tContact: " << GetContact()
		 << "\n\tAge: " << GetAge() << endl;
}
