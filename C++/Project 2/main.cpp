#include <iostream>
#include <conio.h>
#include <string>
#include "Administrator.h"

using namespace std;

int main(int argc, char** argv)
{
	int choice;

	Administrator admin;
	do
	{
		system("CLS");
		cout << "*************************************************" << endl;
		cout << "**          COURSE MANAGEMENT SYSTEM           **" << endl;
		cout << "*************************************************" << endl;
		cout << "1. Login as Administrator" << endl;
		cout << "2. Login as Student." << endl;
		cout << "3. Exit from the System " << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "Enter your Category: ";
		cin >> choice;
		if (choice == 1)
		{
			string username, password;
			do
			{
				system("CLS");
				cout << "************************************************" << endl;
				cout << "**        ADMINISTRATOR VERIFICATION          **" << endl;
				cout << "************************************************" << endl;
				cout << "Enter your username: ";
				cin >> username;
				cout << "Enter your password: ";
				cin >> password;
				cout << "\n-----------------------------------------------" << endl;
			} while (admin.verifyAdmin(username, password) != 1);
			cout << "Successfully logged in...";
			_getch();

			do
			{
				system("CLS");
				cout << "***********************************************" << endl;
				cout << "**            ADMINISTRATOR MENU             **" << endl;
				cout << "***********************************************" << endl;
				cout << "01. Add new Course." << endl;
				cout << "02. Remove Course." << endl;
				cout << "03. Update course." << endl;

				cout << "04. Add new Faculty Member." << endl;
				cout << "05. Remove Faculty Member." << endl;
				cout << "06. Update Faculty Member." << endl;

				cout << "07. Add new Student" << endl;
				cout << "08. Remove a Student" << endl;
				cout << "09. Update Student" << endl;

				cout << "10. Remove a Student from Course" << endl;
				cout << "11. Assign Course to Faculty Member." << endl;

				cout << "12. Print Course List." << endl;
				cout << "13. Print Faculty List." << endl;
				cout << "14. Print Student List" << endl;

				cout << "0. Return to Main Menu" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Enter your Choice: ";
				cin >> choice;
				switch (choice)
				{
					case 1:
					{
						int courseId, noOfStudents;
						string courseName;

						do
						{
							cout << "Enter Course Number: ";
							cin >> courseId;
						}while(admin.verifyCourse(courseId) != -1);
						cout << "Enter Course Name: ";
						cin >> courseName;
						cout << "Enter maximum n.o of students for this course: ";
						cin >> noOfStudents;
						Course course(courseId, courseName, noOfStudents);
						admin.addCourse(course);
						_getch();
						break;
					}
					case 2:
					{
						int courseId;

						cout << "Enter Course Number: ";
						cin >> courseId;
						admin.removeCourse(courseId);
						_getch();
						break;
					}
					case 3:
					{
						int courseId;

						cout << "Enter Course Number: ";
						cin >> courseId;
						admin.updateCourse(courseId);
						_getch();
						break;	  
					}
					case 4:	 
					{
						system("CLS");
						
						cout << "*******************************************" << endl;
						cout << "**            ADD NEW TEACHER            **" << endl;
						cout << "*******************************************" << endl;

						int regNo, age; string fname, lname, dob, qual, jDate, gender;
						Faculty faculty;

						cout << "Enter registration n.o: ";
						cin >> regNo; faculty.setRegistrationID(regNo);
						cout << "Enter first name: ";
						cin >> fname; faculty.setFirstName(fname);
						cout << "Enter last name: ";
						cin >> lname; faculty.setLastName(lname);
						cout << "Enter Date of birth(dd/mm/yyyy): ";
						cin >> dob; faculty.setDateOfBirth(dob);
						cout << "Enter age: ";
						cin >> age; faculty.setAge(age);
						cout << "Enter Gender(Male/Female): ";
						cin >> gender; faculty.setGender(gender);
						cout << "Enter subject: ";
						cin >> qual; faculty.setQualitfication(qual);
						cout << "Enter joining date(dd/mm/yyy): ";
						cin >> jDate; faculty.setJoinedDate(jDate);
						admin.addNewFacultyMember(faculty);
						_getch();
						break;
					}
					case 5:
					{
						cout << "Enter faculty member registration n.o: ";
						int fId; cin >> fId;
						admin.removeFacultyMember(fId);
						_getch();
						break;
					}
					case 6:
					{
						cout << "Enter faculty member registration n.o: ";
						int fId; cin >> fId;
						admin.updateFacultyMember(fId);
						_getch();
						break;
					}
					case 7:
					{
						system("CLS");
						cout << "*******************************************" << endl;
						cout << "**            ADD NEW STUDENT            **" << endl;
						cout << "*******************************************" << endl;

						int regNo, age; string fname, lname, dob, gender; string sDate, gDate; double gpa; int creditHours;
						Student student;

						cout << "Enter registration n.o: ";
						cin >> regNo; student.setRegistrationID(regNo);
						cout << "Enter first name: ";
						cin >> fname; student.setFirstName(fname);
						cout << "Enter last name: ";
						cin >> lname; student.setLastName(lname);
						cout << "Enter Date of birth(dd/mm/yyyy): ";
						cin >> dob;	student.setDateOfBirth(dob);
						cout << "Enter age: ";
						cin >> age; student.setAge(age);
						cout << "Enter Gender(Male/Female): ";
						cin >> gender; student.setGender(gender);
						cout << "Enter GPA: ";
						cin >> gpa;	student.setGPA(gpa);
						cout << "Enter creditHours: ";
						cin >> creditHours;	student.setCreditHours(creditHours);
						cout << "Enter start date(dd/mm/yyy): ";
						cin >> sDate; student.setStartDate(sDate);
						cout << "Enter graduation date(dd/mm/yyy): ";
						cin >> gDate; student.setGradDate(gDate);
						admin.addNewStudent(student);
						_getch();
						break;
					}
					case 8:
					{
						cout << "Enter student registration n.o: ";
						int sId; cin >> sId;
						admin.removeStudent(sId);
						_getch();
						break;
					}
					case 9:
					{
						cout << "Enter student registration n.o: ";
						int sId; cin >> sId;
						admin.updateStudent(sId);
						_getch();
						break;
					}
					case 10:
					{
						cout << "Enter course id: ";
						int cId; cin >> cId;
						cout << "Enter student registration n.o: ";
						int sId; cin >> sId;
						admin.removeStudentFromCourse(cId, sId);
						_getch();
						break;
					}
					case 11:
					{
						cout << "Enter course id: ";
						int cId; cin >> cId;
						cout << "Enter faculty member registration n.o: ";
						int fId; cin >> fId;
						admin.assignCourseToFacultyMember(cId, fId);
						_getch();
						break;
					}
					case 12:
					{
						admin.printCourseList();
						_getch();
						break;
					}
					case 13:
					{
						admin.printFacultyList();
						_getch();
						break;
					}
					case 14:
					{
						admin.printStudentList();
						_getch();
						break;
					}
					case 0:
						break;
					default:
						system("CLS");
				}
			} while (choice != 0);
		}			 
		else if (choice == 2)
		{
			int sId = 0;
			do
			{
				system("CLS");
				cout << "************************************************" << endl;
				cout << "**        STUDENT VERIFICATION          **" << endl;
				cout << "************************************************" << endl;
				cout << "Enter your Registration N.o: ";
				cin >> sId;
				cout << "\n-----------------------------------------------" << endl;
			} while (admin.verifyStudent(sId) == -1);
			cout << "Successfully logged in...";
			_getch();

			do
			{
				system("CLS");
				cout << "*****************************************" << endl;
				cout << "**            STUDENT MENU             **" << endl;
				cout << "*****************************************" << endl;
				cout << "01. Register to Course." << endl;
				cout << "02. Leave Course." << endl;
				cout << "03. Change Course." << endl;

				cout << "0. Return to Main Menu" << endl;
				cout << "-----------------------------------------------" << endl;
				cout << "Enter your Choice: ";
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					int courseId;

					cout << "Enter Course Number: ";
					cin >> courseId;
					admin.addStudentToCourse(sId, courseId);
					_getch();
					break;
				}
				case 2:
				{
					cout << "Enter course id: ";
					int cId; cin >> cId;
					cout << "Enter student registration n.o: ";
					int sId; cin >> sId;
					admin.removeStudentFromCourse(cId, sId);
					_getch();
					break;
				}
				case 3:
				{
					cout << "Enter course id: ";
					int cId; cin >> cId;
					admin.removeStudentFromCourse(cId, sId);

					cout << "Enter new course id: ";
					cId; cin >> cId;
					admin.addStudentToCourse(sId, cId);
					_getch();
					break;
				}
				case 0:
					break;
				default:
					system("CLS");
				}
			} while (choice != 0);
		}
		else if (choice == 3)
		{
			exit(0);
		}
		else
		{
			cout << "Please Select Valid Option..." << endl;
		}

		system("CLS");
	} while (choice != 2);

	return 0;
}
