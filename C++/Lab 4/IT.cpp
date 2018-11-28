#include "IT.h"

/*
* Non-parametrized Constructor for IT class
*/
IT::IT()
{
	stafJob = "";
}

/*
* Parametrized Constructor for IT class
*/
IT::IT(int regNo, string fname, string lname, string dob, double wage, string type) :
	Staff(regNo, fname, lname, dob, wage)
{
	stafJob = type;
}

/*
* Mutator to assign the staff category of the staff
*/
void IT::setstafJob(string value)
{
	stafJob = value;
}

/*
* Accessor to get the staff category of the staff
*/
string IT::getstafJob()
{
	return stafJob;
}

/*
* Method to display the details of IT manager
*/
void IT::displayDetails()
{
	cout << "*****************************************" << endl;
	cout << "**               PROFILE               **" << endl;
	cout << "*****************************************" << endl;
	cout << "Registration number: " << getRegistrationNo() << endl;
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Date of birth: " << getDateOfBirth() << endl;
	cout << "Staff Type: " << stafJob << endl;
	cout << "Monthly Wage: " << getMonthlyWage() << endl;
	cout << "-----------------------------------------" << endl;
}

