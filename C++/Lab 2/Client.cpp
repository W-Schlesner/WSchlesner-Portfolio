#include "Client.h"

using namespace std;


Client::Client()
{
	accountBalance = 0;
	firstName = "";
	lastName = "";
	accountBalance = 0.0;
}


Client::Client(int id, string fname, string lname, double balance)
{
	accountID = id;
	firstName = fname;
	lastName = lname;
	accountBalance = balance;
}

/*
* mutator to set account id of customer
*/
void Client::setAccountID(int value)
{
	accountID = value;
}

/*
* accessor to get account id of customer
*/
int Client::getAccountID()
{
	return accountID;
}

/*
* mutator to set first name of customer
*/
void Client::setFirstName(string value)
{
	firstName = value;
}
/*
* accessor to get first name of customer
*/
string Client::getFirstName()
{
	return firstName;
}

/*
* mutator to set account id of customer
*/
void Client::setLastName(string value)
{
	lastName = value;
}
/*
* accessor to get last name of customer
*/
string Client::getLastName()
{
	return lastName;
}

/*
* mutator to set account balance of customer
*/
void Client::setAccountBalance(double value)
{
	accountBalance = value;
}
/*
* accessor to get account balance of customer
*/
double Client::getAccountBalance()
{
	return accountBalance;
}

/*
* method to deposit amount in customer's account
*/
void Client::depositAmount(double value)
{
	accountBalance += value; system("CLS");
	cout << "***********************************************" << endl;
	cout << "*              CASH DEPOSITED                **" << endl;
	cout << "***********************************************" << endl;
	cout << "            Cash Dposited: " << value << endl;
	cout << "            Availabe Cash amount: " << accountBalance << endl;
}

/*
* method to withdraw amount in customer's account
*/
void Client::withdrawAmount(double value)
{
	accountBalance = accountBalance - value; system("CLS");
	cout << "***********************************************" << endl;
	cout << "*              CASH WITHDRAWN                **" << endl;
	cout << "***********************************************" << endl;
	cout << "            Cash Withdrawn: " << value << endl;
	cout << "            Remaining cash amount: " << accountBalance << endl;
}
