#ifndef HEADER_UNIVERSITY
#define HEADER_UNIVERSITY

#include <iostream>
#include <string>
#include "Student.h"
#include "Faculty.h"
#include "Administrator.h"
#include "Facilities.h"
#include "IT.h"
#include "Registrar.h"

using namespace std;

class University
{
private:
	int noOfStudents;
	Student *students;
	int stCounter;

	int facultySize;
	Faculty *faculty;
	int fCounter;

	int noOfAdministrationMembers;
	Administrator *administrators;
	int adCounter;

	int noOfFacilitiesMembers;
	Facilities *facilitators;
	int facCounter;

	int noOfItMembers; 
	IT *itMembers; 
	int itCounter;

	int noOfRegistrars;
	Registrar *registrars;
	int regCounter;

public:
	/*
	* Non-parametrized Constructor for University class
	*/
	University();

	/*
	* Parametrized Constructor for University class
	*/
	University(int st, int fSize, int nAccManagers, int nAdmMembers, int faciMembers, int nItMembers, int nRegistrars);


	/******************************************************************************/
	/* Handing the data for students
	/******************************************************************************/


	//Method's prototype to Enroll new students
	void addStudent(Student student);

	//Method's prototype to Update Student
	void updateStudent(int regNo);

	//Method's prototype to Delete student
	void deleteStudent(int regNO);

	//Method's prototype to Search Student
	int searchStudent(int regNo);

	//Method's prototype to Display all Students
	void displayStudents();



	/******************************************************************************/
	/* Handing the data for Faculty
	/******************************************************************************/

	//Method's prototype to Enroll new students
	void addteacher(Faculty teacher);

	//Method's prototype to Update Teacher
	void updateTeacher(int regNo);

	//Method's prototype to Delete Teacher
	void deleteTeacher(int regNo);

	//Method's prototype to Search Teacher
	int searchTeacher(int regNo);

	//Method's prototype to Display all Teachers
	void displayTeachers();


	/******************************************************************************/
	/* Handing the data for Administrator Staff
	/******************************************************************************/

	//Method's prototype to Enroll new administrator member
	void addAdminMember(Administrator adminMember);

	//Method's prototype to Update administrator member
	void updateAdminMember(int regNo);

	//Method's prototype to Delete administrator member
	void deleteAdminMember(int regNo);

	//Method's prototype to Search administrator member
	int searchAdminMember(int regNo);

	//Method's prototype to Display all administrators
	void displayAdministrators();


	/******************************************************************************/
	/* Handing the data for Facilities Staff
	/******************************************************************************/

	//Method's prototype to Enroll new Facilities member
	void addFacilitiesMember(Facilities facMem);

	//Method's prototype to Update Facilities member
	void updateFacilitiesMember(int regNo);

	//Method's prototype to Delete Facilities member
	void deleteFacilitiesMember(int regNo);

	//Method's prototype to Search Facilities member
	int searchFacilitiesMember(int regNo);

	//Method's prototype to Display all Facilities member
	void displayFacilitiesMembers();


	/******************************************************************************/
	/* Handing the data for IT Staff
	/******************************************************************************/

	//Method's prototype to Enroll new IT member
	void addITMember(IT itMem);

	//Method's prototype to Update IT member
	void updateITMember(int regNo);

	//Method's prototype to Delete IT member
	void deleteITMember(int regNo);

	//Method's prototype to Search IT member
	int searchITMember(int regNo);

	//Method's prototype to Display all IT member
	void displayITMembers();


	/******************************************************************************/
	/* Handing the data for Registrar Staff
	/******************************************************************************/

	//Method's prototype to Enroll new Registrar member
	void addRegistrarMember(Registrar registrar);

	//Method's prototype to Update Registrar member
	void updateRegistrarMember(int regNo);

	//Method's prototype to Delete Registrar member
	void deleteRegistrarMember(int regNo);

	//Method's prototype to Search Registrar member
	int searchRegistrarMember(int regNo);

	//Method's prototype to Display all Registrar member
	void displayRegistrarMembers();
};

#endif //Method's prototype to HEADER_UNIVERSITY