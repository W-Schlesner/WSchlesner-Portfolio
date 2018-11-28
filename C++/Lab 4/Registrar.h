#ifndef HEADER_REGISTRAR
#define HEADER_REGISTRAR

#include <iostream>
#include <string>
#include "Staff.h"


using namespace std;

class Registrar : public Staff
{
private:
	string stafJob;

public:
	/*
	* Non-parametrized Constructor for Registrar class
	*/
	Registrar();

	/*
	* Parametrized Constructor for Registrar class
	*/
	Registrar(int regNo, string fname, string lname, string dob, double wage, string type);

	/*
	* Mutator to assign the staff category of the staff
	*/
	void setstafJob(string value);

	/*
	* Accessor to get the staff category of the staff
	*/
	string getstafJob();

	/*
	* Method display the details of registrar
	*/
	void displayDetails();


};

#endif //HEADER_REGISTRAR