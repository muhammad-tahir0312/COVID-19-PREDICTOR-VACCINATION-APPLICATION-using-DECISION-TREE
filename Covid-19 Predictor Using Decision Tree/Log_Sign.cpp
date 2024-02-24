#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <fstream>

// HEADER FILE :: Log_Sign
#include "Log_Sign.h"

Log_Sign::Log_Sign(){	}	// DEFAULT CONSTRUCTOR


	// OPTIONS FUNCTION
bool Log_Sign::Options(){	
	
    char option;
    
    while(true){
	cout << "Choose From The Following: " << endl << endl;
	cout << "A) Login" << endl;
	cout << "B) Signup" << endl;
	cout << "C) Exit" << endl;
	try
	{
		cin >> option;
		if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c')
			{
				break; 
			}
		else
			{
				throw(option);
		}
	}
	catch(char o){
		cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
		cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
		getch();
		system("cls");	
	}
}
//    do{
//		cin >> option;
//		// CLEAR SCREEN 
//	}while(!(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c'));

    switch (option){
		case 'A':
			case 'a':{
				x:
				Login();
	        
			return 1;	// return 1 if login is approved!
		}
		case 'B':
			case 'b':{
	        	Signup();
	        //	Login();
	        	goto x;
				break;
		}
		case 'C':
			case 'c':{
			 	exit(0);
			}
		default:
			cout << "Invalid Choice!!" << endl;	
			exit(0);
	}    
}	// end of "OPTIONS Func."


	// LOGIN FUNCTION
bool Log_Sign::Login(){

    int count=0, temp=1;

    x:
    cout << "Enter User Name: " << endl;
    cin>>UserName;

    cout << "Enter User Password: " << endl;
    cin>>Password;

    ifstream myfile("userData.txt");

    while(myfile>>User>>Pass) {
        if (User==UserName && Pass==Password) {
            count=1;
        }
    }
    myfile.close();
    if (count==1) {
        cout << "LOGIN APPROVED" << endl;
       return 1; 
        
    } else {   
        temp +=1;
        if(temp>3){		// ONLY 3 TIMES PASSWORD CAN BE ENTERED!
        	return 0;
		}
		else{
			cout << "Invalid Input!!\n  Try Again." << endl;
			cout << "[PRESS 'ENTER' TO CONTINUE]" << endl;
		    getch();
		    system("cls");
		}
        goto x;
    }
}	// end of "LOGIN Func."


	// SIGNUP FUNCTION
void Log_Sign::Signup() {

    cout << "Enter User Name: " << endl;
    cin>>UserName;

    cout << "Enter User Password: " << endl;
    cin>>Password;

    ofstream file("userData.txt",ios::app);

    file<<UserName<<" "<<Password<<endl;

    file.close();

    cout<<"Registration Successful" << endl;
    
}	// end of "SIGNUP Func."

