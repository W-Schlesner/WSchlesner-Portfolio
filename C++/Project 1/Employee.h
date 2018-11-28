/*
* Creating Header file for Employee
*/
#ifndef EMPLOYEE_HEADER
#define EMPLOYEE_HEADER

/*
* Importing the directories
*/
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class BankEmployee : public Person
{	/*
	* Data members to be used in the project
	*/
private:
	string username;
	string password;

public:
	/*
	* Non-parameterized constructor
	*/
	BankEmployee();

	/*
	* Parameterized constructor
	*/
	BankEmployee(string, string, string, string);

	/*
	* mutator to set username
	*/
	void setUsername(string);

	/*
	* accessor to get username
	*/
	string getUsername();


	/*
	* mutator to set password
	*/
	void setPassword(string);
	/*
	* accessor to get password
	*/
	string getPassword();
};



#endif // EMPLOYEE_HEADER
