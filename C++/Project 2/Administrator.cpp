#include "Administrator.h"

/*
* Non-parametrized constructor
*/
Administrator::Administrator()
{
	username = "admin";
	password = "admin";
	count = 0;
	noOfCourses = 10;
	coursesList = new Course[noOfCourses];
	readCoursesDataFromFile();
}

/*
* Parametrized constructor
*/
Administrator::Administrator(int size)
{
	username = "admin";
	password = "admin";
	count = 0;
	noOfCourses = size;
	coursesList = new Course[noOfCourses];
}

/*
* Method to verify the admin credentials
*/
int Administrator::verifyAdmin(string un, string pass)
{
	if (un == username && pass == password)
	{
		return 1;
	}
	return -1;
}


/***************************************************************************
* Course Related Functions
/***************************************************************************
* Method to validate the course
*/
int Administrator::verifyCourse(int cId)
{
	for (int i = 0; i < count; i++)
	{
		if (coursesList[i].getCourseID() == cId)
		{
			return i;
		}
	}
	return -1;
}

/*
* Method to add new course
*/
void Administrator::addCourse(Course course)
{
	if (count < noOfCourses)
	{
		coursesList[count++] = course;
		handler.saveDataToFile(coursesList[count - 1]);
		cout << "-------------------------------------------------------" << endl;
		cout << "Course Added Successfully. Press any key to continue..." << endl;
	}
	else
	{
		cout << "-------------------------------------------------------------" << endl;
		cout << "No space left to add new course. Press any key to continue..." << endl;
	}
}

/*
* Method to remove course from list
*/
void Administrator::removeCourse(int cId)
{
	int index = verifyCourse(cId);
	
	if (index != -1)
	{
		for (int i = index; i < count - 1; i++)
		{
			coursesList[i] = coursesList[i + 1];
		}
		count--;
		handler.updateDataToFile(coursesList, count);
		cout << "-----------------------------------------------------------" << endl;
		cout << "Course Removed Successfully. Press any key to continue..." << endl;
	}
	else
	{
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Course not available under this registration number. Press any key to continue..." << endl;
	}
}

/*
* Method to update course from list
*/
void Administrator::updateCourse(int cId)
{
	int index = verifyCourse(cId);
	if (index != -1)
	{
		cout << "Enter new name for course: ";
		string courseName; cin >> courseName; coursesList[index].setCourseName(courseName);
		cout << "Do you want to change Professor(Yes/No): ";
		string choice; cin >> choice;
		if (choice == "Yes" || choice == "yes")
		{
			cout << "Enter faculty member id: ";
			int fId; cin >> fId;
			int fIndex = verifyFacultyMember(fId);
			if (fIndex != -1)
			{
				coursesList[index].updateProfessor(facultyList[fIndex]);
			}
			else
			{
				cout << "---------------------------------------------------------------------------------" << endl;
				cout << "Faculty member not found with this Registration n.o. Press any key to continue..." << endl;
			}
		}
		cout << "---------------------------------------------------------" << endl;
		cout << "Course Successfully updated. Press any key to continue..." << endl;
		handler.updateDataToFile(coursesList, count);
		return;
	}
	else
	{
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Course not available under this registration number. Press any key to continue..." << endl;
	}
}

/*
* Method to print the details of courses in list
*/
void Administrator::printCourseList()
{
	if (count > 0)
	{
		for (int i = 0; i < count; i++)
		{
			coursesList[i].print();
			_getch();
		}
	}
	else
	{
		cout << "---------------------------------------------------" << endl;
		cout << "No course in the list. Press any key to continue..." << endl;
	}
}





/***************************************************************************
* Faculty Related Functions
/***************************************************************************
* Method to validate the faculty member
*/
int Administrator::verifyFacultyMember(int fId)
{
	for (int i = 0; i < facultyList.size(); i++)
	{
		if (facultyList[i].getRegistrationID() == fId)
		{
			return i;
		}
	}
	return -1;
}

/*
* Method to Add new faculty member to list
*/
void Administrator::addNewFacultyMember(Faculty professor)
{
	facultyList.push_back(professor);
	cout << "---------------------------------------------------------------" << endl;
	cout << "Faculty member Added Successfully. Press any key to continue..." << endl;
}

/*
* Method to remove faculty member from list
*/
void Administrator::removeFacultyMember(int pId)
{
	int index = verifyFacultyMember(pId);
	if (index != -1)
	{
		for (int i = index; i < facultyList.size() - 1; i++)
		{
			facultyList[i] = facultyList[i + 1];
		}
		facultyList.pop_back();
		cout << "Faculty member registered with " << pId << "is no more in the Data" << endl;
		return;
	}
	else
	{
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Faculty member not found with this Registration n.o. Press any key to continue..." << endl;
	}
}

