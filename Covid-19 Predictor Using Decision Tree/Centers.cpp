#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

// HEADER FILE :: Centers
#include "Centers.h"
// HEADER FILE :: Citizen
#include "Citizen.h"

void ShowData(int []);	// Prototype of independent function

Centers::Centers() : TotalVaciinatedPeoplePerArea {250, 450, 236, 179, 579, 184, 201, 333}{	}	

Centers::Centers(string name, int num, int day1, int day2, int day3, int numPatients1, int numPatients2, int numPatients3 ) : CenterName(name){
	setCenterNumber(num);
	setAvailabilityDay1(day1);
	setAvailabilityDay2(day2);
	setAvailabilityDay3(day3);
	setNoOfPatientsDay1(numPatients1);
	setNoOfPatientsDay2(numPatients2);
	setNoOfPatientsDay3(numPatients3);
}
	

void Centers :: setCenterNumber(int num){
	if(num>0 && num<20){  
		CenterNumber = num;	
		}	
}

void Centers :: setAvailabilityDay1(int day1){
	if(day1==0 || day1==1) availability0fDays[0] = day1;
	else availability0fDays[0] = 0;
}
	
void Centers :: setAvailabilityDay2(int day2){
	if(day2==0 || day2==1) availability0fDays[1] = day2;
	else availability0fDays[1] = 0;
}
	
void Centers :: setAvailabilityDay3(int day3){
	if(day3==0 || day3==1) availability0fDays[2] = day3;
		else availability0fDays[2] = 0;
}
	
void Centers :: setNoOfPatientsDay1(int num){
	if(num>=0 || num<=200){
		NoOfPatientsADay[0] = num;
	}
	else NoOfPatientsADay[0] = 0;
}
	
void Centers :: setNoOfPatientsDay2(int num){
	if(num>=0 || num<=200){
		NoOfPatientsADay[1] = num;
	}
	else NoOfPatientsADay[1] = 0;
}
	
void Centers :: setNoOfPatientsDay3(int num){
	if(num>=0 || num<=200){
		NoOfPatientsADay[2] = num;
	}
	else NoOfPatientsADay[2] = 0;
}
	
