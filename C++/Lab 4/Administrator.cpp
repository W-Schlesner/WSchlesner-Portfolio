#include "Administrator.h"

/*
* Non-parametrized Constructor for Registrar class
*/
Administrator::Administrator()
{
	stafJob = "";
}

/*
* Parametrized Constructor for Registrar class
*/
Administrator::Administrator(int regNo, string fname, string lname, string dob, double wage, string type) :
	Staff(regNo, fname, lname, dob, wage)
{
	stafJob = type;
}

/*
* Mutator to assign the staff category of the staff
*/
void Administrator::setstafJob(string value)
{
	stafJob = value;
}

/*
* Accessor to get the staff category of the staff
*/
string Administrator::getstafJob()
{
	return stafJob;
}

/*
* Method to display the details of Administrator.
*/
void Administrator::displayDetails()
{
	cout << "*****************************************" << endl;
	cout << "**               PROFILE               **" << endl;
	cout << "*****************************************" << endl;
	cout << "Registration number: " << getRegistrationNo() << endl;
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Date of birth: " << getDateOfBirth() << endl;
	cout << "Staff Job: " << stafJob << endl;
	cout << "Monthly Wage: " << getMonthlyWage() << endl;
	cout << "-----------------------------------------" << endl;
}

