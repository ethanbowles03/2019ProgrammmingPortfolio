//============================================================================
// Name        : Calc.cpp
// Author      : Nicholai Gontcharov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int balance, rate, years, final, interest;

    cout << "Enter Account Balance $";
    cin >> balance;
    cout << "Enter the annual interest rate ";
    cin >> rate;

    cout << "Enter number of years of Compounded interest " << endl;
    cin >> years;

    final = balance * (1+(rate/100)) ^(12 * years);



       cout << "Your Balance after " << years << " years at a " << rate <<  "% Interest rate is $" << final << endl;
    return 0;
}

