#include <iostream>
#include <string>
#include "Bank.h"

using namespace std;

int main(int argc, char** argv)
{
	int choice;

	Bank bankSystem;
	do
	{
		cout << "***********************************************" << endl;
		cout << "*           BANK MANAGEMENT SYSTEM           **" << endl;
		cout << "***********************************************" << endl;
		cout << "1. Login as Bank Employee" << endl;
		cout << "2. Login as Bank Customer" << endl;
		cout << "3. Exit from the System " << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "Enter your Category: ";
		cin >> choice;
		if (choice == 1)
		{
			string username, password;
			do
			{
				system("CLS");
				cout << "***********************************************" << endl;
				cout << "*           EMPLOYEE VERIFICATION            **" << endl;
				cout << "***********************************************" << endl;
				cout << "Enter your username: ";
				cin >> username;
				cout << "Enter your password: ";
				cin >> password;
				cout << "\n-----------------------------------------------" << endl;
			} while (bankSystem.verifyEmployee(username, password) != 1);
			cout << "Successfully logged in...";
			getch();

			do
			{
				system("CLS");
				cout << "***********************************************" << endl;
				cout << "*             BANK EMPLOYEE MENU             **" << endl;
				cout << "***********************************************" << endl;
				cout << "1. Add new Client" << endl;
				cout << "2. Delete Account" << endl;
				cout << "3. Print Acount Holder Information" << endl;
				cout << "4. Return to Main Menu" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Enter your Choice: ";
				cin >> choice;
				switch (choice)
				{
					case 1:
					{
						int accountID;
						string firstName, lastName;
						double accountBalance;

						do
						{
							cout << "Enter Client's Account Number: ";
							cin >> accountID;
						}while(bankSystem.verifyCustomer(accountID) != -1);
						cout << "Enter Customer first name: ";
						cin >> firstName;
						cout << "Enter Customer last name: ";
						cin >> lastName;
						cout << "Enter Initial Account Balance: ";
						cin >> accountBalance;
						bankSystem.createAccount(accountID, firstName, lastName, accountBalance);
						cout << "-----------------------------------------------" << endl;
						cout << "Account Created Successfully..." << endl;
						getch();
						break;
					}
					case 2:
					{
						int accNo;
						cout << "Enter customer's Account number: ";
						cin >> accNo;
						int index = bankSystem.verifyCustomer(accNo);
						bankSystem.deleteAccount(index);
						cout << "-----------------------------------------------" << endl;
						cout << "Account Deleted Successfully..." << endl;
						getch();
						break;
					}
					case 3:
					{
						int accNo;
						cout << "Enter customer's Account number: ";
						cin >> accNo;
						int index = bankSystem.verifyCustomer(accNo);
						system("CLS");
						if (index != -1)
							bankSystem.displayAccountData(index);
						else
						{
							cout << "-----------------------------------------------" << endl;
							cout << "Customer Account not found..." << endl;
						}
						getch();
						break;
					}
					case 4:
						break;
					default:
						system("CLS");
				}
			} while (choice != 4);
		}

		else if (choice == 2)
		{
			int accNo;
			int index;
			do
			{
				system("CLS");
				cout << "***********************************************" << endl;
				cout << "*           CUSTOMER VERIFICATION            **" << endl;
				cout << "***********************************************" << endl;
				cout << "Enter your Account Number: ";
				cin >> accNo;
				cout << "-----------------------------------------------" << endl;
				index = bankSystem.verifyCustomer(accNo);
			} while (index == -1);
			cout << "Successfully logged in...";
			getch();

			do
			{
				system("CLS");
				cout << "***********************************************" << endl;
				cout << "*             BANK CUSTOMER MENU             **" << endl;
				cout << "***********************************************" << endl;
				cout << "1. Withdraw Money" << endl;
				cout << "2. Deposit Money" << endl;
				cout << "3. Balance Inquiry" << endl;
				cout << "4. Return to Main Menu" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Enter your Choice: ";
				cin >> choice;
				switch (choice)
				{
					case 1:
					{
						int cash;
						cout << "Enter to cash amount to withdraw: ";
						cin >> cash;
						bankSystem.withdrawCash(cash, index);
						break;
					}
					case 2:
					{
						int cash;
						cout << "Enter to cash amount to deposit: ";
						cin >> cash;
						bankSystem.depositCash(cash, index);
						break;
					}
					case 3:
					{
						bankSystem.displayAccountData(index);
						getch();
						break;
					}
					case 4:
						break;
					default:
						system("CLS");
					}
			} while (choice != 4);
		}
		else if (choice == 3)
		{
			exit(0);
		}
		else
		{
			cout << "Please Select Valid Option..." << endl;
		}

		system("CLS");
	} while (choice != 0);

	return 0;
}
