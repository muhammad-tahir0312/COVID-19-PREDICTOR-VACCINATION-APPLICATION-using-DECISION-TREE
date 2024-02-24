#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>

// HEADER FILE :: HUMAN
#include "Human.h"
// HEADER FILE :: Medica_Staff
#include "Medical_Staff.h"

using namespace std;

	// 	CONSTRUCTORS
	
// 	DEFAULT CONSTRUCTOR
Human::Human(){	}	

// 	PARA. CONSTRUCTOR
Human::Human(string Name,string Gender,	string Address,	string Center, string CNIC,	string Province, string City, string Contact, int Age) {
	this->Name = Name;
	this->Gender = Gender;
	this->Address = Address;
//	this->Center = Center;
	this->CNIC = CNIC;
	this->Province = Province;
	this->City = City;
	this->Contact = Contact;
	this->Age = Age;
}	


	// SET FUNCTIONS
	void Human::SetName(){
		cout << "Enter Your Name: ";
		fflush(stdin);
		getline(cin,Name);
	}
	void Human::SetGender(){
		cout << "Enter Your Gender: ";
		fflush(stdin);
		getline(cin,Gender);
	}
	void Human::SetAddress(){
		cout << "Enter Your Address: ";
		fflush(stdin);
		getline(cin,Address);
	}	
//	void Human::SetCenter(){
//		cout << "Enter Your Center: ";
//		getline(cin,Center);
//	}		
	void Human::SetCNIC(){
		cout << "Enter Your CNIC: ";
		fflush(stdin);
		getline(cin,CNIC);
	}		
	void Human::SetProvince(){
		cout << "Enter Your Province: ";
		fflush(stdin);
		getline(cin,Province);
	}
	void Human::SetCity(){
		cout << "Enter Your City: ";
		fflush(stdin);
		getline(cin,City);
	}	
	void Human::SetAge(){
		cout << "Enter Your Age: ";
		fflush(stdin);
		cin >> Age;
	}	
	void Human::SetContact(){
		cout << "Enter Your Contact: ";
		fflush(stdin);
		cin >> Contact;
	}	
//	void Human::SetCount(){
//		cout << "Enter Your Count: ";
//		cin >> Count;
//	}

	// GET FUNCTIONS	
	string Human::GetName(){
		return Name;
	}
	string Human::GetGender(){
		return Gender;
	}
	string Human::GetAddress(){
		return Address;
	}
//	string Human::GetCenter(){
//		return Center;
//	}
	string Human::GetCNIC(){
		return CNIC;
	}
	int Human::GetAge(){
		return Age;
	}	
	string Human::GetProvince(){
		return Province;
	}
	string Human::GetCity(){
		return City;
	}
	string Human::GetContact(){
		return Contact;
	}

	// HUMAN :: SET DATA FUNCTION
void Human::Set_Human_Data(){
		
	cout << "Enter Patient's Name: " << endl;
	fflush(stdin);
	getline(cin,Name);
//	return ;
	cout << "Enter Patient's Gender: " << endl;
	fflush(stdin);
	getline(cin,Gender);
	
	cout << "Enter Patient's Address: " << endl;
	fflush(stdin);
	getline(cin,Address);
	
//	cout << "Enter Patient's Center: " << endl;
//	getline(cin,Center);
	
	cout << "Enter Patient's CNIC: " << endl;
	fflush(stdin);
	getline(cin,CNIC);
	
	cout << "Enter Patient's Province: " << endl;
	fflush(stdin);
	getline(cin,Province);
	
	cout << "Enter Patient's City: " << endl;
	fflush(stdin);
	getline(cin,City);
	
	int t;
	cout << "Enter Patient's Age: " << endl;
	fflush(stdin);
	do{
		cin >> t;
	}while(!(t>=0 && t<=100));
	Age = t;
	
	cout << "Enter Patient's Contact: " << endl;
	fflush(stdin);
	getline(cin,Contact);
	
}// end of "SET DATA"

