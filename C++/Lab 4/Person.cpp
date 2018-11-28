#include "Person.h"

/*
* Non-parametrized Constructor for Person class
*/
Person::Person()
{
	firstName = "";
	lastName = "";
	dateOfBirth = "";
}

/*
* Parametrized Constructor for Person class
*/
Person::Person(int regNo, string fname, string lname, string dob)
{
	registrationNo = regNo;
	firstName = fname;
	lastName = lname;
	dateOfBirth = dob;
}

/*
* Mutator to assign registration no to person
*/
void Person::setRegistrationNo(int value)
{
	registrationNo = value;
}

/*
* Accessor to get reistration number of person
*/
int Person::getRegistrationNo()
{
	return registrationNo;
}

/*
* Mutator to assign first name to person
*/
void Person::setFirstName(string value)
{
	firstName = value;
}

/*
* Accessor to get first name of person
*/
string Person::getFirstName()
{
	return firstName;
}

/*
* Mutator to assign first name to person
*/
void Person::setLastname(string value)
{
	lastName = value;
}

/*
* Accessor to get last name of person
*/
string Person::getLastName()
{
	return lastName;
}

/*
* Mutator to assign first name to person
*/
void Person::setDateOfBirth(string value)
{
	dateOfBirth = value;
}

/*
* Accessor to get date of birth of person
*/
string Person::getDateOfBirth()
{
	return dateOfBirth;
}

/*
* Method to display the details of person.
*/
void Person::displayDetails()
{
	cout << "*****************************************" << endl;
	cout << "**                PROFILE              **" << endl;
	cout << "*****************************************" << endl;
	cout << "Registration number: " << registrationNo << endl;
	cout << "Name: " << firstName << " " << lastName << endl;
	cout << "Date of birth: " << dateOfBirth << endl;
}
