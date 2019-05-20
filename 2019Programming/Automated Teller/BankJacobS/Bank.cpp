//============================================================================
// Name        : Bank.cpp
// Author      : Jacob Schwartz
// Version     :
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================
// Notes: I need to access the main file for the account details.
// The main needs variables for the balance
//csv files? get someone else to test the project on their comp

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
using namespace std;

string password = "Password";

double balance = 0.00;
double scale = 0.01;
string input;
string deposit;
string withdraw;
string details;
string records;
string balanceRecords;
double dDeposit;
double dWithdraw;
bool on = true;
bool found = false;
bool found2 = false;

//Borrowed from http://www.cplusplus.com/forum/beginner/31141/
bool is_number(const string& s) {
	for (int i = 0; i < s.length(); i++) //for each char in string,
		if (!((s[i] >= '0' && s[i] <= '9') || (s[i] == ' ') || (s[i] == '.')))
			return false;
	//if s[i] is between '0' and '9' of if it's a whitespace (there may be some before and after
	// the number) it's ok. otherwise it isn't a number.

	return true;
}

int main() {

	fstream balances;
	balances.open("Balances.txt", ios::in);

	while (!balances.eof()) {
		while (balanceRecords != password) {
			balances >> balanceRecords;
			found = true;
			if(balanceRecords == ""){
				balance = 0;
			}
		}

		if(balanceRecords == password){
				balances >> balanceRecords;
		balance = stoi(balanceRecords);
		}

		/*
		if(balances.eof() && !found){
			balance = 0;
		}
		*/


	}
	balances.close();

	time_t now = time(0);
	char* dt = ctime(&now);
	string date = dt;

	while (on == true) {

		cout << " Your balance is $" << balance << endl;
		cout
				<< " Would you like to make a deposit (1), withdrawal (2), view your history (3), or exit to the menu (4)? "
				<< endl;
		getline(cin, input);

		if (input == "1") {
			cout << "How much would you like to deposit? " << endl;
			getline(cin, deposit);

			if (is_number(deposit)) {

				dDeposit = stod(deposit);
				balance += dDeposit;
				balance = floor(balance / scale + 0.5) * scale;
				cout << "Would you like to add details to the record? (yes/no) "
						<< endl;
				getline(cin, input);
				if ((input == "yes") || (input == "y")) {
					cout << "Write it here or type Cancel" << endl;
					getline(cin, details);
					if (details == "cancel") {
						details = "";
					}

				}
			}

			ofstream outfile;
			outfile.open("Records.txt", ios::app);

			outfile << endl;
			outfile << password << " ;" << endl;

			outfile << dt << " Deposit: $" << dDeposit << ", " << details
					<< ", Balance: $" << balance << " ;" << endl;

			outfile << "~";

			outfile.close();
		}

		if (input == "2") {
			cout << "How much would you like to withdraw? " << endl;
			getline(cin, withdraw);

			if (is_number(withdraw)) {

				dWithdraw = stod(withdraw);
				balance -= dWithdraw;
				balance = floor(balance / scale + 0.5) * scale;
				cout << "Would you like to add details to the record? (yes/no) "
						<< endl;
				getline(cin, input);
				if ((input == "yes") || (input == "y")) {
					cout << "Write it here or type Cancel" << endl;
					getline(cin, details);
					if (details == "cancel") {
						details = "";
					}

				}
			}

			ofstream outfile;
			outfile.open("Records.txt", ios::app);

			outfile << endl;
			outfile << password << " ;" << endl;

			outfile << dt << " Withdrawal: $" << dWithdraw << ", " << details
					<< ", Balance: $" << balance << " ;" << endl;

			outfile << "~";

			outfile.close();

		}

		if (input == "3") {
			cout << "accessing files..." << endl;

			ifstream infile;
			infile.open("Records.txt", ios::in);

			while (!infile.eof()) {
				while (records != password) {
					infile >> records;
					cout << records << endl;
					found2 = true;
				}

				if(infile.eof() && !found2){
					cout << "No records found." << endl;
				}

				cout << records;
				while (records != "~") {
					infile >> records;
					cout << " " << records;
					if (records == ";") {
						cout << endl;
					}
				}
				cout << endl;
			}
			cout << endl;
			infile.close();

		}

		if (input == "4") {

			fstream balances;
			balances.open("Balances.txt", ios::app);

			balances << endl;
			balances << password << " " << balance;

			balances.close();

			return 0;
		}

	}
}

