#include "Faculty.h"

/*
* Non-parametrized Constructor for Student class
*/
Faculty::Faculty()
{
	subject = "";
	joinedDate = "";
	gender = "";
}


/*
* Parametrized Constructor for Student class
*/
Faculty::Faculty(int regNo, string fname, string lname, string dob, string sub, string jDate, string gen) : 
	Person(regNo, fname, lname, dob)
{
	subject = sub;
	joinedDate = jDate;
	gender = gen;
}

/*
* Mutator to assign the subjectproficiency of the faculty member
*/
void Faculty::setSubject(string value)
{
	subject = value;
}

/*
* Accessor to get the subject proficiency of the faculty member
*/
string Faculty::getSubject()
{
	return subject;
}

/*
* Mutator to assign the joined date of the faculty member
*/
void Faculty::setJoinedDate(string value)
{
	joinedDate = value;
}

/*
* Accessor to get the joined date of the faculty member
*/
string Faculty::getJoinedDate()
{
	return joinedDate;
}

/*
* Mutator to set the gender of the faculty member
*/
void Faculty::setGender(string value)
{
	gender = value;
}

/*
* Accessor to get the gender of the faculty member
*/
string Faculty::getGender()
{
	return gender;
}

/*
* Accessor to display details of the faculty member
*/
void Faculty::displayDetails()
{
	cout << "*****************************************" << endl;
	cout << "**               PROFILE               **" << endl;
	cout << "*****************************************" << endl;
	cout << "Registration number: " << getRegistrationNo() << endl;
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Date of birth: " << getDateOfBirth() << endl;
	cout << "Gender: " << gender << endl;
	cout << "Subject: " << subject << endl;
	cout << "Joining Date: " << joinedDate << endl;
	cout << "-----------------------------------------" << endl;
}
