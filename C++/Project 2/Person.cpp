#include "Person.h"

/*
* Non-peramiterized Constructor
*/
Person::Person()
{
	firstName = "";
	lastName = "";
	dateOfBirth = "";
	gender = "";
	age = 0;
}

/*
* Non-peramiterized Constructor
*/
Person::Person(string fName, string lName, string dob, string gen, int agee)
{
	firstName = fName;
	lastName = lName;
	dateOfBirth = dob;
	gender = gen;
	age = agee;
}

/*
* Mutator method to assing RegistrationNo to student
*/
void Person::setRegistrationID(int value)
{
	registrationID = value;
}

/*
* Accessor method to get RegistrationNo of student
*/
int Person::getRegistrationID()
{
	return registrationID;
}


/*
* Mutator to set firstname of person
*/
void Person::setFirstName(string value)
{
	firstName = value;
}

/*
* Accessor to return firstname of person
*/
string Person::getFirstName()
{
	return firstName;
}

/*
* Mutator to set LastName of person
*/
void Person::setLastName(string value)
{
	lastName = value;
}

/*
* Accessor to return firstname of person
*/
string Person::getLastName()
{
	return lastName;
}

/*
* Mutator to set DateOfBirth of person
*/
void Person::setDateOfBirth(string value)
{
	dateOfBirth = value;
}

/*
* Accessor to return DateOfBirth of person
*/
string Person::getDateOfBirth()
{
	return dateOfBirth;
}

/*
* Mutator to set Gender of person
*/
void Person::setGender(string value)
{
	gender = value;
}

/*
* Accessor to return Gender of person
*/
string Person::getGender()
{
	return gender;
}

/*
* Mutator to set Age of person
*/
void Person::setAge(int value)
{
	age = value;
}

/*
* Accessor to return Age of person
*/
int Person::getAge()
{
	return age;
}
