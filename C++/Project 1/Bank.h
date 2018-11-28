/*
* Creating Header file for Bank
*/

#ifndef BANK_HEADER
#define BANK_HEADER

/*
* Importing the directories
*/
#include <iostream>
#include <conio.h>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Handler.h"
#include "LogHandler.h"

using namespace std;

class Bank
{
	/*
	* Data member sto be used in the project
	*/
private:
	Client customers[100];
	BankEmployee employee;
	Handler handler;
	LogFileClass logHandler;
	int count;

public:
	Bank();
	
	/*
	* Method for verification of the account of employee
	*/
	int verifyEmployee(string, string);

	/*
	* Method for creating the account of customer
	*/
	void createAccount(string, string, string, int, int);

	/*
	* Method for deleting the account of customer
	*/
	void deleteAccount(int);

	/*
	* Method for verification of the account of customer
	*/
	int verifyCustomer(int);

	/*
	* Method for withdrawing cash from the account of customer
	*/
	void withdrawCash(int, int);

	/*
	* Method for depositing cash to the account of customer
	*/
	void depositCash(int, int);

	/*
	* Method for balance inquiry of the account of customer
	*/
	void balanceInquiry(int);

	/*
	* Method for displaying the details of the account of customer
	*/
	void displayAccountData(int);

	/*
	* Method for reading data of customers from exisiting file
	*/
	void readDataFromFile();

	/*
	* Method for reading data of customers from log file
	*/
	void readLogFile();


};

#endif //BANK_HEADER
