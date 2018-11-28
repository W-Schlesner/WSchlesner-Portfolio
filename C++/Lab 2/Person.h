/*
* Creating Header file for Person
*/
#ifndef PERSON_HEADER
#define PERSON_HEADER

#include <iostream>
#include <string>
using namespace std;


class Person
{
protected:
	string firstName;
	string lastName;
	
public:
	
	Person();

	Person(string, string);

	/*
	* mutator to set first name of customer
	*/
	void setFirstName(string);
	/*
	* accessor to get first name of customer
	*/
	string getFirstName();

	/*
	* mutator to set account id of customer
	*/
	void setLastName(string);
	/*
	* accessor to get last name of customer
	*/
	string getLastName();
};





#endif 
