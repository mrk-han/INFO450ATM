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
		cout << DIVIDER << endl << "Thank you for choosing VCU Bank.  How much money would you like to withdraw? Enter a dollar amount." << endl;
		cin >> value;


		
		cout << DIVIDER << endl << "Would you like to make another withdrawel?" << endl << DIVIDER << endl << "Y or y to continue" << endl << DIVIDER << endl;
		cin >> answer;

	} while ((answer == 'Y') || (answer == 'y'));

    return 0;
}

