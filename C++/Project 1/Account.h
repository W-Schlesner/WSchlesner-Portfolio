#ifndef HEADER_ACCOUNT
#define HEADER_ACCOUNT

#include <iostream>

using namespace std;

class Account
{
/************************************************************
 Proteced keyword is used so inherited class 
 can access the data memebers
************************************************************/
protected: 
	int accountNumber;
	int cashAmount;
	string accountType;
public:
	/*
	* Non Parameterized Constructor
	*/
	Account();

	/*
	* Parameterized Constructor
	*/
	Account(int accountNo, string accType, int initialCashDepositMoney);

	/*
	* Function that Sets account Number
	*/
	void setAccountNumber(int value);

	/*
	* Function that return Account Number
	*/
	int getAccountNumber();

	/*
	* Function that Sets account type
	*/
	void setAccountType(string accType);

	/*
	* Function that return Account type
	*/
	string getAccountType();

	/*
	* Function that Sets initial cash amount to the account number
	*/
	void setCashAmount(int value);
	
	/*
	* Function that return Available Cash
	*/
	int getCashAmount();
	
	/*
	* Function that Deposit cash to account 
	*/
	void addAmount(int cash);
	
	/*
	* Function that withdraw cash to account 
	*/
	void withdrawAmount(int cash);
};


#endif // HEADER_ACCOUNT
