// Made by Jacob Schwartz

#include "Suffix.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int num;

Suffix::Suffix() {

}

int Suffix::randomSuffix() {
	srand(time(NULL));
	num = rand() % 20;
	return 0;
}

string Suffix::suffixSelect() {
	string suffixes[20];

	suffixes[0] = "able";
	suffixes[1] = "ation";
	suffixes[2] = "dom";
	suffixes[3] = "ious";
	suffixes[4] = "ine";
	suffixes[5] = "ism";
	suffixes[6] = "ist";
	suffixes[7] = "less";
	suffixes[8] = "ment";
	suffixes[9] = "ness";
	suffixes[10] = "acity";
	suffixes[11] = "ade";
	suffixes[12] = "ance";
	suffixes[13] = "cule";
	suffixes[14] = "cy";
	suffixes[15] = "ee";
	suffixes[16] = "esque";
	suffixes[17] = "est";
	suffixes[18] = "ile";
	suffixes[19] = "fy";

	return suffixes[num];

}

string Suffix::defSelect() {
		string defs[20];

		defs[0] = "able to be ";
		defs[1] = "action or process ";
		defs[2] = "condition of ";
		defs[3] = "having the qualities of ";
		defs[4] = "relating to ";
		defs[5] = "state or quality ";
		defs[6] = "one who does an action ";
		defs[7] = "without ";
		defs[8] = "action or result ";
		defs[9] = "state or quality ";
		defs[10] = "quality of";
		defs[11] = "act, action, or process of ";
		defs[12] = "state or quality of";
		defs[13] = "diminutive";
		defs[14] = "state, condition or quality";
		defs[15] = "receiver or performer of";
		defs[16] = "in the style of";
		defs[17] = "most";
		defs[18] = "relating to or capable of";
		defs[19] = "to make or cause";

		return defs[num];
}

string Suffix::func() {

	int x = 1;

	string suffixes[20];

	suffixes[0] = "able";
		suffixes[1] = "ation";
		suffixes[2] = "dom";
		suffixes[3] = "ious";
		suffixes[4] = "ine";
		suffixes[5] = "ism";
		suffixes[6] = "ist";
		suffixes[7] = "less";
		suffixes[8] = "ment";
		suffixes[9] = "ness";
		suffixes[10] = "acity";
		suffixes[11] = "ade";
		suffixes[12] = "ance";
		suffixes[13] = "cule";
		suffixes[14] = "cy";
		suffixes[15] = "ee";
		suffixes[16] = "esque";
		suffixes[17] = "est";
		suffixes[18] = "ile";
		suffixes[19] = "fy";
		for(int i = 0; i < 20; i++){
				cout << x << ". " <<  suffixes[i] << endl;
				x++;
		}
		return "";
}