/*
* Method to update new faculty member from list
*/
void Administrator::updateFacultyMember(int fId)
{
	string fname, lname, dob, gender, sProf, jDate;
	int age;

	int index = verifyFacultyMember(fId);
	if (index != -1)
	{
		cout << "--------------------------------------------------" << endl;
		cout << "-     Faculty member found!!! Enter new Data     -" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Enter first name: ";
		cin >> fname; facultyList[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; facultyList[index].setLastName(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; facultyList[index].setDateOfBirth(dob);
		cout << "Enter age: ";
		cin >> age; facultyList[index].setAge(age);
		cout << "Enter Gender(Male/Female): ";
		cin >> gender; facultyList[index].setGender(gender);
		cout << "Enter qualitification: ";
		cin >> sProf; facultyList[index].setQualitfication(sProf);
		cout << "Enter joining date(dd/mm/yyy): ";
		cin >> jDate; facultyList[index].setJoinedDate(jDate);
		cout << "-----------------------------------------------------------------" << endl;
		cout << "Faculty member Successfully updated. Press any key to continue..." << endl;
	}
	else
	{
		cout << "---------------------------------------------------------------------------------" << endl;
		cout << "Faculty member not found with this Registration n.o. Press any key to continue..." << endl;
	}
}

/*
* Method to print the details of courses in list
*/
void Administrator::printFacultyList()
{
	if (facultyList.size() > 0)
	{
		Faculty *teacher = facultyList.data();
		for (int i = 0; i < facultyList.size(); i++)
		{
			(*teacher++).print();
			cout << endl;
		}
	}
	else
	{
		cout << "-----------------------------------------------------------------" << endl;
		cout << "No Faculty member found in the list. Press any key to continue..." << endl;
	}
}





/***************************************************************************
* Student Related Functions
/***************************************************************************
* Method to validate the student
*/
int Administrator::verifyStudent(int sId)
{
	for (int i = 0; i < studentList.size(); i++)
	{
		if (studentList[i].getRegistrationID() == sId)
		{
			return i;
		}
	}
	return -1;
}

/*
* Method to Add new student to list
*/
void Administrator::addNewStudent(Student student)
{
	studentList.push_back(student);
	cout << "--------------------------------------------------------" << endl;
	cout << "Student Added Successfully. Press any key to continue..." << endl;
}

/*
* Method to remove student from list
*/
void Administrator::removeStudent(int sId)
{
	int index = verifyStudent(sId);
	if (index != -1)
	{
		for (int i = index; i < facultyList.size() - 1; i++)
		{
			studentList[i] = studentList[i + 1];
		}
		studentList.pop_back();
		cout << "Student registered with " << sId << "is no more in the Data;" << endl;
		return;
	}
	cout << "--------------------------------------------" << endl;
	cout << "Student not found with this Registration n.o" << endl;
}

/*
* Method to update student from list
*/
void Administrator::updateStudent(int sId)
{
	string fname, lname, dob, gender, sDate, gDate; double gpa; int creditHours, age;
	int index = verifyStudent(sId);
	if (index != -1)
	{
		cout << "-------------------------------------------" << endl;
		cout << "-     Student found!!! Enter new Data     -" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Enter first name: ";
		cin >> fname; studentList[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; studentList[index].setLastName(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; studentList[index].setDateOfBirth(dob);
		cout << "Enter age: ";
		cin >> age; studentList[index].setAge(age);
		cout << "Enter Gender(Male/Female): ";
		cin >> gender; studentList[index].setGender(gender);
		cout << "Enter GPA: ";
		cin >> gpa; studentList[index].setGPA(gpa);
		cout << "Enter creditHours: ";
		cin >> creditHours; studentList[index].setCreditHours(creditHours);
		cout << "Enter start date(dd/mm/yyy): ";
		cin >> sDate; studentList[index].setStartDate(sDate);
		cout << "Enter graduation date(dd/mm/yyy): ";
		cin >> gDate; studentList[index].setGradDate(gDate);
	}
}

/*
* Method to print the details of courses in list
*/
void Administrator::printStudentList()
{
	if (studentList.size() > 0)
	{
		Student *student = studentList.data();
		for (int i = 0; i < studentList.size(); i++)
		{
			(*student++).print();
			cout << endl;
		}
	}
	else
	{

		cout << "----------------------------------------------------------------" << endl;
		cout << "There isn't any student registered. Press any key to continue..." << endl;
	}
}




/***************************************************************************
* Student Removal and Faculty Course Enrollment Related Functions
/***************************************************************************
* Method to add student to course
*/
void Administrator::addStudentToCourse(int sId, int cId)
{
	int cIndex = verifyCourse(cId);
	int sIndex = verifyStudent(sId);

	if ((cIndex != -1) && (sIndex != -1))
	{
		coursesList[cIndex].addStudent(studentList[sIndex]);
		handler.updateDataToFile(coursesList, count);
	}
	else
	{
		if (sIndex != -1)
			cout << "Course is not available under this registration number." << endl;
		
		if (sIndex == -1)
			cout << "Student is not registered under this registration number." << endl;
	}
}

/*
* Method to remove student from course 
*/
void Administrator::removeStudentFromCourse(int cId, int sId)
{
	int cIndex = verifyCourse(cId);
	int sIndex = verifyStudent(sId);

	if ((cIndex != -1) && (sIndex != -1))
	{
		Student *stList = coursesList[cIndex].getStudentList();
		for (int i = 0; i < coursesList[cIndex].getStudentListSize(); i++)
		{
			if (stList[i].getRegistrationID() == studentList[sIndex].getRegistrationID())
			{
				coursesList[cIndex].removeStudent(studentList[sIndex].getRegistrationID());
				return;
			}
		}
		handler.updateDataToFile(coursesList, count);
	}
	else
	{
		if (sIndex != -1)
			cout << "Course is not available under this registration number." << endl;

		if (sIndex == -1)
			cout << "Student is not registered under this registration number." << endl;
	}
}

/*
* Method to assign course to faculty member
*/
void Administrator::assignCourseToFacultyMember(int cId, int fId)
{
	int cIndex = verifyCourse(cId);
	int fIndex = verifyFacultyMember(fId);

	if ((cIndex != -1) && (fIndex != -1))
	{
		coursesList[cIndex].addProfessor(facultyList[fIndex]);
		handler.updateDataToFile(coursesList, count);
	}
}	


/*
* Method to read data from file
*/
void Administrator::readCoursesDataFromFile()
{
	vector<string> data = handler.readWholeFile();
	for (int i = 0; i < data.size(); i++)
	{
		string temp;
		Course tempCourse;
		Student tempSt;
		Faculty tempFac;
		int stCount = 0;
		int flag = 1;

		for (int j = 0; j < data[i].size(); j++)
		{
			if (data[i].at(j) == ',')
			{
				switch (flag)
				{
					case 1:
					{
						int tempID = atoi(temp.c_str());
						tempCourse.setCourseID(tempID);
						temp = "";
						flag++;
						break;
					}
					case 2:
					{
						tempCourse.setCourseName(temp);
						temp = "";
						flag++;
						break;
					}
					case 3:
					{
						int size = atoi(temp.c_str());
						tempCourse.setSize(size);
						temp = "";
						flag++;
						break;
					}
					case 4:
					{
						int tempID = atoi(temp.c_str());
						tempFac.setRegistrationID(tempID);
						temp = "";
						flag++;
						break;
					}
					case 5:
					{
						tempFac.setFirstName(temp);
						temp = "";
						flag++;
						break;
					}
					case 6:
					{
						tempFac.setLastName(temp);
						temp = "";
						flag++;
						break;
					}
					case 7:
					{
						tempFac.setDateOfBirth(temp);
						temp = "";
						flag++;
						break;
					}
					case 8:
					{
						int age = atoi(temp.c_str());
						tempFac.setAge(age);
						temp = "";
						flag++;
						break;
					}
					case 9:
					{
						tempFac.setGender(temp);
						temp = "";
						flag++;
						break;
					}
					case 10:
					{
						tempFac.setQualitfication(temp);
						temp = "";
						flag++;
						break;
					}
					case 11:
					{
						tempFac.setJoinedDate(temp);
						tempCourse.addProfessor(tempFac);
						facultyList.push_back(tempFac);
						temp = "";
						flag++;
						break;
					}
					case 12:
					{
						int tempID = atoi(temp.c_str());
						tempSt.setRegistrationID(tempID);
						temp = "";
						flag++;
						break;
					}
					case 13:
					{
						tempSt.setFirstName(temp);
						temp = "";
						flag++;
						break;
					}
					case 14:
					{
						tempSt.setLastName(temp);
						temp = "";
						flag++;
						break;
					}
					case 15:
					{
						tempSt.setDateOfBirth(temp);
						temp = "";
						flag++;
						break;
					}
					case 16:
					{
						int age = atoi(temp.c_str());
						tempSt.setAge(age);
						temp = "";
						flag++;
						break;
					}
					case 17:
					{
						tempSt.setGender(temp);
						temp = "";
						flag++;
						break;
					}
					case 18:
					{
						int courseInt = atoi(temp.c_str());
						tempSt.setCourseInterested(courseInt);
						temp = "";
						flag++;
						break;
					}
					case 19:
					{
						double gpa = atof(temp.c_str());
						tempSt.setGPA(gpa);
						temp = "";
						flag++;
						break;
					}
					case 20:
					{
						int cHrs = atoi(temp.c_str());
						tempSt.setCreditHours(cHrs);
						temp = "";
						flag++;
						break;
					}
					case 21:
					{
						tempSt.setStartDate(temp);
						temp = "";
						flag++;
						break;
					}
					case 22:
					{
						tempSt.setGradDate(temp);
						tempCourse.addStudent(tempSt);
						studentList.push_back(tempSt);
						Student nullStudent;
						tempSt = nullStudent;
						temp = "";
						flag = 12;
						break;
					}
				default:
					break;
				}
			}
			else
			{
				temp += data[i].at(j);

				if (j == data[i].size() - 1)
				{
					tempSt.setGradDate(temp);
					tempCourse.addStudent(tempSt);
					studentList.push_back(tempSt);
					Student nullStudent;
					tempSt = nullStudent;
					temp = "";
					flag = 12;
				}
			}
		}
		addCourse(tempCourse);
	}
}
