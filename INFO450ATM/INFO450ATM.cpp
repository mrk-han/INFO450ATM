// INFO450ATM.cpp : Write a program that determines number of bills to return with a withdrawal request.
// Written by Mark Han
// https://github.com/mrk-han

#include "stdafx.h"
#include <iostream>

// including <string> allows us to put 'const string DIVIDER' into cout stream.
#include <string>

// std namespace makes it so we don't have to write std::cout and std:endl, we can just write cout and endl.
using namespace std;

// Divider makes text easier to read in the console
const string DIVIDER = "------------------------------------------------------------------------------------------------";



int main()
{



	// withdrawalAmount is the amount user initially wants to withdraw ; remainderToWithdraw is the initial amount minus the amount withdrawn
	int remainderToWithdraw = 0;

	// DollarBillsDue = (remainderToWithdraw / dollarBillAmount)
	int fiftyDollarBillsDue, twentyDollarBillsDue, tenDollarBillsDue, fiveDollarBillsDue, oneDollarBillsdue;

	// Y or y makes do loop continue
	char answer = 'a';


	//Do/While Loop
	do {



		//Greeting Message
		cout << DIVIDER << endl << "Thank you for choosing VCU Bank.  How much money would you like to withdraw?" << endl << DIVIDER << endl << "Enter a dollar amount." << endl << DIVIDER << endl;

		//Ask user for how much they would like to withdraw
		cin >> remainderToWithdraw;



		if (remainderToWithdraw > 1 && remainderToWithdraw < 301) {



			// Placeholder message
			cout << DIVIDER << endl << "You have indicated that you would like to withdraw $" << remainderToWithdraw << "!" << endl << DIVIDER << endl;



			// 
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
				cout << "Dispensing: [" << tenDollarBillsDue << "] $10 dollar bills" << endl;
				remainderToWithdraw %= 10;
			}



			if (remainderToWithdraw >= 5) {
				fiveDollarBillsDue = (remainderToWithdraw / 5);
				cout << "Dispensing: [" << fiveDollarBillsDue << "] $5 dollar bills" << endl;
				remainderToWithdraw %= 5;
			}



			if (remainderToWithdraw >= 1) {
				oneDollarBillsdue = remainderToWithdraw;
				cout << "Dispensing: [" << oneDollarBillsdue << "] $1 dollar bills" << endl;
				remainderToWithdraw %= oneDollarBillsdue;
				cout << "$" << remainderToWithdraw << " left to withdraw.  Have a nice day!" << endl;
			}

			if (remainderToWithdraw == 0) {
				// Exit Statement, if Y then returns to beginning of do loop
				cout << DIVIDER << endl << "Would you like to make another withdrawal?" << endl;
				cout << DIVIDER << endl << "Y or y to continue" << endl << DIVIDER << endl;
				cin >> answer;
			}

			else {
				cout << "It appears there is something wrong..." << endl;
			}




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

