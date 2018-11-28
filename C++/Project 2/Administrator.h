#ifndef ADMIN_HEADER
#define ADMIN_HEADER

#include <iostream>
#include <conio.h>
#include "Person.h"
#include "Course.h"
#include "Student.h"
#include "Faculty.h"
#include "Handler.h"

using namespace std;

class Administrator
{
private:
	/*
	* Variables to be used in the class
	*/
	string username;
	string password;

	Course *coursesList;
	vector<Faculty> facultyList;
	vector<Student> studentList;
	Handler handler;
	int count;
	int noOfCourses;
public:
	/*
	* Non-parametrized constructor
	*/
	Administrator();

	/*
	* Parametrized constructor
	*/
	Administrator(int size);

	/*
	* Method to verify the admin credentials
	*/
	int verifyAdmin(string un, string pass);




	/***************************************************************************
	* Course Related Functions
	/***************************************************************************
	* Method to validate the course
	*/
	int verifyCourse(int cId); 

	/*
	* Method to add new course
	*/
	void addCourse(Course course);

	/*
	* Method to remove course from list
	*/
	void removeCourse(int cId);
	
	/*
	* Method to update course from list
	*/
	void updateCourse(int cId);
	
	/*
	* Method to print the details of courses in list
	*/
	void printCourseList();





	/***************************************************************************
	* Faculty Related Functions
	/***************************************************************************
	* Method to validate the faculty member
	*/
	int verifyFacultyMember(int fId); 

	/*
	* Method to Add new faculty member to list
	*/
	void addNewFacultyMember(Faculty professor);

	/*
	* Method to remove faculty member from list
	*/
	void removeFacultyMember(int pId);

	/*
	* Method to update new faculty member from list
	*/
	void updateFacultyMember(int fId);

	/*
	* Method to print the details of courses in list
	*/
	void printFacultyList();





	/***************************************************************************
	* Student Related Functions
	/***************************************************************************
	* Method to validate the student
	*/
	int verifyStudent(int sId);

	/*
	* Method to Add new student to list
	*/
	void addNewStudent(Student student);

	/*
	* Method to remove student from list
	*/
	void removeStudent(int sId);

	/*
	* Method to update student from list
	*/
	void updateStudent(int sId);

	/*
	* Method to print the details of courses in list
	*/
	void printStudentList();
	



	/***************************************************************************
	* Student Removal and Faculty Course Enrollment Related Functions
	/***************************************************************************
	* Method to add student to course
	*/
	void addStudentToCourse(int index, int courseId);

	/*
	* Method to remove student from course
	*/
	void removeStudentFromCourse(int cId, int sId);

	/*
	* Method to assign course to faculty member
	*/
	void assignCourseToFacultyMember(int cId, int fId);




	/***************************************************************************
	* Method to be used for reading data from file using Handler object
	/***************************************************************************
	* Method to read data from file
	*/
	void readCoursesDataFromFile();
};

#endif // !ADMIN_HEADER
