#ifndef COURSE_HEADER
#define COURSE_HEADER

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "Student.h"
#include "Faculty.h"
#include "Queue.h"

using namespace std;

class Course
{
private:
	int courseId;
	string courseName;
	Student *studentList;
	Queue waitingList;
	Faculty professor;
	int count, noOfStudents;
public:
	/*
	* Non-parametrized Constructor for Course class
	*/
	Course();

	/*
	* Parametrized Constructor for Course class
	*/
	Course(int id, string name, int counter);

	/*
	* Mutator method to assing ID to course
	*/
	void setCourseID(int value);

	/*
	* Accessor method to get ID of course
	*/
	int getCourseID();

	/*
	* Mutator method to assing ID to course
	*/
	void setCourseName(string value);

	/*
	* Accessor method to get ID of course
	*/
	string getCourseName();

	/*
	* Method to add new student to course
	*/
	void addStudent(Student st);

	/*
	* Accessor method to return studentList
	*/
	Student *getStudentList();

	/*
	* Accessor method to return studentList	size
	*/
	int getStudentListSize();

	/*
	* Mutator method to assign size to student list
	*/
	void setSize(int size);


	/*
	* Method to remove student from course
	*/
	void removeStudent(int regNo);

	/*
	* Method to assign course to professor
	*/
	void addProfessor(Faculty fac);

	/*
	* Method to update professor of course
	*/
	void updateProfessor(Faculty fac);
	
	/*
	* Accessor method to return Professor details as string to handler 
	*/
	string getProfessorDetails();

	/*
	* Method to display course details
	*/
	void print();


};

#endif // !COURSE_HEADER
