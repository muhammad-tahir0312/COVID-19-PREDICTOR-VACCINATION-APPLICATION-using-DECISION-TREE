#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

// HEADER FILE :: HUMAN
#include "Human.h"
// HEADER FILE :: Medical_Staff
#include "Medical_Staff.h"
// HEADER FILE :: Citizen
#include "Citizen.h"
// HEADER FILE :: Log_Sign
#include "Log_Sign.h"
// HEADER FILE :: DecisionTree
#include "DecisionTree.h"
// HEADER FILE :: Inventory
#include "Inventory.h"
// HEADER FILE :: Centers
#include "Centers.h"
// HEADER FILE :: Menu
#include "Menu.h"


	// CONSTRUCTORS	
// DEFAULT CONSTRUCTOR
Menu::Menu(){ }

	// MENU :: MAIN MENU FUNCTION
void Menu::GetMainMenu(){
	
	Log_Sign L;
	Citizen C;
	Medical_Staff M;
	DecisionTree D;
	Inventory I;
	Centers CC;

	system("color E5");
    Intro();
	getch();
	system("CLS");
while(true){
do{
	if(L.Options()){
		char option;
		system("CLS");
		
	while(true){
		cout << "Choose From The Following: " << endl << endl;
		cout << "A) Citizen" << endl;
		cout << "B) Hospital" << endl;
		cout << "C) Decision Tree" << endl;
		cout << "D) Exit" << endl;
	try
		{
			cin >> option;
			if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d')
			{
				break; 
			}
			else
			{
				throw(option);
			}
		}
   	catch(char o)	{
			cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
			cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
			getch();
			system("cls");	
	}
}
	    switch (option){
			case 'A':
				case 'a':{
					system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO CITIZEN PORTAL";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
        			/////////////////////////////////////
					cout << endl << endl;
					C.Set_Human_Data();
					C.Set_Citizen_Data();
					
				    cout << "\n\n\n\t[PRESS 'ENTER' TO CONTINUE]" << endl;
				    getch();
				    system("CLS");
				    ///////
				    cout << "\n\t\n\tCENTER PART STARTED!";		
					////////	    
					if(C.GetVaccine_Status() == 0){
						CC.All_Driver_Code();
					}
					C.DisplayData();
	    cout<<"\n----------------------------------------------------------------------------------------------------------";
				    cout << "\n\n\n\t[PRESS 'ENTER' TO CONTINUE]" << endl;
				    getch();
				    system("CLS");				
					break;
			}
			case 'B':
				case 'b':{			// switch case 1) Inventory 2) 		// INVENTORY
		        	system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO HOSPITAL PORTION";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					/////////////////////////////////////
					while(true){
					cout << "Choose From The Following: " << endl << endl;
					cout << "A) Medical Staff" << endl;
					cout << "B) Inventory" << endl;
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
				   	catch(char o)	{
							cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
							cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
							getch();
							system("cls");	
					}
				}		        	
		        	switch(option){
						case 'A':
							case 'a':{
								M.Set_Human_Data();
								M.Set_Medi_Staff_Data();
								M.writeMedicData();
								
								M.DisplayData();
								cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
								getch();
								break;
							}
		        		case 'B':
							case 'b':{
								I.Choice();
								cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
								getch();
								break;
							}
		        		case 'C':
							case 'c':{
								exit(0);
							}
		        		default:
							cout << "Invalid Choice!!" << endl;
					}
		        	
					break;
			}
			case 'C':
				case 'c':{
					system("cls");
					//////////////////////////////////////
					string p=" WELCOME TO DECISION TREE PORTION";
        			gotoxy(45,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					/////////////////////////////////////
					
				 	D.Choice();
				 	break;
				}
			case 'D':
				case 'd':{
					system("cls");
					//////////////////////////////////////
					string p=" EXITING THE PROGRAM";
        			gotoxy(46,4);
        			
        			for(int i=0;i<p.size();i++){
			            Sleep(50);
			            cout<<p[i];
			        }
					cout << endl << endl;
					cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
					getch();
					/////////////////////////////////////
				 	exit(0);
				 	break;
				}
			default:
				cout << "Invalid Choice!!" << endl;
		}
	}
	cout << "end of program!";
	break;

}while(true);
} 
		
}

	// MENU ::  STYLING FUNCTION
void Menu::gotoxy(int x, int y)
{

  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);

}
	// MENU ::  STYLING FUNCTION
void Menu::Intro(void)
    {
        int i;
        string p=" WELCOME TO COVID 19 PREDICTOR & VACCINATION CONSOLE BASED APPLICATION";
        gotoxy(14,12);

        for(i=0;i<12;i++){

            Sleep(55);
            cout<<":";
        }

        for(i=0;i<p.size();i++){

            Sleep(50);
            cout<<p[i];
        }

        for(i=0;i<12;i++){

            Sleep(55);
            cout<<":";
        }

        string d=" A Project developed by:";
        gotoxy(49,24);

        for(i=0;i<d.size();i++){

            Sleep(50);
            cout<<d[i];
        }

        string S="Sabika Shameel K21-4606";
        string I="Insha  Javed   K21-3279";
        string Y="Muhammad Tahir K21-4503";
        gotoxy(50,26);

        for(i=0;i<S.size();i++){

            Sleep(50);
            cout<<S[i];
        }

        gotoxy(50,27);

        for(i=0;i<I.size();i++){

            Sleep(50);
            cout<<I[i];

        }

        gotoxy(50,28);

        for(i=0; i<Y.size(); i++){

            Sleep(50);
            cout<<Y[i];
        }
    }
