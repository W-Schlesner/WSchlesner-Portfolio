#include "Employee.h"

BankEmployee::BankEmployee()
{
	username = "";
	password = "";
}

BankEmployee::BankEmployee(string un, string pass)
{
	username = un;
	password = pass;
}

void BankEmployee::setUsername(string name)
{
	username = name;
}

string BankEmployee::getUsername()
{
	return username;
}

void BankEmployee::setPassword(string pass)
{
	password = pass;
}

string BankEmployee::getPassword()
{
	return password;
}
