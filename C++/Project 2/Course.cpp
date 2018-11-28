#include "Course.h"

/*
* Non-parametrized Constructor for Course class
*/
Course::Course()
{
	courseId = 0;
	courseName = "";
	count = 0;
	noOfStudents = 10;
	studentList = new Student[noOfStudents];
}

/*
* Parametrized Constructor for Course class
*/
Course::Course(int id, string name, int size)
{
	courseId = id;
	courseName = name;
	count = 0;
	noOfStudents = size;
	studentList = new Student[noOfStudents];
}


/*
* Mutator method to assing ID to course
*/
void Course::setCourseID(int value)
{
	courseId = value;
}

/*
* Accessor method to get ID of course
*/
int Course::getCourseID()
{
	return courseId;
}

/*
* Mutator method to assing ID to course
*/
void Course::setCourseName(string value)
{
	courseName = value;
}

string Course::getCourseName()
{
	return courseName;
}

/*
* Method to add new student to course
*/
void Course::addStudent(Student st)
{
	if (count < noOfStudents)
	{
		studentList[count++] = st; 
		cout << "---------------------------------------------------------------------------" << endl;
		cout << "Student successfully enrolled into the course. Press any key to continue..." << endl;
	}
	else
	{
		waitingList.enqueueStudent(st);
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "Please wait!!! You are added to waiting list. Press any key to continue..." << endl;
	}
}

/*
* Accessor method to return studentList
*/
Student *Course::getStudentList()
{
	return studentList;
}

/*
* Accessor method to return studentList	size
*/
int Course::getStudentListSize()
{
	return count;
}

/*
* Mutator method to assign size to student list
*/
void Course::setSize(int size)
{
	noOfStudents = size;
}

/*
* Method to remove student from course
*/
void Course::removeStudent(int regNo)
{
	for (int i = 0; i < count; i++)
	{
		if (regNo == studentList[i].getRegistrationID())
		{
			if (!waitingList.isEmpty())
			{
				for (int j = i; j < count - 1; j++)
					studentList[j] = studentList[j + 1];
				count--;
				cout << "--------------------------------" << endl;
				cout << "Student removed from the course!" << endl;
				break;
			}
		}
	}
	addStudent(waitingList.dequeueStudent());
}

/*
* Method to assign course to professor
*/
void Course::addProfessor(Faculty fac)
{
	professor = fac;
	cout << "Course " << getCourseName() << " is assigned to Prof." << fac.getFirstName() << " " << fac.getLastName() << endl;
}

/*
* Method to remove professor from course
*/
void Course::updateProfessor(Faculty fac)
{
	professor = fac; 
	cout << "Course " << getCourseName() << " is now assigned to Prof." << fac.getFirstName() << " " << fac.getLastName() << endl;
}

/*
* Accessor method to return Professor
*/
string Course::getProfessorDetails()
{
	ostringstream stream;
	stream << professor.getRegistrationID() << "," << professor.getFirstName() << "," 
			<< professor.getLastName() << "," << professor.getDateOfBirth() << ","
			<< professor.getAge() << "," << professor.getGender() << ","
			<< professor.getJoinedDate() << "," << professor.getQualitfication();
	string profData = stream.str();
	return profData;
}

/*
* This method will be used to display the details of course and details of enrolled student
*/
void Course::print()
{
	cout << "***************************************" << endl;
	cout << "*            COURSE DETAILS           *" << endl;
	cout << "***************************************" << endl;
	cout << "Course ID: " << courseId << endl;
	cout << "Course Name: " << courseName << endl;
	cout << "Professor Name: Prof." << professor.getFirstName() << " " << professor.getLastName() << endl;
	
	cout << "\n            STUDENTS ENROLLED            " << endl;
	cout << "*****************************************" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << "Student Registration N.o: " << studentList[i].getRegistrationID() << endl;
		cout << "Student Name: " << studentList[i].getFirstName() << " " << studentList[i].getLastName() << endl;
		cout << "Student GPA: " << studentList[i].getGPA() << endl;
		cout << "Student Credit hours: " << studentList[i].getCreditHours() << endl;
		cout << "Student Graduation Date: " << studentList[i].getGradDate() << endl;
		cout << "-----------------------------------\n" << endl;
	}
}
