/*
* Creating Header file for Employee
*/
#ifndef EMPLOYEE_HEADER
#define EMPLOYEE_HEADER


#include <iostream>
#include <string>

using namespace std;

class BankEmployee : protected Person
{	
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
	BankEmployee(string, string);

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



#endif 
