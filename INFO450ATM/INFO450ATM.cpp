// INFO450ATM.cpp : Write a program that determines number of bills to return with a withdrawal request.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const string DIVIDER = "------------------------------------------------------------------------------------------------";

int main()
{

	// withdrawalAmount is the amount user initially wants to withdraw ; remainderToWithdraw is the initial amount minus the amount withdrawn
	int withdrawalAmount, remainderToWithdraw =0;

	int fiftyDollarBillsDue, twentyDollarBillsDue, tenDollarBillsDue, fiveDollarBillsDue, oneDollarBillsdue;

	// Y or y makes do loop continue
	char answer;
	


	do {

		//Greeting Message
		cout << DIVIDER << endl << "Thank you for choosing VCU Bank.  How much money would you like to withdraw?" << endl << DIVIDER << endl << "Enter a dollar amount." << endl << DIVIDER << endl;
		cin >> remainderToWithdraw;

		if (remainderToWithdraw > 1 && remainderToWithdraw < 301) {

			// Placeholder message
			cout << DIVIDER << endl << "User has entered a valid amount! Here is your money! $$$$" << endl << DIVIDER << endl;
			// Enter in business logic here!

			// If user is withdrawing amount over $50 then divide by 50 and set variable for amount of 50 dollar bills needed to answer
			if (remainderToWithdraw >= 50) {
				fiftyDollarBillsDue = (remainderToWithdraw / 50);
				cout << "Dispensing: [" << fiftyDollarBillsDue << "] $50 dollar bills" << endl;
				remainderToWithdraw %= 50;
			}

			 if (remainderToWithdraw >= 20) {
				twentyDollarBillsDue = (remainderToWithdraw / 20);
				cout << "Dispensing: [" << twentyDollarBillsDue << "] $20 dollar bills" << endl;
				remainderToWithdraw %= 20;
			 }

			 if (remainderToWithdraw >= 10) {
				tenDollarBillsDue = (remainderToWithdraw / 10);
				cout << "Dispensing: [" << tenDollarBillsDue << "] $20 dollar bills" << endl;
				remainderToWithdraw %= 10;
			 }

			 if (remainderToWithdraw >= 5) {
				fiveDollarBillsDue = (remainderToWithdraw / 10);
				cout << "Dispensing: [" << fiveDollarBillsDue << "] $20 dollar bills" << endl;
				remainderToWithdraw %= 5;
			 }

			 if (remainderToWithdraw >= 1) {
				oneDollarBillsdue = (remainderToWithdraw / 10);
				cout << "Dispensing: [" << oneDollarBillsdue << "] $20 dollar bills" << endl;
				remainderToWithdraw %= 1;
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

