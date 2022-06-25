#include <iostream>

#include "savings.h"

using namespace std;

int main()

{

	while (1)

	{

		// Heading

		cout << "*************************************" << endl;

		cout << "*************Data Input**************" << endl;

		cout << "Initial Investment Amount: " << endl;

		cout << "Monthly Deposit: " << endl;

		cout << "Annual Interest: " << endl;

		cout << "Number of years: " << endl;

		//system pause

		system("read -p 'Press Enter to continue . . .' var");

		cout << endl;

		//Inputs/interface from user

		cout << "*************************************" << endl;

		cout << "*************Data Input**************" << endl;

		cout << "Initial Investment Amount: $";

		double investment, monthlydeposit, interestrate;

		int years;

		cin >> investment;

		cout << "Monthly Deposit: $";

		cin >> monthlydeposit;

		cout << "Annual Interest: %";

		cin >> interestrate;

		cout << "Number of years: ";

		cin >> years;


		//system paused

		system("read -p 'Press Enter to continue . . .' var");


		//savings object generated using the given inputs

		savings mysavings = savings(investment, monthlydeposit, interestrate, years);

		cout << endl;

		//report methods

		mysavings.reportNoMonthlyDeposits();

		cout << endl;


		//call to monthly deposit report, if monthly deposit is at least $1

		if (monthlydeposit > 0) {

			mysavings.reportWithMonthlyDeposits();

		}


		//User choice for another calculation

		cout << endl << "Do you want to try another? (y/n): ";

		string choice;

		cin >> choice;

		// break the loop if no other calculation
 
		if (choice != "y") {

			break;

		}

		cout << endl;

	}

	return 0;

}