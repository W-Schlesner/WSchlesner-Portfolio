#include "Client.h"

using namespace std;

/*
*  Constructor
*/
Client::Client()
{
	account = NULL;
}

/*
*  Function that sets the customer's account number
*/
void Client::setAccountNumber(int accNo)
{
	getAccount()->setAccountNumber(accNo);
}

/*
*  Function that return the customer's account number
*/
int Client::getAccountNumber()
{
	return getAccount()->getAccountNumber();
}

/*
*  Function that return the customer's account type
*/
void Client::setAccountType(string accType)
{
	if (accType == "Current")
	{
		account = new CurrentAccount();
		account->setAccountType("Current");
	}
	else if (accType == "Saving")
	{
		account = new SavingAccount();
		account->setAccountType("Saving");
	}
}

string Client::getAccountType()
{
	return account->getAccountType();
}

/*
*  Function that sets the customer's account number
*/
void Client::setAccountInitialDeposit(int initialDeposit)
{
	getAccount()->setCashAmount(initialDeposit);
}

/*
*  Function that return the customer's account number
*/
int Client::getAccountInitialDeposit()
{
	return getAccount()->getCashAmount();
}

/*
*  Function creating the customer account
*/
void Client::setAccount(string accountType, int accountNumber, int initialCashDeposit)
{
	if(accountType == "Current")
		account = new CurrentAccount(accountNumber, initialCashDeposit, 0.0, accountType);
	else if(accountType == "Saving")
		account = new SavingAccount(accountNumber, initialCashDeposit, 10.0, accountType);
}
/*
 *  Function return the customer account detail
*/
Account* Client::getAccount()
{
	return account;
}

/*
 * Function to withdraw
*/
void Client::withdrawAmount(int cash)
{
	account->withdrawAmount(cash);
}

/*
* Function to deposit
*/
void Client::depositAmount(int cash)
{
	account->addAmount(cash);
}
