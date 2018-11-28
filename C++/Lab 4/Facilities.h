#ifndef HEADER_FACILITIES
#define HEADER_FACILITIES

#include <iostream>
#include <string>
#include "Staff.h"


using namespace std;

class Facilities : public Staff
{
private:
	string stafJob;

public:
	/*
	* Non-parametrized Constructor for Facilities class
	*/
	Facilities();

	/*
	* Parametrized Constructor for Facilities class
	*/
	Facilities(int regNo, string fname, string lname, string dob, double wage, string type);

	/*
	* Mutator to assign the staff category of the staff
	*/
	void setstafJob(string value);

	/*
	* Accessor to get the staff category of the staff
	*/
	string getstafJob();

	/*
	* Accessor to display the facilitator's details
	*/
	void displayDetails();


};

#endif //HEADER_FACILITIES