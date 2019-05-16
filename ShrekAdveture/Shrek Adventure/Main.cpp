//Author: Parker Rowland

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "SherwoodForest.h"
#include "Castle1.h"
#include "BattleArena.h"
#include "Cornfield.h"
#include "swamp.h"
#include "WedCeremony.h"
using namespace std;

bool play = true;

int main() {
	while (play) {
		char restart;
		swamp swamp;
		BattleArena battle;
		Cornfield corn;
		Castle1 castle;
		SherwoodForest forest;
		WedCeremony wedding;
		cout << "Welcome to Shrek's Adventure. Throughout this Journey you will be tasked \n"
						"with many mathematical challenges. You must complete them before you progress. \n"
						"We start in his swamp..." << endl;
		cout << " " << endl;
		if (swamp.run() == true) {
			cout << " " << endl;
			if (battle.fight() == true) {
				cout << " " << endl;
				if (corn.run() == true) {
					cout << " " << endl;
					if (castle.my_new_function() == true) {
						cout << " " << endl;
						if (forest.run() == true) {
							cout << " " << endl;
							if (wedding.run() == true) {
								cout << " " << endl;
								cout << "You won! Congrats mate!" << endl;
								break;
							}
						}
					}
				}
			}
		}
		cout << "Restart? Y or N: ";
		cin >> restart;
		if (restart == 'N' || restart == 'n') {
			cout << " " << endl;
			break;
		}
	}
}
