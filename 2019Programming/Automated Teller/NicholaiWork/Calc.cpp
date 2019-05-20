//============================================================================
// Name        : Calc.cpp
// Author      : Nicholai Gontcharov
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main()
{
    int num1, num2, add, sub, times, divide, answer;

    cout << "Enter 1st Number: ";
    cin >> num1;
    cout << "Enter 2nd Number: ";
    cin >> num2;

    cout << "Enter Your Operation: (1 = +, 2= -, 3= *, 4= / )" << endl;
    cin >> answer;

    add = num1 + num2;
    sub = num1 - num2;
    times = num1 * num2;
    divide = num1 / num2;


    if (answer == 1)
    {
       cout << "Your total is: " << add << endl;
    }

    else if (answer == 2)
    {
       cout << "Your total is: " << sub << endl;
    }

    else if (answer == 3)
    {
       cout << "Your total is: " << times << endl;
    }

    else if (answer == 4)
    {
       cout << "Your total is: " << divide << endl;
    }

    else
    {
       cout << "Your choice is not an option try again." << endl << endl;
    }

    return 0;
}
