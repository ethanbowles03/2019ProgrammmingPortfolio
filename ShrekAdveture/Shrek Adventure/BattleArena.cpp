/*
 * BattleArena.cpp for the Shrek Adventure
 *
 *  Created on: Feb 28, 2019
 *      Author: Jacob Schwartz
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "BattleArena.h"

using namespace std;

BattleArena::BattleArena() {
	//Hia stackoverflow
}

bool BattleArena::fight() {
	srand((int) time(0));

	string answer;
	int trueAnswer;
	int knights = rand() % 50 + 40;
	int gallons = rand() % 55 + 40;
	
	cout
			<< "Shrek enters into the noisy battle arena, determined to get his swamp back."
			<< endl;
	cout
			<< "Unexpectedly, Lord Farquaad makes Shrek the target of the tournament."
			<< endl;
	cout << "Help Shrek to fight all the knights!" << endl;
	cout << "There are " << knights
			<< " knights. Shrek has a few ways to take them out:" << endl;
	cout << "Shrek smacks a nearby ale barrel causing it to gush out." << endl;
	cout
			<< " If the barrel was entirely full with ale, with "
			<< gallons << " gallons, and it takes 2 gallons to take out one knight, how many knights were wiped out by the ale?" << endl;
	cin >> answer;

	trueAnswer = gallons/2;
	if (answer == to_string(trueAnswer)) {
		knights -= trueAnswer;
		int otherTrueAnswer = knights;
		cout << "The attack was successful, so how many knights are left for Shrek to take out? " << endl;
		cin >> answer;
		if (answer == to_string(otherTrueAnswer)) {
		cout << "That's right! Shrek and Donkey were able to masterfully take the remaining " << knights << " knights out with his wrestling skills." << endl;
		cout << "However, it looks like Lord Farquaad is only going to return Shrek's swamp if he rescues a princess for him. Just great!" << endl;
		return true;
		} else {
		cout << "Whoops, you miscalculated, and a knight got you from behind. THE END " << endl;
		return false;
		}
	} else {
	cout << "Whoops, you miscalculated, and a knight got you from behind. THE END " << endl;
	return false;
	}

}
