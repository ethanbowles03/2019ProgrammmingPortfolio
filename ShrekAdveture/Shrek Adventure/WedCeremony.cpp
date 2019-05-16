//Authors: Jerimiah Bric and Mason Rasmussen

#include <iostream>
#include <ctime>
#include "WedCeremony.h"
using namespace std;

WedCeremony::WedCeremony() {

}

bool WedCeremony::run() {
	cout
			<< "To make Shrek stop the wedding ceremony in time, Shrek has to calculate when Lord Farquaad will be kissing the bride"
			<< endl;
	int equations;
	int a = rand() % 10 + 1;
	int b = rand() % 10 + 1;
	int total = a + b;
	cout << "If the speed is " << a << "and the wind is " << b
			<< "Then what is the answer?" << endl;

	cin >> equations;

	if (equations == total) {
		cout << "You are correct! You may continue flying." << endl;
		return true;
	} else {
		cout << "You are wrong. Try again." << endl;
		return false;
	}
	return 0;
}
;
