#ifndef HEADER_PERSON
#define HEADER_PERSON

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	int registrationNo;
	string firstName;
	string lastName;
	string dateOfBirth;
public:
	/*
	* Non-parametrized Constructor for Person class
	*/
	Person();

	/*
	* Parametrized Constructor for Person class
	*/
	Person(int regNo, string fname, string lname, string dob);

	/*
	* Mutator to assign registration no to person
	*/
	void setRegistrationNo(int value);

	/*
	* Accessor to get reistration number of person
	*/
	int getRegistrationNo();

	/*
	* Mutator to assign first name to person
	*/
	void setFirstName(string value);

	/*
	* Accessor to get first name of person
	*/
	string getFirstName();

	/*
	* Mutator to assign last name to person
	*/
	void setLastname(string value);

	/*
	* Accessor to get last name of person
	*/
	string getLastName();

	/*
	* Mutator to assign first name to person
	*/
	void setDateOfBirth(string value);

	/*
	* Accessor to get date of birth of person
	*/
	string getDateOfBirth();

	/*
	* Method to display the details of person.
	*/
	void displayDetails();


};

#endif //HEADER_PERSON