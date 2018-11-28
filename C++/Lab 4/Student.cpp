#include "Student.h"

/*
* Non-parametrized Constructor for Student class
*/
Student::Student()
{
	GPA = 0.0;
	creditHours = 0;
	startDate = "";
	graduationDate = "";
}

/*
* Parametrized Constructor for Student class
*/
Student::Student(int regNo, string fname, string lname, string dob, double gpa, int cHrs, string stDate, string gradDate) :
	Person (regNo, fname, lname, dob)
{
	GPA = gpa;
	creditHours = cHrs;
	startDate = stDate;
	graduationDate = gradDate;
}

/*
* Mutator method to assing gpa to student
*/
void Student::setGPA(double value)
{
	GPA = value;
}

/*
* Accessor method to get gpa of student
*/
double Student::getGPA()
{
	return GPA;
}

/*
* Mutator method to assing credit hours to student
*/
void Student::setCreditHours(int value)
{
	creditHours = value;
}

/*
* Accessor method to get credit hours of student
*/
int Student::getCreditHours()
{
	return creditHours;
}

/*
* Mutator method to assing start date of degree to student
*/
void Student::setStartDate(string value)
{
	startDate = value;
}

/*
* Accessor method to get start date of degree to student
*/
string Student::getStartDate()
{
	return startDate;
}

/*
* Mutator method to assing graduation date of degree to student
*/
void Student::setGradDate(string value)
{
	graduationDate = value;
}

/*
* Accessor method to get graduation date of degree to student
*/
string Student::getGradDate()
{
	return graduationDate;
}

/*
* Method to display the details of student
*/
void Student::displayDetails()
{
	cout << "*****************************************" << endl;
	cout << "**               PROFILE               **" << endl;
	cout << "*****************************************" << endl;
	cout << "Registration number: " << getRegistrationNo() << endl;
	cout << "Name: " << getFirstName() << " " << getLastName() << endl;
	cout << "Date of birth: " << getDateOfBirth() << endl;
	cout << "GPA: " << GPA << endl;
	cout << "Credit Hours Studying: " << creditHours << endl;
	cout << "Degree Start Date: " << startDate << endl;
	cout << "Degree Graduation Date: " << graduationDate << endl;
	cout << "-----------------------------------------" << endl;
}