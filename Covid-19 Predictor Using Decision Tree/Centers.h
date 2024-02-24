#ifndef CENTERS_H
#define CENTERS_H

#include<string>

using namespace std;

class Centers
{
	public:
		string CenterName;
	    int CenterNumber, availability0fDays[3], NoOfPatientsADay[3];
		int TotalVaciinatedPeoplePerArea[8];  
		
		Centers();
		Centers(string name, int num, int day1, int day2, int day3, int numPatients1, int numPatients2, int numPatients3 );
		
		void setCenterNumber(int num);
		
		void setAvailabilityDay1(int day1);
		
		void setAvailabilityDay2(int day2);
		
		void setAvailabilityDay3(int day3);
		
		void setNoOfPatientsDay1(int num);
		
		void setNoOfPatientsDay2(int num);
		
		void setNoOfPatientsDay3(int num);
		
		void All_Driver_Code();
		
		void Mobile_Service();
};

#endif
