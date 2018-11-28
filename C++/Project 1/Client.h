/*
* Creating Header file for Client
*/
#ifndef CLIENT_HEADER
#define CLIENT_HEADER

/*
* Importing the directories
*/
#include <iostream>
#include <string.h>
#include "Person.h"
#include "Account.h"
#include "CurrentAccount.h"
#include "SavingAccount.h"

using namespace std;

class Client : public Person
{
private:
	
	Account *account;

public:
	/*
	* Constructor
	*/
	Client();
	
	/*
	* Function that sets the customer's account number
	*/
	void setAccountNumber(int accNo);

	/*
	* Function that return the customer's account number
	*/
	int getAccountNumber();

	/*
	* Function that sets the customer's account type
	*/
	void setAccountType(string accType);

	/*
	* Function that return the customer's account type
	*/
	string getAccountType();

	/*
	*  Function that sets the customer's account number
	*/
	void setAccountInitialDeposit(int initialDeposit);

	/*
	* Function that return the customer's account number
	*/
	int getAccountInitialDeposit();

	/*
	* Function creating the customer account
	*/
	void setAccount(string accountType, int accountNumber, int initialCashDeposit);
	
	/*
	* Function return the customer account detail
	*/
	Account* getAccount();
	
	/*
	* Function to withdraw
	*/
	void withdrawAmount(int cash);

	/*
	* Function to deposit
	*/
	void depositAmount(int cash);
};

#endif //CLIENT_HEADER