void Centers::All_Driver_Code(){
	
	Citizen C;
	
	//Setting up Time/Date
    time_t now;
	struct tm nowlocal;
	now = time(NULL);
	nowlocal = *localtime(&now);
	
	// Variable Decleration
	char AreaChoice;	// temp var.
	int t, CenterChoice, DateChoice, numberOfAppointments; 
		
//Setting up Centers Data
	Centers CentersData[] = {   Centers("Patel Hospital",1,0,1,0,0,3,2), Centers("Agha Khan University Hospital",2,0,1,1,0,3,3), Centers("Asfaq Memorial Hospital",3,1,1,0,3,3,2), Centers("Memon Hospital",4,1,0,0,3,0,0),
	                            Centers("University of Karachi",5,0,1,0,0,3,2), Centers("Sindh Government Hospital Korangi 5",6,0,1,0,0,3,0), Centers("Juma Goth Dispencery",7,0,0,1,0,2,3), Centers("Landhi Medical Complex",8,0,0,1,2,1,3),
	                            Centers("Sindh Goverment Qatar Hospital",9,1,0,0,3,1,2), Centers("RHC Moangopir",10,0,0,0,3,2,0), Centers("Rehamn General Hospital",11,0,0,0,1,2,0), Centers("Holy Family Hospital",12,1,1,0,3,3,0),
	                            Centers("Taj Medical Complex",13,0,1,1,0,3,3), Centers("Al-Khaleej Tower ",14,0,1,0,2,3,0), Centers("Ziauddin Hospital Kemari",15,0,1,0,0,3,0), Centers("KPT Hospital",16,1,0,0,3,1,2)  };

		numberOfAppointments = 1;
//Select a center & schedule an appointment	
for(int i=0; i<numberOfAppointments; i++){
	system ("CLS");
	//ShowData(TotalVaciinatedPeoplePerArea);
	while(true){
	cout<<"Select an Area (Karachi), to choose from the centers nearest to you"
	    <<"\n A    Gulshan-e-Iqbal"
	    <<"\n B    Gulistan-e-Johar"
	    <<"\n C    Korangi Town"
	    <<"\n D    Malir"
	    <<"\n E    New Karachi"
	    <<"\n F    North Nazimabad"
	    <<"\n G    Saddar"
	    <<"\n H    Clifton" << endl;	
   	try{
   	   		cin >> AreaChoice; 
   		
		   if(AreaChoice=='A' || AreaChoice=='a' || AreaChoice=='B' || AreaChoice=='b' || AreaChoice=='C' || AreaChoice=='c' || AreaChoice=='D' || AreaChoice=='d' || AreaChoice=='E' 
		   		|| AreaChoice=='e' || AreaChoice=='F' || AreaChoice=='f' || AreaChoice=='G' || AreaChoice=='g' || AreaChoice=='H' || AreaChoice=='h' ){
   						break;
   			}
		else{
		  	throw(AreaChoice);
		}	
   	}
   	catch(char o)	{
			cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
			cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
			getch();
			system("cls");	
	}
}
    }
    system ("CLS");
    
    switch(AreaChoice){
    case 'A':
		case 'a':{
	    		cout<<"\nArea -----> Gulshan-e-Iqbal"<<endl;
	    		cout<<"\nList of Centers Near You & Available Dates : "<<endl;
	    		
//Patel Hospital
	cout<<"\n (1)    Patel Hospital"
	    <<"\n        Available Dates:";
	if((CentersData[0].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[0].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[0].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }     
    if(CentersData[0].availability0fDays[0] == 1 && CentersData[0].availability0fDays[1] == 1 && CentersData[0].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}
					
//AGHA                    
	cout<<"\n\n (2)    Agha Khan University Hospital"
		<<"\n        Available Dates:";
	if(CentersData[1].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[1].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[1].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}   
	if(CentersData[1].availability0fDays[0] == 1 && CentersData[1].availability0fDays[1] == 1 && CentersData[1].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}
					
//Ashfaq Memorial Hospital						  
	cout<<"\n\n (3)    Asfaq Memorial Hospital "
	    <"\n        Available Dates:";
	if(CentersData[2].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[2].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[2].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}  
	if(CentersData[2].availability0fDays[0] == 1 && CentersData[2].availability0fDays[1] == 1 && CentersData[2].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}
	                    
		while(true){		   

	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t>=1 && t<=3));   
	CenterChoice = t;		 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t!=2 && t==3));   
	DateChoice = t;		 
	////////////////////////   
	    	if(!(CenterChoice>0 && CenterChoice<=3 && CentersData[CenterChoice-1].availability0fDays[DateChoice-1] == 0 && (DateChoice==1 || DateChoice==2 || DateChoice==3))){
		    	cout<<"\n\t<<<Invalid Input, Please Try Again.>>>";
			    }
			else break;
		}
		        
	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		    system ("CLS");
			 cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		   	 //C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		    cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		        <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Gulshan-e-Iqbal."
		        <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		    cout<<"\n----------------------------------------------------------------------------------------------------------";
		    TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		    break;		
		}	// end of case 1
	case 'B':
		case 'b':{
    		while(true){
	    		cout<<"\nArea -----> Gulistan-e-Johar"<<endl;
	    		cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    		
//Memon Hospital
	    cout<<"\n (4)    Memon Hospital"
	    	<"\n        Available Dates:";
	    if((CentersData[3].availability0fDays[0]) == 0){
	        cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
        }
		if(CentersData[3].availability0fDays[1] == 0){
	        cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
        }
		if(CentersData[3].availability0fDays[2] == 0){
	        cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
        }     
        if(CentersData[3].availability0fDays[0] == 1 && CentersData[3].availability0fDays[1] == 1 && CentersData[3].availability0fDays[2] == 1){
            cout<<"\n\n                        No Available Dates for the Next Three Days.";
		}
//UOK                    
	    cout<<"\n\n (5)    University of Karachi"
		    <<"\n        Available Dates:";
		if(CentersData[4].availability0fDays[0] == 0){
		    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	    }
		if(CentersData[4].availability0fDays[1] == 0){
		    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	    }
		if(CentersData[4].availability0fDays[2] == 0){
		    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	    }     
	    if(CentersData[4].availability0fDays[0] == 1 && CentersData[4].availability0fDays[1] == 1 && CentersData[4].availability0fDays[2] == 1){
            cout<<"\n\n                        No Available Dates for the Next Three Days.";
		}
		
	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t==4 || t==5));   
	CenterChoice = t;		 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t<=3));   
	DateChoice = t;			 
	////////////////////////   
       
	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		    system ("CLS");
		    cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		    //	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		    cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		        <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Gulistan-e-Johar."
		        <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		    cout<<"\n----------------------------------------------------------------------------------------------------------";
		    TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		break;		
		}
			break;
	}	// end of case 2
	case 'C':
		case 'c':{
		while(true){
	    	cout<<"\nArea -----> Korangi Town"<<endl;
	    	cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    	
//Sindh Government Hospital 
	cout<<"\n (6)    Sindh Government Hospital Korangi 5"
	    <<"\n        Available Dates:";
	if((CentersData[5].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[5].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[5].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }     
    if(CentersData[5].availability0fDays[0] == 1 && CentersData[5].availability0fDays[1] == 1 && CentersData[5].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}
	
	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t==6));   
	CenterChoice = t;		 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t==1 || t==3));   
	DateChoice = t;			 
	////////////////////////
	 
	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		    system ("CLS");
		    cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		    //	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		    cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		        <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Korangi Town."
		        <<"\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		    cout<<"\n----------------------------------------------------------------------------------------------------------";
		    TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		    
		break;		
	}
	break;
}	// end of case 3
	case 'D':
		case 'd':{
    	
		while(1){
	    	cout<<"\nArea -----> Malir"<<endl;
	    	cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    	
//Juma Goth Dispencery
	cout<<"\n (7)    Juma Goth Dispencery"
	    <<"\n        Available Dates:";
	if((CentersData[6].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[6].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[6].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }     
    if(CentersData[6].availability0fDays[0] == 1 && CentersData[6].availability0fDays[1] == 1 && CentersData[6].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}
					
//Landhi Medical Complex                   
	cout<<"\n\n (8)    Landhi Medical Complex"
		<<"\n        Available Dates:";
	if(CentersData[7].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[7].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[7].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	} 
	if(CentersData[7].availability0fDays[0] == 1 && CentersData[7].availability0fDays[1] == 1 && CentersData[7].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}    
	
	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t==7 || t==8));   
	CenterChoice = t;		 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t<=2));   
	DateChoice = t;			 
	////////////////////////

	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
	if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		system ("CLS");
		cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		    //	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		    <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Malir."
		    <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		cout<<"\n----------------------------------------------------------------------------------------------------------";
		TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		    
		break;		
	}
	break;
}	// end of case 4
	case 'E':
		case 'e':{
    		
		while(1){
	    	cout<<"\nArea -----> New Karachi"<<endl;
	    	cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    	
//Sindh Government Qatar Hospital
	cout<<"\n (9)    Sindh Government Qatar Hospital"
	    <<"\n        Available Dates:";
	if((CentersData[8].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[8].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[8].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }     
    if(CentersData[8].availability0fDays[0] == 1 && CentersData[8].availability0fDays[1] == 1 && CentersData[8].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}
//RHC Mangopi                  
	cout<<"\n\n (10)    RHC Mangopir"
		<<"\n        Available Dates:";
	if(CentersData[9].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[9].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[9].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	} 
	if(CentersData[9].availability0fDays[0] == 1 && CentersData[9].availability0fDays[1] == 1 && CentersData[9].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}    
	
	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t==9 || t==10));   
	CenterChoice = t;		 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t<=3));   
	DateChoice = t;			 
	////////////////////////

	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
	if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		system ("CLS");
		cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		    //	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		    <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<",New Karachi."
		    <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		cout<<"\n----------------------------------------------------------------------------------------------------------";
		TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		break;		
	}
	break;
}	// end of case 5
	case 'F':
		case 'f':{
    	
	    cout<<"\nArea -----> North Nazimabad"<<endl;
	    cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    		
//Rehman General Hospital
	cout<<"\n (11)    Rehman General Hospital"
	    <<"\n        Available Dates:";
	if((CentersData[10].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[10].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[10].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }   
    if(CentersData[10].availability0fDays[0] == 1 && CentersData[10].availability0fDays[1] == 1 && CentersData[10].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	} 
	
	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t==11));   
	CenterChoice = t;		 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t<=3));   
	DateChoice = t;			 
	////////////////////////

	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
	if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		system ("CLS");
		cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		   	//	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		    <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", North Nazimabad."
		    <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		cout<<"\n----------------------------------------------------------------------------------------------------------";
		TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
	break;
}	// end of case 6
	case 'G':
		case 'g':{

	    cout<<"\nArea -----> Saddar"<<endl;
	    cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    
//Holy Family Hospital
	cout<<"\n (12)    Holy Family Hospital"
	    <<"\n        Available Dates:";
	if((CentersData[11].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[11].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[11].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }     
    if(CentersData[11].availability0fDays[0] == 1 && CentersData[11].availability0fDays[1] == 1 && CentersData[11].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	} 
					    
//Taj Medical Hospital                    
	cout<<"\n\n (13)    Taj Medical Hospital"
		<<"\n        Available Dates:";
	if(CentersData[12].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[12].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[12].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	} 
	if(CentersData[12].availability0fDays[0] == 1 && CentersData[12].availability0fDays[1] == 1 && CentersData[12].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	} 
						
// Al-Khaleej Tower						    
	cout<<"\n\n (14)    Al-Khaleej Tower"
	    <<"\n        Available Dates:";
	if(CentersData[13].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[13].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[13].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}  
	if(CentersData[13].availability0fDays[0] == 1 && CentersData[13].availability0fDays[1] == 1 && CentersData[13].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	} 

	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t>=12 && t<=14));   
	CenterChoice = t;		 
	//////////////////////// 

	////////////////////////
	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t<=3));   
	DateChoice = t;			 
	////////////////////////

	CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
	if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		system ("CLS");
		cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		    //	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		    <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Saddar."
		    <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		cout<<"\n----------------------------------------------------------------------------------------------------------";
		TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		break;	
}				
	case 'H':
		case 'h':{

	cout<<"\nArea -----> Clifton"<<endl;
	cout<<"\nList of Centers Near You & their Availability : "<<endl;
	    		
//Ziauddin Hospital Karachi
	cout<<"\n (15)    Ziauddin Hospital Karachi"
	    <<"\n        Available Dates:";
	if((CentersData[14].availability0fDays[0]) == 0){
	    cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[14].availability0fDays[1] == 0){
	    cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    }
	if(CentersData[14].availability0fDays[2] == 0){
	    cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
    } 
	if(CentersData[14].availability0fDays[0] == 1 && CentersData[14].availability0fDays[1] == 1 && CentersData[14].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	}     
                     
//KPT Hospital                    
	cout<<"\n\n (16)    KPT Hospital"
		<<"\n        Available Dates:";
	if(CentersData[15].availability0fDays[0] == 0){
		cout<<"\n                        (1) "<<nowlocal.tm_mday<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[15].availability0fDays[1] == 0){
		cout<<"\n                        (2) "<<nowlocal.tm_mday+1<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}
	if(CentersData[15].availability0fDays[2] == 0){
		cout<<"\n                        (3) "<<nowlocal.tm_mday+2<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900;
	}     
	if(CentersData[15].availability0fDays[0] == 1 && CentersData[15].availability0fDays[1] == 1 && CentersData[15].availability0fDays[2] == 1){
        cout<<"\n\n                        No Available Dates for the Next Three Days.";
	} 

	////////////////////////
	do{
		cout<<"\n\nEnter Your Center Choice: ";
		cin >> t;
	}while(!(t>=15 && t<=16));   
	CenterChoice = t;		 
	//////////////////////// 

	do{
		cout<<"Enter Your Preferred Date: ";
		cin >> t;
	}while(!(t>=1 && t<=3));   
	DateChoice = t;			 
	////////////////////////

		CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]+=1;
		if(CentersData[CenterChoice-1].NoOfPatientsADay[DateChoice-1]==3) CentersData[CenterChoice-1].availability0fDays[DateChoice-1] = 1;
		system ("CLS");
		cout<<"\n\n\n\n----------------------------------------------------------------------------------------------------------";
			//###################################
		    //	C.DisplayData();		// SHOW COMPLETE DATA OF THE USER
		    //###################################
		cout<<"\nYour Vaccination Appointment has been Scheduled\nDATE: "<<nowlocal.tm_mday+(DateChoice-1)<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
		    <<"\nCENTER: "<<CentersData[CenterChoice-1].CenterName<<", Clifton."
		    <<"\n\nWalk in anytime & get yourself vaccinated, to fulfill your rights of a responsible citizen :).";
