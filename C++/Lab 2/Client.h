/*
* Creating Header file for Client
*/
#ifndef CLIENT_HEADER
#define CLIENT_HEADER

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Client : public Person
{	
private:
	int accountID;
	double accountBalance;
	
public:
	
	Client();

	Client(int, string, string, double);
	
	/*
	* mutator to set account id of customer
	*/
	void setAccountID(int);
	/*
	* accessor to get account id of customer
	*/
	int getAccountID();
	/*
	* mutator to set account balance of customer
	*/
	void setAccountBalance(double);
	/*
	* accessor to get account balance of customer
	*/
	double getAccountBalance();

	/*
	* method to deposit amount in customer's account
	*/
	void depositAmount(double);

	/*
	* method to withdraw amount in customer's account
	*/
	void withdrawAmount(double);
};

#endif 
