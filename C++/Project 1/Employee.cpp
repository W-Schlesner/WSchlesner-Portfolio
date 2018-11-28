#include "Employee.h"

/*
* Non Parametrized Constructor
*/
BankEmployee::BankEmployee()
{
	username = "";
	password = "";
}

/*
* Parametrized Constructor
*/
BankEmployee::BankEmployee(string fname, string lname, string un, string pass) : Person(fname, lname)
{
	username = un;
	password = pass;
}

/*
* Function to set username of the employee
*/
void BankEmployee::setUsername(string name)
{
	username = name;
}

/*
* Function to return username of the employee
*/
string BankEmployee::getUsername()
{
	return username;
}

/*
* Function to set password of the employee
*/
void BankEmployee::setPassword(string pass)
{
	password = pass;
}

/*
* Function to return password of the employee
*/
string BankEmployee::getPassword()
{
	return password;
}
