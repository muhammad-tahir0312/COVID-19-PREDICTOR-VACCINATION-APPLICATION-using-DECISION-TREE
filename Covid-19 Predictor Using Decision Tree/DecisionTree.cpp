#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

// HEADER FILE :: DecisionTree
#include "DecisionTree.h"

DecisionTree::DecisionTree(){	// DEFAULT CONSTRUCTOR
	LossTaste_Smell=DifficultyBreathing=Cough=Dirhea=BodyAches=RunnyNose=Heacdache=Fever=SoreThroat=0.0;
}

void DecisionTree::Choice(){	// START OF Choice FUNCTION
	
	char t,t2,t3,t5,t7,t9;	int t1=0,t4=0,t10;	// TEMPORARY VARIABLES 
	double temp1=0.0, temp2=0.0, temp3=0.0, temp4=0.0; 
	
	cout << "\tCovid 19 PREDICTOR " << endl;	
	cout << endl << "Answer the Following: " << endl << endl;
	
	while(true){
	cout << "[A] Are you feeling Fever (>100.4)" << endl;
	cout << "[B] Cough " << endl;
	try
		{
			cin >> t;
			if(t=='A' || t=='a' || t=='B' || t=='b')
				{
					break; 
				}
			else
				{
					throw(t);
				}
		}
	catch(char o){
		cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
		cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
		getch();
		system("cls");	
	}
}
//	do{
//		cout << "Enter: " ;
//		cin >> t;
//	}while(!(t=='A' || t=='a' || t=='B' || t=='b'));
	
	if(t=='A' || t=='a'){
		Fever = 0.5;
		temp2=temp1 = Fever;
		t1 = 1;
	}
	else if(t=='B' || t=='b'){
		Cough = 0.5;
		temp3=temp4= Cough;
		t1 = 2;
	}
	else{
		cout << "Invalid Input" << endl;
	}
	
	if(t1==1){
			while(true){
			cout << "\n[A] RunnyNose " << endl;
			cout << "[B] Heacdache " << endl;
			try
				{
					cin >> t2;
					if(t2=='A' || t2=='a' || t2=='B' || t2=='b')
						{
							break; 
						}
					else
						{
							throw(t2);
						}
				}
			catch(char o){
				cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
				cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
				getch();
				system("cls");	
			}
		}			
//			do{
//				cout << "Enter: " ;
//				cin >> t2;
//			}while(!(t2=='A' || t2=='a' || t2=='B' || t2=='b'));
			
			if(t2=='A' || t2=='a'){
				RunnyNose = 0.6;
				temp1 *= RunnyNose;
				t4 = 1;
			}		
			else if(t2=='B' || t2=='b'){
				Heacdache = 0.4;
				temp2 *= Heacdache;
				t4 = 2;
			}
			else{
				cout << "Invalid Input" << endl;
			}
				if(t4==1){
					while(true){
					cout << "\n[A] Shortness of Breath" << endl;
					cout << "[B] Congestion" << endl;
					try
						{
							cin >> t5;
							if(t5=='A' || t5=='a' || t5=='B' || t5=='b')
								{
									break; 
								}
							else
								{
									throw(t5);
								}
						}
					catch(char o){
						cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
						cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
						getch();
						system("cls");	
					}
				}					
//					do{
//						cout << "Enter: " ;
//						cin >> t5;
//					}while(!(t5=='A' || t5=='a' || t5=='B' || t5=='b'));
					
						if(t5=='A' || t5=='a'){
							Shortness_of_Breath = 0.6;
							temp1 *= Shortness_of_Breath;
						}		
						else if(t5=='B' || t5=='b'){
							Congestion = 0.4;
							temp1 *= Congestion;
						}
						else{
							cout << "Invalid Input" << endl;
						}	
				}
				else if(t4==2){
					while(true){
					cout << "\n[A] Cold" << endl;
					cout << "[B] Chills" << endl;
					try
						{
							cin >> t7;
							if(t7=='A' || t7=='a' || t7=='B' || t7=='b')
								{
									break; 
								}
							else
								{
									throw(t7);
								}
						}
					catch(char o){
						cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
						cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
						getch();
						system("cls");	
					}
				}
//					do{
//						cout << "Enter: " ;
//						cin >> t7;
//					}while(!(t7=='A' || t7=='a' || t7=='B' || t7=='b'));
					
						if(t7=='A' || t7=='a'){
							Cold = 0.8;
							temp2 *= Cold;
						}		
						else if(t7=='B' || t7=='b'){
							Chills = 0.2;
							temp2 *= Chills;
						}
						else{
							cout << "Invalid Input" << endl;
						}
				}
				else{
					cout << "Invalid Input" << endl;
				}
	}
	else if(t1==2){
		while(true){
		cout << "\n[A] BodyAches " << endl;
		cout << "[B] LossTaste_Smell " << endl;
		try
			{
				cin >> t3;
				if(t3=='A' || t3=='a' || t3=='B' || t3=='b')
					{
						break; 
					}
				else
					{
						throw(t3);
					}
			}
		catch(char o){
			cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
			cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
			getch();
			system("cls");	
		}
	}		
//		do{
//			cout << "Enter: " ;
//			cin >> t3;
//		}while(!(t3=='A' || t3=='a' || t3=='B' || t3=='b'));
		
		if(t3=='A' || t3=='a'){
				BodyAches = 0.6;
				temp3 *= BodyAches;
				t10 = 1;
			}		
			else if(t3=='B' || t3=='b'){
				LossTaste_Smell = 0.8;
				temp4 *= LossTaste_Smell;
				t10 = 2;
			}
			else{
				cout << "Invalid Input" << endl;
			}		
				if(t10==1){
					while(true){
					cout << "\n[A] Nausea" << endl;
					cout << "[B] Sore Throat" << endl;
					try
						{
							cin >> t9;
							if(t9=='A' || t9=='a' || t9=='B' || t9=='b')
								{
									break; 
								}
							else
								{
									throw(t9);
								}
						}
					catch(char o){
						cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
						cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
						getch();
						system("cls");	
					}
				}
//					do{
//						cout << "Enter: " ;
//						cin >> t9;
//					}while(!(t9=='A' || t9=='a' || t9=='B' || t9=='b'));
					
						if(t9=='A' || t9=='a'){
							Nausea = 0.4;
							temp3 *= Nausea;
						}		
						else if(t9=='B' || t9=='b'){
							SoreThroat = 0.6;
							temp3 *= SoreThroat;
						}
						else{
							cout << "Invalid Input" << endl;
						}	
				}
				else if(t10==2){
					while(true){
					cout << "\n[A] Vomiting" << endl;
					cout << "[B] DifficultyBreathing" << endl;
					try
						{
							cin >> t9;
							if(t9=='A' || t9=='a' || t9=='B' || t9=='b')
								{
									break; 
								}
							else
								{
									throw(t9);
								}
						}
					catch(char o){
						cout << endl << "Try again! Your input was " << o << " which is invalid" << endl;
						cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
						getch();
						system("cls");	
					}
				}
//					do{
//						cout << "Enter: " ;
//						cin >> t9;
//					}while(!(t9=='A' || t9=='a' || t9=='B' || t9=='b'));
					
						if(t9=='A' || t9=='a'){
							Vomiting = 0.2;
							temp4 *= Vomiting;
						}		
						else if(t9=='B' || t9=='b'){
							DifficultyBreathing = 0.8;
							temp4 *= DifficultyBreathing;
						}
						else{
							cout << "Invalid Input" << endl;
						}
				}
				else{
					cout << "Invalid Input" << endl;
				}
	}
	
	///////////////// DECISION /////////////////////

	if(temp1==0.18){	// case 1
		cout << " According to your symptoms there is a "<<temp1<<"% chance that you are COVID positive" << endl;
	}
	else if(temp2==0.16){	// case 2
		cout << " According to your symptoms there is a "<<temp2<<"% chance that you are COVID positive"<< endl;	
	}
	else if(temp3==0.18){	// case 3
		cout << " According to your symptoms there is a "<<temp3<<"% chance that you are COVID positive" << endl;	
	}
	else if(temp4>=0.32){	// case 4
		cout << " According to your symptoms there is a " <<temp4<<"% chance that you are COVID positive"<< endl;	
	}
	else if(temp1<0.18){
		cout << " According to your symptoms there is a "<<1-temp1<<"% chance that you have FLU" << endl;
	}
	else if(temp2<0.16){
		cout << " According to your symptoms there is a "<<1-temp2<<"% chance that you have FLU" << endl;
	}
	else if(temp3<0.18){
		cout << " According to your symptoms there is a "<<1-temp3<<"% chance that you have FLU" << endl;
	}
	else if(temp4<0.32){
		cout << " According to your symptoms there is a "<<1-temp4<<"% chance that you have FLU" << endl;
	}
	
	
	
	cout << endl << "[PRESS 'ENTER' TO CONTINUE]" << endl;
	getch();
	
	
			
}	// END OF CHOICE FUNCTION
