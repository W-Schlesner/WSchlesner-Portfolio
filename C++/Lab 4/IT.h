#ifndef HEADER_IT
#define HEADER_IT

#include <iostream>
#include <string>
#include "Staff.h"


using namespace std;

class IT : public Staff
{
private:
	string stafJob;

public:
	/*
	* Non-parametrized Constructor for IT class
	*/
	IT();

	/*
	* Parametrized Constructor for IT class
	*/
	IT(int regNo, string fname, string lname, string dob, double wage, string type);

	/*
	* Mutator to assign the staff category of the staff
	*/
	void setstafJob(string value);

	/*
	* Accessor to get the staff category of the staff
	*/
	string getstafJob();

	/*
	* Method to display the details of IT manager
	*/
	void displayDetails();


};

#endif //HEADER_IT