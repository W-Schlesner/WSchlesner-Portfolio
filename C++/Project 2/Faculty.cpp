#include "Faculty.h"

/*
* Non-parametrized Constructor for Student class
*/
Faculty::Faculty()
{
	qualification = "";
	joinedDate = "";
}


/*
* Parametrized Constructor for Student class
*/				 
Faculty::Faculty(int regNo, string fname, string lname, string dob, string gender, int age, string sub, string jDate, string gen) :
	Person(fname, lname, dob, gender, age)
{
	qualification = sub;
	joinedDate = jDate;	
}

/*
* Mutator to assign the subjectproficiency of the faculty member
*/
void Faculty::setQualitfication(string value)
{
	qualification = value;
}

/*
* Accessor to get the subject proficiency of the faculty member
*/
string Faculty::getQualitfication()
{
	return qualification;
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
* Accessor to display details of the faculty member
*/
void Faculty::print()
{
	cout << "*****************************************" << endl;
	cout << "**           TEACHER PROFILE           **" << endl;
	cout << "*****************************************" << endl;
	cout << "Registration number: " << getRegistrationID() << endl;
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Date of birth: " << getDateOfBirth() << endl;
	cout << "Gender: " << getGender() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Subject: " << qualification << endl;
	cout << "Joining Date: " << joinedDate << endl;
	cout << "-----------------------------------------" << endl;
}
