#ifndef PERSON_HEADER
#define PERSON_HEADER

#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
	/*
	* Variables to be used in this project for person
	*/			 
	int registrationID;
	string firstName;
	string lastName;
	string dateOfBirth;
	string gender;
	int age;
public:
	/*
	* Non-peramiterized Constructor 
	*/
	Person();

	/*
	* Non-peramiterized Constructor
	*/
	Person(string fName, string lName, string dob, string gender, int age);


	/*
	* Mutator method to assing RegistrationNo to student
	*/
	void setRegistrationID(int value);	
	/*
	* Accessor method to get RegistrationNo of student
	*/
	int getRegistrationID();

	/*
	* Mutator to set firstname of person
	*/
	void setFirstName(string value);
	/*
	* Accessor to return firstname of person
	*/
	string getFirstName();

	/*
	* Mutator to set LastName of person
	*/
	void setLastName(string value);
	/*
	* Accessor to return firstname of person
	*/
	string getLastName();

	/*
	* Mutator to set DateOfBirth of person
	*/
	void setDateOfBirth(string value);
	/*
	* Accessor to return DateOfBirth of person
	*/
	string getDateOfBirth();

	/*
	* Mutator to set Gender of person
	*/
	void setGender(string value);
	/*
	* Accessor to return Gender of person
	*/
	string getGender();

	/*
	* Mutator to set Age of person
	*/
	void setAge(int value);
	/*
	* Accessor to return Age of person
	*/
	int getAge();


	/*
	* Pure Virtual Method to print the details of class attributes inherited from this class.
	* This method is responsible for the concept of Polymorphism
	*/
	virtual void print() = 0;
};

#endif // !PERSON_HEADER
