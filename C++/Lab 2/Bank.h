/*
* Creating Header file for Bank
*/

#ifndef BANK_HEADER
#define BANK_HEADER

#include <iostream>
#include <conio.h>
#include <string>
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include "Handler.h"

using namespace std;

class Bank
{
	
private:
	Client customers[100];
	BankEmployee employee;
	Handler handler;
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
	void createAccount(int, string, string, double);

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
	void withdrawCash(double, int);

	/*
	* Method for depositing cash to the account of customer
	*/
	void depositCash(double, int);

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
};

#endif 
