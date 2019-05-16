// Made by Seth Mccullough

#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>
#include "Prefix.h"

string prefixDef;
string prefix;

Prefix::Prefix() {

}

string Prefix::make() {

	int x;

	srand((int) time(0));

	string pre[] = { "anti", "dis", "mid", "semi", "sub", "trans", "mis",
			"inter", "re", "super" }; // Starts at 0
	string predef[] = { "against", "not", "middle", "under", "across",
			"wrongly", "between", "again", "above" };

	x = rand() % 10;

	prefix = pre[x];
	prefixDef = predef[x];

	return prefix;

}

string Prefix::func() {

	int x = 1;

	string pre[] = { "anti", "dis", "mid", "semi", "sub", "trans", "mis",
				"inter", "re", "super" }; // Starts at 0
		for(int i = 0; i < 10; i++){
				cout << x << ". " <<  pre[i] << endl;
				x++;
		}
		return "";
}
