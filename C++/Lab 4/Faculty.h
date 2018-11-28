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
	string gender;

public:
	/*
	* Non-parametrized Constructor for Student class
	*/
	Faculty();

	/*
	* Parametrized Constructor for Student class
	*/
	Faculty(int regNo, string fname, string lname, string dob, string subject, string jDate, string gen);

	
	/*
	* Mutator to assign the subjectproficiency of the faculty member
	*/
	void setSubject(string value);

	/*
	* Accessor to get the subject proficiency of the faculty member
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
	* Mutator to set the gender of the faculty member
	*/
	void setGender(string value);

	/*
	* Accessor to get the gender of the faculty member
	*/
	string getGender();

	/*
	* Accessor to display details of the faculty member
	*/
	void displayDetails();


};

#endif //HEADER_FACULTY