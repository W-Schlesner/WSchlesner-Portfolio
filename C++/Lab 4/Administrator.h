#ifndef HEADER_ADMINISTRATOR
#define HEADER_ADMINISTRATOR

#include <iostream>
#include <string>
#include "Staff.h"


using namespace std;

class Administrator : public Staff
{
private:
	string stafJob;

public:
	/*
	* Non-parametrized Constructor for Registrar class
	*/
	Administrator();

	/*
	* Parametrized Constructor for Registrar class
	*/
	Administrator(int regNo, string fname, string lname, string dob, double wage, string type);

	/*
	* Mutator to assign the staff category of the staff
	*/
	void setstafJob(string value);

	/*
	* Accessor to get the staff category of the staff
	*/
	string getstafJob();

	/*
	* Method to display the details of Administrator.
	*/
	void displayDetails();


};

#endif //HEADER_ADMINISTRATOR