// Made by Parker Rowland

#include "RootWord.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

int randNum;

RootWord::RootWord() {

}

int RootWord::randRoot() {
	srand(time(NULL));
	randNum = rand() % 20;
	return 0;
}

string RootWord::Roots() {
	string root[20];

	root[0] = "agere";
	root[1] = "amphi";
	root[2] = "bio";
	root[3] = "bible";
	root[4] = "cide";
	root[5] = "auto";
	root[6] = "circum";
	root[7] = "demos";
	root[8] = "dominus";
	root[9] = "ego";
	root[10] = "ex";
	root[11] = "frater";
	root[12] = "geo";
	root[13] = "hetero";
	root[14] = "homo";
	root[15] = "inter";
	root[16] = "micro";
	root[17] = "post";
	root[18] = "solus";
	root[19] = "utilis";

	return root[randNum];
}

string RootWord::Definitions() {
	string def[20];

	def[0] = "act";
	def[1] = "round";
	def[2] = "life";
	def[3] = "book";
	def[4] = "kill";
	def[5] = "self";
	def[6] = "around";
	def[7] = "people";
	def[8] = "lord";
	def[9] = "self";
	def[10] = "out";
	def[11] = "brother";
	def[12] = "earth";
	def[13] = "mixed";
	def[14] = "same";
	def[15] = "between";
	def[16] = "small";
	def[17] = "after";
	def[18] = "alone";
	def[19] = "useful";

	return def[randNum];
}

string RootWord::func() {

	int x = 1;

	string root[20];

		root[0] = "agere";
		root[1] = "amphi";
		root[2] = "bio";
		root[3] = "bible";
		root[4] = "cide";
		root[5] = "auto";
		root[6] = "circum";
		root[7] = "demos";
		root[8] = "dominus";
		root[9] = "ego";
		root[10] = "ex";
		root[11] = "frater";
		root[12] = "geo";
		root[13] = "hetero";
		root[14] = "homo";
		root[15] = "inter";
		root[16] = "micro";
		root[17] = "post";
		root[18] = "solus";
		root[19] = "utilis";
		for(int i = 0; i < 20; i++){
				cout << x << ". " <<  root[i] << endl;
				x++;
		}
		return "";
}
