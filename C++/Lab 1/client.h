#ifndef CLIENT_HEADER
#define CLIENT_HEADER

#include <iostream>
#include <string.h>

using namespace std;

struct ClientStructure
{
	int accNumber;
	
	string fname;
	string lname;
   
    string accountType;
	double checkingBalance;
	double savingsBalance;       
};


	ClientStructure client;

/*
* Method, that will display the menu tothe clerk
*/
int programMenu();

/*
* Method to create a new client or opening a new account of client
*/
void createClient(int accNum, string firstName, string lastName, int accType, double balance);

/*
* Method that will deposit the amount in th account of the customer
*/
void deposit(int accNum);

/*
* Method that will be used to withdraw the amount from the account
*/
void withdraw(int accNum);

/*
* Method, that will be used to print the details of the account on console
*/
void printAccountDetails(int accNum);

/*
* Method, that will save the data into a file for later use.
*/
void saveDataToFile();

/*
* Method to load the exported data into the program
*/
void loadDataFromFile();

#endif //CLIENT_HEADER

