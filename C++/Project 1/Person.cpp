#include "Person.h"

/*
*  Non Parameterized Constructor
*/
Person::Person()
{
	firstName = "";
	lastName = "";
}

/*
* Parameterized Constructor
*/
Person::Person(string fname, string lname)
{
	firstName = fname;
	lastName = lname;
}


/*
* Functions for setting the customer name
*/
void Person::setFirstName(string fName)
{
	firstName = fName;
}
void Person::setLastName(string lName)
{
	lastName = lName;
}

/*
*  Functions that return first, last name of customer
*/
string Person::getFirstName()
{
	return firstName;
}
string Person::getLastName()
{
	return lastName;
}