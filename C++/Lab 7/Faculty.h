#ifndef HEADER_FACULTY
#define HEADER_FACULTY

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Faculty : public Person
{
private:
	string subject;
	string joinedDate;

public:
	/*
	* Non-parametrized Constructor for Student class
	*/
	Faculty();

	/*
	* Parametrized Constructor for Student class
	*/
	Faculty(int regNo, string fname, string lname, string dob, string gender, int age, string sub, string jDate, string gen);
	
	/*
	* Mutator to assign the subject of the faculty member
	*/
	void setSubject(string value);

	/*
	* Accessor to get the subject of the faculty member
	*/
	string getSubject();

	/*
	* Mutator to assign the joined date of the faculty member
	*/
	void setJoinedDate(string value);

	/*
	* Accessor to get the joined date of the faculty member
	*/
	string getJoinedDate();


	/*
	* Accessor to display details of the faculty member
	*/
	void print();  
};

#endif //HEADER_FACULTY
