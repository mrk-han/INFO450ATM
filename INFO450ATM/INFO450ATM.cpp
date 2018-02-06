// INFO450ATM.cpp : Write a program that determines number of bills to return with a withdrawal request.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const string DIVIDER = "------------------------------------------------------------------------------------------------";

int main()
{
	int value;
	char answer; 


	do {

		cout << DIVIDER << endl << "Thank you for choosing VCU Bank.  How much money would you like to withdraw?" << endl << DIVIDER << endl << "Enter a dollar amount." << endl << DIVIDER << endl;
		cin >> value;

		if (value > 1 && value < 301) {

			cout << DIVIDER << endl << "User has entered a valid amount! Here is your money! $$$$" << endl;

			cout << DIVIDER << endl << "Would you like to make another withdrawel?" << endl;
			cout << DIVIDER << endl << "Y or y to continue" << endl << DIVIDER << endl;
			cin >> answer;
			
		}

		else {

			cout << DIVIDER << endl << "Please enter a value greater than 0 and less than 301" << endl << DIVIDER << endl;
			cout << "Would you like to try again?" << endl << DIVIDER << endl;
			cout << "Y or y to continue" << endl << DIVIDER << endl;
			cin >> answer;

		} 


	} while ((answer == 'Y') || (answer == 'y'));

    return 0;
}

