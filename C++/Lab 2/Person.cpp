#include "Person.h"

using namespace std;


Person::Person()
{
	firstName = "";
	lastName = "";
}


Person::Person(string fname, string lname)
{
	firstName = fname;
	lastName = lname;
}

/*
* mutator to set first name of customer
*/
void Person::setFirstName(string value)
{
	firstName = value;
}
/*
* accessor to get first name of customer
*/
string Person::getFirstName()
{
	return firstName;
}

/*
* mutator to set account id of customer
*/
void Person::setLastName(string value)
{
	lastName = value;
}
/*
* accessor to get last name of customer
*/
string Person::getLastName()
{
	return lastName;
}
