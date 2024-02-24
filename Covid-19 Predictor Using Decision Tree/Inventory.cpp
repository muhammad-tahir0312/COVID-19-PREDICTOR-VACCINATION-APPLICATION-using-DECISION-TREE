#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

#include "Inventory.h"

Inventory::Inventory(){	}

Inventory::Inventory(int id, int quantity)
    {
        this->id = id;
        this->quantity = quantity;
    }

char Inventory::getname()
    {
        for(int i=0; i<6; i++){
        	cout << name[i];
		}
    }
	
int Inventory::getid()
    {
        return id;
    }

int Inventory::getquantity()
    {
        return quantity;
    }
    
void Inventory::getData(void)
    {
        cout << "\n\t\t\t ENTER NAME OF VACCINE(6 characters only) : ";
        for(int i=0; i<6; i++){
        	cin >> name[i];
		}
        cout << "\n\t\t\t ENTER ID OF VACCINE : ";
        cin >> id;
        cout << "\n\t\t\t ENTER QUANTITY OF VACCINE : ";
        cin >> quantity;
	}
	
void Inventory::Choice(){
	
    //system("cls");
    string name;
    int id, i, b, quantity, t;
	char option;
	
while(true){

    loop:
//    cout << "[PRESS 'ENTER' TO CONTINUE]" << endl;
//    getch();
    system("cls");
    
	while(true){
    cout << "\n\t------------->COVID VACCINE INVENTORY<--------------";
    cout << "\n\t\t-------------->MENU<------------";
    cout << "\n\t\t\t    A FOR INSERT";
    cout << "\n\t\t\t    B FOR VIEWING";
    cout << "\n\t\t\t    C FOR DELETE";
    cout << "\n\t\t\t    D FOR UPDATE";
    cout << "\n\t\t\t    E EXIT";
    cout << "\n\t\t  ENTER YOUR CHOICE : ";
    cin >> option; 
   	   try{
   		if(option=='A' || option=='a' || option=='B' || option=='b' || option=='C' || option=='c' || option=='D' || option=='d' || option=='E' || option=='e'){
   			break;
   		}
		else{
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
    switch (option)
    {
    case 'A':
        case 'a':	
        {
			Inventory s;	

			ofstream file;	
			
			int i=0;  	
		    cout << "How many entries you want to enter: ";
		    cin >> i;
		        
			for (int p = 0; p < i; p++){
			    //open file in write mode
			    file.open("tahir.dat", ios::app | ios::out);
			    if(!file)
			    {
			      cout<<"Error in creating file.."<<endl;
			      exit(1);
			    }
			    cout<<"\nFile created successfully."<<endl;
			    
				//write into file
			    s.getData();    //read from user
			    file.write((char*)&s,sizeof(s));    //write into file
			 
			    file.close();   //close the file
			    cout<<"\nFile saved and closed succesfully."<<endl;		
			}
            goto loop;
            break;
        }
    case 'B':
    	case 'b':
        {	//re open file in input mode and read data
			//open file1
			    ifstream file1;
			    
			//again open file in read mode
			    file1.open("tahir.dat",ios::in);
			    if(!file1){
			        cout<<"Error in opening file..";
			        exit(1);
			    }
			    	Inventory v;	
			
				file1.read((char*)&v,sizeof(v));
			
			    //display data on monitor	
			    while(!file1.eof()){
			    	cout<<"\n\tNAME: ";
			    	cout << v.getname() <<"\n\tID: "<< v.getid() <<"\n\tQUANTITY: "<< v.getquantity() <<endl;
			    	
			    	file1.read((char*)&v,sizeof(v));
				}

			    file1.close();	
            goto loop;
            break;
        }
    case 'C':
    	case 'c':
        {
            cout << "\n\t Enter id of vaccine you want to delete:";
            cin >> b;

            ifstream hfile;
            hfile.open("tahir.dat");
            ofstream temp;
            temp.open("temp.dat");
            
            Inventory x;
            hfile.read((char*)&x, sizeof(x));
            while (!hfile.eof())
            {
                if (x.getid() != b)
                {
                    temp.write((char*)&x, sizeof(x));
                }
                else
                {
                    cout << "\n\t Record deleted." << endl;
                }
                hfile.read((char*)&x, sizeof(x));
            }
            temp.close();
            hfile.close();

            if (remove("tahir.dat") != 0)
            {
                cout << "\n\tFile does not get removed:";
            }

            if (rename("temp.dat", "tahir.dat"))
            {
                cout << "The file did not get rename:";
            }
            else
            {
                cout << "\n\t ok";
            }
            goto loop;
            break;
        }
    case 'D':
    	case 'd':
        {
            int g;
            char h[25], j[25];
            int b;
            cout << "enter you vaccine id to update the entry:";
            cin >> b;

            fstream hfile;
            hfile.open("tahir.dat", ios::in | ios::ate | ios::out  | ios::binary);
            hfile.seekg(0);

            Inventory x;
            hfile.read((char*)&x, sizeof(x));
            while (!hfile.eof())
            {
                if (x.getid() == b)
                {
                    cout << "Your Current Entry You want to update:" << x.getid() << " " << x.getname() << " " << x.getquantity() << endl;
                    hfile.seekp(hfile.tellg() - std::streamoff(sizeof(x)));

 					Inventory x;
 					x.getData();
                    hfile.write((char*)&x, sizeof(x));
                }
                hfile.read((char*)&x, sizeof(x));
            }
            hfile.close();
            goto loop;
            break;
        }
    case 'E':
    	case 'e':
			{
				cout << "Existing the program!";
				getch();
				exit(0);
			}
		default:
			{
				cout << "Invalid input!";
			}
	}	// end of switch case
}	// end of while loop
}

