#include "Facilities.h"

/*
* Non-parametrized Constructor for Facilities class
*/
Facilities::Facilities()
{
	stafJob = "";
}

/*
* Parametrized Constructor for Facilities class
*/
Facilities::Facilities(int regNo, string fname, string lname, string dob, double wage, string type) :
	Staff(regNo, fname, lname, dob, wage)
{
	stafJob = type;
}

/*
* Mutator to assign the staff category of the staff
*/
void Facilities::setstafJob(string value)
{
	stafJob = value;
}

/*
* Accessor to get the staff category of the staff
*/
string Facilities::getstafJob()
{
	return stafJob;
}

/*
* Accessor to display the facilitator's details
*/
void Facilities::displayDetails()
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

