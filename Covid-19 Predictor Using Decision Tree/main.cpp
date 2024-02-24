#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
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

int main() {
	
	Menu M;
	
	while(true){
		M.GetMainMenu();	
	}

	
	return 0;
}
