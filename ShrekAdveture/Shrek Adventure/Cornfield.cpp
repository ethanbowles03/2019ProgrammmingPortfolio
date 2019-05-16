// Author      : Nicholai Gontcharov
#include <iostream>
#include <ctime>
#include "Cornfield.h"
using namespace std;

Cornfield::Cornfield() {

}

bool Cornfield::run() {

	srand(time(NULL));

		int a;
		int on = rand() % 20 + 1;
		int og = rand() % 5 + 1;
		int layers = on * (og * 12);

	cout << "After winning the Battle Shrek and donkey are walking through a field. " << endl;
	cout << "Donkey asks why Shrek didn't Lay siege to lord farquad." << endl;
	cout << " Shrek says ogres are like onions, they have layers" << endl;
	cout << "If Onions have " << on << " layers per inch of radius How many layers does Shrek have if his diameter is " << og << " feet " << endl;

	cin >> a;

	if (a == layers) {
		cout << "You have answered correctly and can move one to the next part of Shreks quest" << endl;
		return true;
	} else {
		cout << "Shrek chokes on the onion he just bit into." << endl;
		cout << "Donkey struggles to save Shrek" << endl;
		cout << "Nothing helps and Shreks green skin turns to purple" << endl;
		cout << "Shrek has died" << endl;
		return false;
	}



	return 0;
	}
