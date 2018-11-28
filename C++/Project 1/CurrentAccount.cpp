#include "CurrentAccount.h"

CurrentAccount::CurrentAccount()
{
	interestRate = 0.0;
}

/*
* Constructor
*/
CurrentAccount::CurrentAccount(int accNo, int cash, float interest, string accType) : Account(accNo, accType, cash)
{
	interestRate = 0.0;
}

/*
* Function that sets Interest to 0
*/
void CurrentAccount::setInterest(float value)
{
	interestRate = 0.0;
}

/*
* Function that returns Interest
*/
float CurrentAccount::getInterest()
{
	return interestRate;
}
