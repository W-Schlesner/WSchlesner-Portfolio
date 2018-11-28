#ifndef HEADER_SAVINGACCOUNT
#define HEADER_SAVINGACCOUNT

#include <iostream>
#include "Account.h"

using namespace std;

/*
* Saving Account Inherited from Account Class
*/
class SavingAccount : public Account
{
private:
	float interestRate;
public:
	/*
	* Non Parameterized Constructor
	*/
	SavingAccount();

	/*
	* Parameterized Constructor
	*/
	SavingAccount(int accNo, int cash, float interest, string accType);

	/*
	* Function that sets Interest to 0
	*/
	void setInterest(float value);

	/*
	* Function that returns the interest value
	*/
	float getInterest();
};

#endif // HEADER_SAVINGACCOUNT
