//Author: Zack Christiansen

#include <iostream>
#include <ctime>
#include "swamp.h"

using namespace std;

swamp::swamp() {

}

bool swamp::run() {
	srand(time(NULL));

	int w = rand() % 30 + 1;
	int e = rand() % 20 + 1;
	int d = rand() % 20 + 1;
	int u = rand() % 6 + 1;
	int b = rand() % 10 + 1;
	int p = rand() % 10 + 1;
	int total = w + e + d + u + b + p;
	int people;

	 cout << "If there are " << w << " wizards, " << e << " elves, " << d << " dwarfs, " << u << " unicorn, " << b << " bears,";
	 cout << " and " << p << " pigs in   the swamp how many people does ";
	 cout << "Shrek need to yell at to scare them all off? " << endl;

	 cin >> people;

	 if (people == total){
		 cout << "You are correct! You yelled at the perfect amount of people and scared them all off and you will now journey to the battle arena!" << endl;
		 return true;
	 } else {
		 cout << "You counted wrong and didn't yell at the right amount of people and they were able to capture Shrek and kill Shrek" << endl;
		 return false;
	 }
 }
