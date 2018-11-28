#include "Account.h"

/*
* Non Parameterized Constructor
*/
Account::Account()
{
	accountNumber = 0;
	cashAmount = 0;
}

/*
* Parameterized Constructor
*/
Account::Account(int accountNo, string accType, int initialCashDepositMoney)
{
	accountNumber = accountNo;
	accountType = accType;
	cashAmount = initialCashDepositMoney;
}


/*
* Function that sets Account Number
*/
void Account::setAccountNumber(int value)
{
	accountNumber = value;
}

/*
* Function that return Account Number
*/
int Account::getAccountNumber()
{
	return accountNumber;
}

/*
* Function that Sets account type
*/
void Account::setAccountType(string accType)
{
	accountType = accType;
}


/*
* Function that return Account type
*/
string Account::getAccountType()
{
	return accountType;
}


/*
* Function that sets cash amount
*/
void Account::setCashAmount(int value)
{
	cashAmount = value;
}

/*
* Function that return Available Cash
*/
int Account::getCashAmount()
{
	return cashAmount;
}

/*
* Function that Deposit cash to account 
*/
void Account::addAmount(int cash)
{
	cashAmount = cashAmount + cash;
	system("CLS");
	cout << "***********************************************" << endl;
	cout << "*              CASH DEPOSITED                **" << endl;
	cout << "***********************************************" << endl;
	cout << "            Cash Dposited: " << cash << endl;
	cout << "            Availabe Cash amount: " << cashAmount << endl;
}

/*
* Function that withdraw cash to account 
*/
void Account::withdrawAmount(int cash)
{
	if(cash < cashAmount)
	{
		if(cash > 5000 && cash < 50000)
		{
			cashAmount = cashAmount - cash;
			cashAmount = cashAmount - (cash * (0.2 / 100));
		}
		else if(cash > 50000)
		{
			cashAmount = cashAmount - cash;
			cashAmount = cashAmount - (cash * (2.5 / 100));
		}
		else
			cashAmount = cashAmount - cash;
			
		system("CLS");
		cout << "***********************************************" << endl;
		cout << "*              CASH WITHDRAWN                **" << endl;
		cout << "***********************************************" << endl;
		cout << "            Cash Withdrawn: " << cash << endl;
		cout << "            Remaining cash amount: " << cashAmount << endl;
	}
	
	else
	{
		cout << "Enter Valid Amount to Withdraw..." << endl;
	}
}
