// INFO450ATM.cpp : Write a program that determines number of bills to return with a withdrawal request.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const string DIVIDER = "------------------------------------------------------------------------------------------------";

int main()
{
	int withdrawalAmount, fiftyDollarBillsDue, twentyDollarBillsDue, tenDollarBillsDue, fiveDollarBillsDue, oneDollarBillsdue;
	float remainder;
	char answer;
	


	do {

		cout << DIVIDER << endl << "Thank you for choosing VCU Bank.  How much money would you like to withdraw?" << endl << DIVIDER << endl << "Enter a dollar amount." << endl << DIVIDER << endl;
		cin >> withdrawalAmount;

		if (withdrawalAmount > 1 && withdrawalAmount < 301) {

			// Placeholder message
			cout << DIVIDER << endl << "User has entered a valid amount! Here is your money! $$$$" << endl << DIVIDER << endl;
			// Enter in business logic here!

			// If user is withdrawing amount over $50 then divide by 50 and set variable for amount of 50 dollar bills needed to answer
			if (withdrawalAmount > 50) {
				fiftyDollarBillsDue = (withdrawalAmount / 50);
				cout << "Dispensing user " << fiftyDollarBillsDue << " $50 dollar bills" << endl;
			} 



			// Exit Statement, if Y then returns to beginning of do loop
			cout << DIVIDER << endl << "Would you like to make another withdrawal?" << endl;
			cout << DIVIDER << endl << "Y or y to continue" << endl << DIVIDER << endl;
			cin >> answer;
			
		}

		else {

			//If user enters an invalid amount, give them instructions and ask if they would like to try again
			cout << DIVIDER << endl << "Please enter a value greater than 0 and less than 301" << endl << DIVIDER << endl;
			cout << "Would you like to try again?" << endl << DIVIDER << endl;
			cout << "Y or y to try again" << endl << DIVIDER << endl;
			cin >> answer;

		} 


	} while ((answer == 'Y') || (answer == 'y'));

    return 0;
}

