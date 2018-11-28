#ifndef HEADER_UNIVERSITY
#define HEADER_UNIVERSITY

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "Student.h"
#include "Faculty.h"

using namespace std;

struct StNode
{
	Student data;
	StNode *next;
};

struct FacNode
{
	Faculty data;
	FacNode *next;
};

class University
{
private:
	int noOfStudents;
	Student *students;
	int stCounter;

	int facultySize;
	Faculty *faculty;
	int fCounter;

	/*
	* These variables will be used for user defined linked list
	*/
	StNode *stHead;
	FacNode *facHead;

	/*
	* These variable will be used for STL list and STL vector
	*/
	list<Student> studentList;
	list<Faculty> facutyList;

	vector<Student> studentVector;
	vector<Faculty> facultyVector;


public:
	/*
	* Non-parametrized Constructor for University class
	*/
	University();

	/*
	* Parametrized Constructor for University class
	*/
	University(int st, int fSize);


	/******************************************************************************/
	/* Handing the data for students
	/******************************************************************************/


	//Method's prototype to Enroll new students
	void addStudent(Student student, int choice);

	//Method's prototype to Update Student
	void updateStudent(int regNo, int choice);

	//Method's prototype to Delete student
	void deleteStudent(int regNO, int choice);

	//Method's prototype to Search Student
	int searchStudent(int regNo);

	//Method's prototype to Display all Students
	void displayStudents(int choice);



	/******************************************************************************/
	/* Handing the data for Faculty
	/******************************************************************************/

	//Method's prototype to Enroll new students
	void addTeacher(Faculty teacher, int choice);

	//Method's prototype to Update Teacher
	void updateTeacher(int regNo, int choice);

	//Method's prototype to Delete Teacher
	void deleteTeacher(int regNo, int choice);

	//Method's prototype to Search Teacher
	int searchTeacher(int regNo);

	//Method's prototype to Display all Teachers
	void displayTeachers(int choice);
};

#endif 
