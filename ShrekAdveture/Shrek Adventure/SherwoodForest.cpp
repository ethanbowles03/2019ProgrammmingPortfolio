//Author: Seth Mccullough

#include "SherwoodForest.h"
#include <iostream>
#include <ctime>
using namespace std;

SherwoodForest::SherwoodForest() {

}

	bool SherwoodForest::run() {
	// random seed
	srand((int) time(0));
	// Variables
	float pla, ans, men, att, sec;

	men = rand() % 15 + 5;
	att = rand() % 9 + 2;
	sec = rand() % 10 + 1;
	// Calculations
	ans = men/att*sec;

	cout << "Shrek, Donkey, and Fiona made it safely to Sherwood Forest." << endl;
	cout << "Suddenly, Fiona was snatched up from the ground." << endl;
	cout << "Robin Hood and his men have captured Fiona!" << endl;
	cout << "There are " << men << " men in Robin Hood's group." << endl;
	cout << "Shrek can take out " << att << " men in " << sec << " seconds." << endl;
	cout << "How long will it take Shrek to take out the men? (to the fifth decimal)" << endl;
	/* Temporary cheat */ //cout << ans << endl;
	cout << "Answer: ";
	cin >> pla;
	if (pla >= ans - 0.1 && pla <= ans + 0.1){
		cout << "That's right! It would take Shrek " << pla << " seconds to take out the men." << endl;
		cout << "However, while you were thinking, Fiona knocked out all of Robin Hood's men." << endl;
		return true;
	} else {
		cout << "That's not correct. Shrek stumbled and got shot by an arrow.";
		return false;
	}
}

