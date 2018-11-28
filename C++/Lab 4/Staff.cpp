#include "Staff.h"

/*
* Non-parametrized Constructor for Staff class
*/
Staff::Staff()
{
	monthlyWage = 0;
}

/*
* Parametrized Constructor for Staff class
*/
Staff::Staff(int regNo, string fname, string lname, string dob, double wage) :
	Person(regNo, fname, lname, dob)

{
	monthlyWage = wage;
}

/*
* Mutator to assign the monthly wage of the staff
*/
void Staff::setMonthlyWage(double value)
{
	monthlyWage = value;
}

/*
* Accessor to get the monthly wage of the staff
*/
double Staff::getMonthlyWage()
{
	return monthlyWage;
}

/*
* Method to display the details of staff
*/
void Staff::displayDetails()
{
	cout << "*****************************************" << endl;
	cout << "**               PROFILE               **" << endl;
	cout << "*****************************************" << endl;
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Date of birth: " << getDateOfBirth() << endl;
	cout << "Monthly Wage: " << monthlyWage << endl;
	cout << "-----------------------------------------" << endl;
}
