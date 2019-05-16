// Author: Ethan Bowles

#include "Castle1.h"
#include <iostream>
#include <string>

using namespace std;

Castle1::Castle1() {

}

 bool Castle1::my_new_function() {
	 string ans1;
		cout << "When Shrek and Donkey make it to the castle they come across a bridge" << endl;
		cout << "They cross the bridge and make it to the front gate of the castle" << endl;
		cout << "However the gate wont open, their is a gap at the top of the gate they could slide through" << endl;
		cout << "If Shrek and Donkey are standing 5 feet away gate and they think the gap is 13 feet away from them \n How high do Shrek and Donkey need to climb to reach the gap?" << endl;
		cin >> ans1;
		if(ans1 == "12" || "12 feet" || "12 FEET" || "12 Feet" || "12 FEet" || "12 FEEt" || "12 FeEt" || "12 FeeT" || "12Feet" || "12FEET" || "12feet"){
			cout << "After getting in the castle and rescuing Fiona they flee the castle from the dragon" << endl;
			return true;
		} else {
			cout << "Shrek poorly judges the height of the gate and falls to his death" << endl;
			return false;
		}
 }

