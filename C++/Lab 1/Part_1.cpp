#include <iostream>
#include <conio.h>
#include "client.h"

using namespace std;

int main(int argc, char** argv)
{
	int choice;
	
	do
	{
		string fName, lName;
		double amount;
		
		int accType, accNum, transType;
		choice = programMenu();
	
		switch(choice)
		{
			case 1:
				cout << endl << endl;
				cout << "*************************" << endl;
				cout << "*  SELECT ACCOUNT TYPE  *" << endl;
				cout << "*************************" << endl;
				cout << "1. Checking Account." << endl;
				cout << "2. Savings Account." << endl;
				cout << "-------------------------" << endl;
				cout << "Enter your choice: ";
				cin >> accType;
				cout << endl << endl;
				cout << "*************************" << endl;
				cout << "*    ACCOUNT DETAILS    *" << endl;
				cout << "*************************" << endl;
				cout << "Enter account Number: ";
				cin >> accNum;
				cout << "Enter the first name: ";
				cin >> fName;
				cout << "Enter the last name: ";
				cin >> lName;
				if(accType == 1)
				{
					cout << "Enter amount for checking account: $";
					cin >> amount;
					createClient(accNum, fName, lName, 1, amount);
				}
				else
				{
					cout << "Enter amount for savigs account: $";
					cin >> amount;
					createClient(accNum, fName, lName, 2, amount);
				}
				break;
			case 2:
				cout << endl << endl;
				cout << "*************************" << endl;
				cout << "*  PERFORM TRANSACTION  *" << endl;
				cout << "*************************" << endl;
				cout << "1. To Deposit." << endl;
				cout << "2. To Withdraw." << endl;
				cout << "Enter your choice: ";
				cin >> transType;
				if(transType == 1)
				{
					cout << "Enter your account Number: ";
					cin >> accNum;
					deposit(accNum);
				}
				else if(transType == 2)
				{
					cout << "Enter your account Number: ";
					cin >> accNum;
					withdraw(accNum);
				}
				break;
			case 3:
				cout << "Enter your account Number: ";
				cin >> accNum;
				printAccountDetails(accNum);
				break;
			case 4:
				break;
			default:
				cout << "Invalid option selected...!" << endl;
				break;
		}
		cout << "\nPress any key to continue...";
		getch();
		system("CLS");
	}while(choice != 4);
	return 0;
}


/*
* Method, that will display the menu tothe clerk
*/
int programMenu()
{
	int choice;
	cout << "***********************************" << endl;
	cout << "*            MAIN MENU            *" << endl;
	cout << "***********************************" << endl;
	cout << "1. Add a client's account." << endl;
	cout << "2. Apply transactions on the client account." << endl;
	cout << "3. View the balance." << endl;
	cout << "4. Exit from the program." << endl;
	cout << "-----------------------------------" << endl;
	cout << "Enter your choice from main menu: ";
	cin >> choice;
	
	return choice;
}


/*
* Method to create a new client or opening a new account of client
*/
void createClient(int accNum, string firstName, string lastName, int accType, double balance)
{
	client.accNumber = accNum;
	client.fname = firstName;
	client.lname = lastName;
	
	if(accType == 1)
	{
		client.accountType = "Checking";
		client.checkingBalance = balance;
	}
	else if(accType == 2)
	{
		client.accountType = "Savings";
		client.savingsBalance = balance;
	}

}

/*
* Method that will deposit the amount in th account of the customer
*/
void deposit(int accNum)
{
	int amount;
	if(client.accNumber == accNum)
	{
		cout << "Enter the amount to deposit: $";
		cin >> amount;
		if(client.accountType == "Checking")
		{
			client.checkingBalance += amount;
		}
		else if(client.accountType == "Savings")
		{
			client.savingsBalance += amount;
		}
	}
	else
	{
		cout << "Account not found!" << endl;
	}
}

/*
* Method that will be used to withdraw the amount from the account
*/
void withdraw(int accNum)
{
	int amount;
	
	if(client.accNumber == accNum)
	{
		cout << "Enter the amount to withdraw: $";
		cin >> amount;
		if(client.accountType == "Checking")
		{
			if(amount < client.checkingBalance)
				client.checkingBalance = client.checkingBalance - amount;
			else
				cout << "Enter valid amount." << endl;
		}
		else if(client.accountType == "Savings")
		{
			if(amount < client.savingsBalance)
				client.savingsBalance = client.savingsBalance - amount;
			else
				cout << "Enter valid amount." << endl;
		}
	}
	else
	{
		cout << "Account not found!" << endl;
	}
}

/*
* Method, that will be used to print the details of the account on console
*/
void printAccountDetails(int accNum)
{
	if(accNum == client.accNumber)
	{
		cout << "***************************************" << endl;
		cout << "**          ACCOUNT DETAILS          **" << endl;
		cout << "***************************************" << endl;
		cout << "Client Name: " << client.fname << " " << client.lname << endl;
		cout << "Account Number: " << client.accNumber << endl;
		if(client.accountType == "Checking")
			cout << "Current Checking Balance: $" << client.checkingBalance << endl;
		else if(client.accountType == "Savings")
			cout << "Current Savings Balance: $" << client.savingsBalance << endl;
	}
	else
		cout <<"Account not found." << endl;
}


