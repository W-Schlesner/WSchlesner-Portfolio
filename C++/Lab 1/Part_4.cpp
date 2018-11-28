#include <iostream>
#include <fstream>
#include <conio.h>
#include "client.h"
#define SIZE 10

using namespace std;

ClientStructure clients[SIZE];
int count = 0;

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
				cout << "3. Both Accounts." << endl;
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
				else if(accType ==2)
				{
					cout << "Enter amount for savings account: $";
					cin >> amount;
					createClient(accNum, fName, lName, 2, amount);
				}
				else if(accType == 3)
				{
					cout << "Enter amount for checking account: $";
					cin >> amount;
					createClient(accNum, fName, lName, 3, amount);
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
			case 5:
				saveDataToFile();
				break;
			case 6:
				loadDataFromFile();
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
	cout << "5. Save data to file for later use." << endl;
	cout << "6. Load data from the file." << endl;
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
	if(count < SIZE)
	{
		clients[count].accNumber = accNum;
		clients[count].fname = firstName;
		clients[count].lname = lastName;
		if(accType == 1)
		{
			clients[count].accountType = "Checking";
			clients[count].checkingBalance = balance;
		}
		else if(accType == 2)
		{
			clients[count].accountType = "Savings";
			clients[count].savingsBalance = balance;
		}
		else if(accType == 3)
		{
			clients[count].accountType = "Both";
			clients[count].checkingBalance = balance;
			cout << "Enter amount for savings account: $";
			cin >> balance;
			clients[count].savingsBalance = balance;
		}
		count++;
	}
	else
		cout << "No space left for a new account." << endl;
}

/*
* Method that will deposit the amount in th account of the customer
*/
void deposit(int accNum)
{
	int flag = 0;
	int amount;
	for(int i = 0; i < count; i++)
	{
		if(clients[i].accNumber == accNum)
		{
			if(clients[i].accountType == "Checking")
			{
				cout << "Enter the amount to deposit: $";
				cin >> amount;
				clients[i].checkingBalance += amount;
			}
			else if(clients[i].accountType == "Savings")
			{
				cout << "Enter the amount to deposit: $";
				cin >> amount;
				clients[i].savingsBalance += amount;
			}
			else if(clients[i].accountType == "Both")
			{
				cout << "Enter the amount to deposit in checking account: $";
				cin >> amount;
				clients[i].checkingBalance += amount;
				cout << "Enter the amount to deposit in savings account: $";
				cin >> amount;
				clients[i].savingsBalance += amount;
			}
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "Account not found!" << endl;
	}
}

/*
* Method that will be used to withdraw the amount from the account
*/
void withdraw(int accNum)
{
	int flag = 0;
	int amount;
	for(int i = 0; i < count; i++)
	{
		if(clients[i].accNumber == accNum)
		{
			if(clients[i].accountType == "Checking")
			{
				cout << "Enter the amount to withdraw: $";
				cin >> amount;
				if(amount < clients[i].checkingBalance)
					clients[i].checkingBalance = clients[i].checkingBalance - amount;
				else
					cout << "Enter valid amount." << endl;
			}
			else if(clients[i].accountType == "Savings")
			{
				cout << "Enter the amount to withdraw: $";
				cin >> amount;
				if(amount < clients[i].savingsBalance)
					clients[i].savingsBalance = clients[i].savingsBalance - amount;
				else
					cout << "Enter valid amount." << endl;
			}
			else if(clients[i].accountType == "Both")
			{
				cout << "Enter the amount to withdraw from checking account: $";
				cin >> amount;
				if(amount < clients[i].checkingBalance)
					clients[i].checkingBalance = clients[i].checkingBalance - amount;
				else
					cout << "Enter valid amount." << endl;
					
				cout << "Enter the amount to withdraw from savings account: $";
				cin >> amount;
				if(amount < clients[i].savingsBalance)
					clients[i].savingsBalance = clients[i].savingsBalance - amount;
				else
					cout << "Enter valid amount." << endl;
			}
			flag = 1;
			break;
		}
	}
	if(flag == 0)
	{
		cout << "Account not found!" << endl;
	}
}

/*
* Method, that will be used to print the details of the account on console
*/
void printAccountDetails(int accNum)
{
	int flag = 0;
	
	for(int i = 0; i < count; i++)
	{
		if(accNum == clients[i].accNumber)
		{
			cout << "***************************************" << endl;
			cout << "**          ACCOUNT DETAILS          **" << endl;
			cout << "***************************************" << endl;
			cout << "Name: " << clients[i].fname << " " << clients[i].lname << endl;
			cout << "Account Number: " << clients[i].accNumber << endl;
			if(clients[i].accountType == "Checking")
				cout << "Current Checking Balance: $" << clients[i].checkingBalance << endl;
			else if(clients[i].accountType == "Savings")
				cout << "Current Savings Balance: $" << clients[i].savingsBalance << endl;
			else if(clients[i].accountType == "Both")
			{
				cout << "Checking account Current Balance: $" << clients[i].checkingBalance << endl;
				cout << "Savings account Current Balance: $" << clients[i].savingsBalance << endl;
			}
				flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout <<"Account not found." << endl;
}

/*
* Method, that will save the data into a file for later use.
*/
void saveDataToFile()
{	
	ofstream outFile;
	outFile.open("clientsAccounts.txt");
	
	if(count > 0)
	{
		for(int i = 0; i < count; i++)
		{
			outFile << clients[i].fname << " " << clients[i].lname << " " << clients[i].accNumber << " " << clients[i].accountType;
			outFile<< " "<< clients[i].checkingBalance << " " << clients[i].savingsBalance << endl;
		}
		
		cout << "Data successfully exported to file." << endl;
	}
	outFile.close();
}

/*
* Method to load the exported data into the program
*/
void loadDataFromFile()
{
	ifstream inFile;
	inFile.open("clientsAccounts.txt");
	
	if(count < SIZE)
	{
		while(!inFile.eof())
		{
			inFile >> clients[count].fname >> clients[count].lname >> clients[count].accNumber >> clients[count].accountType;
			inFile >> clients[count].checkingBalance >> clients[count].savingsBalance;
			count++;
		}
		cout << "Data successfully loaded into the program." << endl;
	}
	else
		cout << "No sapce for new account." << endl;
	inFile.close();
}

