#ifndef STUDENT_HEADER
#define STUDENT_HEADER

#include <iostream>
#include <string>
#include"Person.h"

class Student : public Person
{
private:
	double GPA;
	int creditHours;
	string startDate;
	string graduationDate;
	string status;

public:
	/*
	* Non-parametrized Constructor for Student class
	*/
	Student();

	/*
	* Parametrized Constructor for Student class
	*/
	Student(int regNo, string fname, string lname, string dob, string gender, int age, double gpa, int cHrs, string stDate, string gradDate, string st);

	/*
	* Mutator method to assing gpa to student
	*/
	void setGPA(double value);

	/*
	* Accessor method to get gpa of student
	*/
	double getGPA();

	/*
	* Mutator method to assing credit hours to student
	*/
	void setCreditHours(int value);

	/*
	* Accessor method to get credit hours of student
	*/
	int getCreditHours();

	/*
	* Mutator method to assing start date of degree to student
	*/
	void setStartDate(string value);

	/*
	* Accessor method to get start date of degree to student
	*/
	string getStartDate();

	/*
	* Mutator method to assing graduation date of degree to student
	*/
	void setGradDate(string value);

	/*
	* Accessor method to get graduation date of degree to student
	*/
	string getGradDate();


	/*
	* Mutator method to assing status
	*/
	void setStatus(string value);

	/*
	* Accessor method to get status
	*/
	string getStatus();
	
	/*
	* Method to display the details of student
	*/
	void print();

};

#endif // !STUDENT_HEADER
