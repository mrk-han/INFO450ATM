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

	// Y or y makes do loop continue, declaring this variable as 'a' to not get error that it isn't declared/intialized. 'a' is arbitrary.
	char answer = 'a';


	//Do/While Loop
	do {



		//Greeting Message
		cout << DIVIDER << endl << "Thank you for choosing VCU Bank.  How much money would you like to withdraw?" << endl << DIVIDER << endl << "Enter a dollar amount." << endl << DIVIDER << endl;

		//Ask user for how much they would like to withdraw
		cin >> remainderToWithdraw;


		//If/Else Statement, makes sure user enters in appropriate amount. (Validation)
		if (remainderToWithdraw > 0 && remainderToWithdraw < 301) {



			// Confirms amount to be withdrawn
			cout << DIVIDER << endl << "You have indicated that you would like to withdraw $" << remainderToWithdraw << "!" << endl << DIVIDER << endl;



			// If 50 or more dollars are remaining to be withdrawn, run this code!
			if (remainderToWithdraw >= 50) {
				//Divide remainder to be withdrawn by 50 to get the total amount of 50 dollar bills to be dispensed to user
				fiftyDollarBillsDue = (remainderToWithdraw / 50);
				cout << "Dispensing: [" << fiftyDollarBillsDue << "] $50 dollar bills." << endl;
				//Figure out remaining amount to be withdrawn to user after taking out 50 dollar bills
				remainderToWithdraw %= 50;
			}


			// If 20 or more dollars are remaining to be withdrawn, run this code!
			if (remainderToWithdraw >= 20) {
				//Divide remainder to be withdrawn by 20 to get the total amount of 20 dollar bills to be dispensed to user
				twentyDollarBillsDue = (remainderToWithdraw / 20);
				cout << "Dispensing: [" << twentyDollarBillsDue << "] $20 dollar bills." << endl;
				//Figure out remaining amount to be withdrawn to user after taking out 20 dollar bills
				remainderToWithdraw %= 20;
			}


			// If 10 or more dollars are remaining to be withdrawn, run this code!
			if (remainderToWithdraw >= 10) {
				//Divide remainder to be withdrawn by 10 to get the total amount of 10 dollar bills to be dispensed to user
				tenDollarBillsDue = (remainderToWithdraw / 10);
				cout << "Dispensing: [" << tenDollarBillsDue << "] $10 dollar bills." << endl;
				//Figure out remaining amount to be withdrawn to user after taking out 10 dollar bills
				remainderToWithdraw %= 10;
			}


			// If 5 or more dollars are remaining to be withdrawn, run this code!
			if (remainderToWithdraw >= 5) {
				//Divide remainder to be withdrawn by 5 to get the total amount of 5 dollar bills to be dispensed to user
				fiveDollarBillsDue = (remainderToWithdraw / 5);
				cout << "Dispensing: [" << fiveDollarBillsDue << "] $5 dollar bills." << endl;
				//Figure out remaining amount to be withdrawn to user after taking out 5 dollar bills
				remainderToWithdraw %= 5;
			}


			// If 1 or more dollars are remaining to be withdrawn, run this code!
			if (remainderToWithdraw >= 1) {
				// No division needed here, remainder of money to be withdrawn is definitely the amount of oneDollarBills that need to be dispensed because we aren't dealing with floats in this solution.
				oneDollarBillsdue = remainderToWithdraw;
				cout << "Dispensing: [" << oneDollarBillsdue << "] $1 dollar bills." << endl;
				// Sets remainderToWithdraw to ZERO
				remainderToWithdraw %= oneDollarBillsdue;
			}


			// This is a check to make sure everything runs properly and the user has been given all of the money that they wanted to withdraw
			if (remainderToWithdraw == 0) {
				// Exit Statement, if Y then returns to beginning of do loop
				cout << DIVIDER << endl << "$" << remainderToWithdraw << " left to withdraw.  Have a nice day!" << endl;
				cout << DIVIDER << endl << "Would you like to make another withdrawal?" << endl;
				cout << DIVIDER << endl << "Enter Y or y to continue..." << endl << DIVIDER << endl;
				cin >> answer;
			}



			else {
				cout << "It appears there is something wrong..." << endl;
			}




		}



		else {



			//If user enters an invalid amount, give them instructions and ask if they would like to try again
			cout << DIVIDER << endl << "Please enter a dollar amount greater than $0 and less than $301." << endl << DIVIDER << endl;
			cout << "Would you like to try again?" << endl << DIVIDER << endl;
			cout << "Enter Y or y to try again..." << endl << DIVIDER << endl;
			cin >> answer;



		}



	} while ((answer == 'Y') || (answer == 'y'));



	return 0;

	// TODO: Fix the program not continuing if user enters in a float or character.

}

