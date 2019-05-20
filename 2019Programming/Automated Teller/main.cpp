//============================================================================
// Name        : AutomatedTeller.cpp
// Author      : B4CPP Seth McCullough
// Version     : 0.2
// Copyright   : Your copyright notice
// Description : Main Function for Automated Teller app.
//============================================================================

#include <iostream>
#include <string>
using namespace std;

// Global Variables
char name[50] = "TestName";
char pass[50];

// Centered String Function General-----------------------------------------
void centerstring(char* s) {
	int l = strlen(s);
	int pos = (int) ((80 - l) / 2);
	for (int i = 0; i < pos; i++) {
		cout << " ";
	}
	cout << s <<endl;
}

// Centered String Function for specific inputs-----------------------------
void centerlogin(char* s){
	int l = strlen(s);
			int pos = (int) ((71-l) / 2);
			for (int i = 0; i<pos; i++){
				cout << " ";
			}
}

//Startup Sequence----------------------------------------------------------
void startup(){
	centerstring("******************************BankTeller******************************");
	centerstring("Welcome to the virtual bank teller!");
	centerstring("Please enter your bank number or password.");
	centerstring("If you don't have an existing account, please press 'C' to make one.");
}



int main() {
	string login;
	char passinput[50];

	// Initiate Startup
	startup();

	// Password input / Initiate Account Login
	cin >> passinput;
	if (strlen(passinput) == 1){
		// Account Registration
		centerstring("Welcome to account registration!");
	} else {
		// Account Login
		centerlogin(name);
		cout << "Welcome " << name << "." << endl;
	}
	return 0;
}