//		cout<<"\n----------------------------------------------------------------------------------------------------------";
		TotalVaciinatedPeoplePerArea[AreaChoice - 1] += 1;
		break;		
	}	// end of case 8
		default:
			cout<<"Error, Program Exiting.";
    }
    
    fflush(stdin);
    cin.get();
    getch();
    
}	// END OF All_Driver_Code



// INDEPENDENT SHOW DATA FUNCTION
void ShowData(int TotalVaciinatedPeoplePerArea[8]){
	
	string CenterNamaes[100] = { "Gulshan-e-Iqbal\t","Gulistan-e-Johar","Korangi Town\t","Malir\t\t",
								 "New Karachi\t","North Nazimabad\t","Saddar\t\t",
								 "Clifton\t\t"	};
	
	cout << endl << endl << "\t Center Name" << "\t\tNo. Of Vaccinated People" << endl << endl;
	for(int i=0; i<=7; i++){
		cout << "\t" << CenterNamaes[i] << "\t\t" << TotalVaciinatedPeoplePerArea[i] << endl;
	}
}

void Centers::Mobile_Service(){

//time library =>  #include<ctime> 
time_t now;
struct tm nowlocal;
now = time(NULL);
nowlocal = *localtime(&now);

//varaibles
int today = 1;
int count;
string name;  //string library
int day;

string AreasArray[8] = { "Gulshan-e-Iqbal", "Gulistan-e-Johar", "Korangi Town", "Malir", "New Karachi", "North Nazimabad", "Saddar", "Clifton" };

//file library =>  #include<fstream>
ifstream myfile("medicStaff.txt");

// TotalVaciinatedPeoplePerArea[] from centers.cpp
// AreasArray[] from [] centers.cpp
for(int i=0; i<8 ; i++){
	count = 0;
	if( TotalVaciinatedPeoplePerArea[i] < 100 ){
		while(myfile>>name>>day) {
	        if (day == 1) {
	            cout<<"Medic: "<<name<<"\n";
	            count++;
	        }
	        if(count==2){
	        	cout<<"\nAre the voulnteers for the mobile vaccine service drive.\nDate: "<<nowlocal.tm_mday+today<<"-"<<nowlocal.tm_mon+1<<"-"<<nowlocal.tm_year+1900
	        	    <<"\nArea: "<< AreasArray[0];
	        	    today++;
	        	    break;
			}
	    }	    
    }
}
		
}	// END OF MOBILE_SERVICE FUNCTION
