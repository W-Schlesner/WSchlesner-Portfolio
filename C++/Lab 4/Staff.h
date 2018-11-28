#ifndef HEADER_STAFF
#define HEADER_STAFF

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Staff : public Person
{
private:
	double monthlyWage;

public:
	/*
	* Non-parametrized Constructor for Staff class
	*/
	Staff();

	/*
	* Parametrized Constructor for Staff class
	*/
	Staff(int regNo, string fname, string lname, string dob, double wage);

	/*
	* Mutator to assign the monthly wage of the staff
	*/
	void setMonthlyWage(double value);

	/*
	* Accessor to get the monthly wage of the staff
	*/
	double getMonthlyWage();

	/*
	* Method to display the details of staff
	*/
	void displayDetails();


};

#endif //HEADER_STAFF