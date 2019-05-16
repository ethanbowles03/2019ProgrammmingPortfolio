// Made by Ethan Bowles

#include <iostream>
#include <ctime>
#include <string>
#include "Suffix.h"
#include "Prefix.h"
#include "RootWord.h"


using namespace std;

int main() {
	Prefix prefix;
	RootWord root;
	Suffix suf;
	string in1;
	string use1;
	string use2;
	string use3;

	root.randRoot();
	suf.randomSuffix();
	prefix.make();

	string pre1 = prefix.prefix;
	string pre2 = prefix.prefixDef;

	cout << "Hello welcome to the random word generator" << endl;
	cout << "If you would like to print a random word press r then enter" << endl;
	cout << "If you would like to make a custom word press c then enter" << endl;
	cin >> in1;
	if(in1 == "r"){
		cout <<	"Your word is: " << pre1 << "-" << root.Roots() << "-"<< suf.suffixSelect() << endl;
		cout << "Your definition is: " << pre2 << "-" << root.Definitions() << "-" << suf.defSelect() << endl;
		cout << endl;
	} else if(in1 == "c"){
		cout << prefix.func() << "Please pick a prefix or type your own \n:" << endl;
		cin >> use1;
		cout << root.func() << "Please pick a root word or type your own \n:" << endl;
		cin >> use2;
		cout << suf.func() << "Please pick a suffix or type your own \n:" << endl;
		cin >> use3;
		cout << "Your new word is: " << use1 << "-" << use2 << "-" << use3 << endl;
	}
	return 0;
}
