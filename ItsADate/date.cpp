
#include<iostream>
#include<ctime>
#include<string>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main(){
	while(true){
		time_t now = time(NULL);
			string dt = ctime(&now);
			tm* timePtr = localtime(&now);

			string useD;
			string useM;
			string useY;
			int rD = (timePtr->tm_mday) * 86400;
			int rM = ((timePtr->tm_mon)+1) * 2635200;
			int rY = ((timePtr->tm_year)+1900) * 31557600;
			int rT = (timePtr->tm_sec);

			cout << "Please enter your year of birth (xxxx): " << endl;
			getline(cin, useY);
			int y = atoi(useY.c_str());
			int y2 = y * 31557600;
			cout << "Please enter your month of birth (xx): " << endl;
			getline(cin, useM);
			int m = atoi(useM.c_str());
			int m2 = m * 2635200;
			cout << "Please enter your day of birth (xx): " << endl;
			getline(cin, useD);
			int d = atoi(useD.c_str());
			int d2 = d * 86400;
			int comp = y2 + m2 + d2;
			int comp2 = rD + rM + rY + rT;
			float res = comp2 - comp;
			cout << "You have lived for " << res << " seconds" << endl;
			cout << "You have lived for " << res / 60 << " minutes" << endl;
			cout << "You have lived for " << res / 3600 << " hours" << endl;
			cout << "You have lived for " << res / 86400 << " days" << endl;
			cout << "You have lived for " << res / 604800 << " weeks" << endl;
			cout << "You have lived for " << res / 2635200 << " months" << endl;
			cout << "You have lived for " << res / 31557600 << " years" << endl;
			cout << "You have lived for " << res / 315576000 << " decades" << endl;
			cout << "You have lived for " << res / 3155760000 << " centuries" << endl;
			cout << "You have lived for " << res / 31557600000 << " millenniums" << endl;
	}
	return 0;
}
