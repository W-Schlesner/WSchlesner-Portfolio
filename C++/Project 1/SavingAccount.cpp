#include "SavingAccount.h"


/*
*  Non Parameterized Constructor
*/
SavingAccount::SavingAccount()
{
	interestRate = 0.0;
}

/*
*  Parameterized Constructor
*/
SavingAccount::SavingAccount(int accNo, int cash, float interest, string accType) : Account(accNo, accType, cash)
{
	interestRate = interest;
}

/*
*  Function that sets Interest to 0
*/
void SavingAccount::setInterest(float value)
{
	interestRate = 0;
}

/*
*  Function that returns Interest
*/
float SavingAccount::getInterest()
{
	return interestRate;
}