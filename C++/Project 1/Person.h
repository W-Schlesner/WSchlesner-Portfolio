#ifndef HEADER_PERSON
#define HEADER_PERSON

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	string firstName;
	string lastName;

public:
	/*
	* Non Parameterized Constructor
	*/
	Person();

	/*
	* Parameterized Constructor
	*/
	Person(string fname, string lname);

	/*
	* Function setting the customer name
	*/
	void setFirstName(string fName);
	void setLastName(string lName);

	/*
	* Functions that return first, middl, last name of customer
	*/
	string getFirstName();
	string getLastName();
};


#endif // HEADER_PERSON
