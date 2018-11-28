#include "Registrar.h"

/*
* Non-parametrized Constructor for Registrar class
*/
Registrar::Registrar()
{
	stafJob = "";
}

/*
* Parametrized Constructor for Registrar class
*/
Registrar::Registrar(int regNo, string fname, string lname, string dob, double wage, string type) :
	Staff(regNo, fname, lname, dob, wage)
{
	stafJob = type;
}

/*
* Mutator to assign the staff category of the staff
*/
void Registrar::setstafJob(string value)
{
	stafJob = value;
}

/*
* Accessor to get the staff category of the staff
*/
string Registrar::getstafJob()
{
	return stafJob;
}

/*
* Method display the details of registrar
*/
void Registrar::displayDetails()
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

