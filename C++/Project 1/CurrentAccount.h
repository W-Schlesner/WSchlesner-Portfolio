
#ifndef HEADER_CURRENTACCOUNT
#define HEADER_CURRENTACCOUNT

#include <iostream>
#include "Account.h"

using namespace std;

class CurrentAccount : public Account
{
private:
	float interestRate;
public:
	/*
	* Non Parameterized Constructor
	*/
	CurrentAccount();

	/*
	* Parameterized Constructor
	*/
	CurrentAccount(int accNo, int cash, float interest, string accType);

	/*
	* Function that sets Interest to 0
	*/
	void setInterest(float value);

	/*
	* Function that returns the interest value
	*/
	float getInterest();
};


#endif // HEADER_CURRENTACCOUNT
