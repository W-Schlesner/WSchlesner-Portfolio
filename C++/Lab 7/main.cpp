#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include "University.h"

using namespace std;

int main(int args, char *argv[])
{
	int option = 0;

	do
	{
		system("CLS");
		cout << "*******************************" << endl;
		cout << "**       PROGRAM MENU        **" << endl;
		cout << "*******************************" << endl;
		cout << "1. Working with Array." << endl;
		cout << "2. Working with User define Likedlist." << endl;
		cout << "3. Working with STL Linkedlist." << endl;
		cout << "4. Working with Vectors." << endl;
		cout << "0. To Quit." << endl;
		cout << "-------------------------------------------------------" << endl;
		cout << "Enter your choice: ";
		cin >> option;

		if (option == 1)
		{
			system("CLS");
			int st, fSize;
			int choice;

			cout << "*******************************************************" << endl;
			cout << "**       MENU DESIGNED FOR WORKING WITH ARRAY        **" << endl;
			cout << "*******************************************************" << endl;
			cout << "Seates available for students: ";
			cin >> st;
			cout << "Vacancies available for faculty: ";
			cin >> fSize;

			University university(st, fSize);
			do
			{
				system("CLS");
				cout << "*******************************************************" << endl;
				cout << "**       MENU DESIGNED FOR WORKING WITH ARRAY        **" << endl;
				cout << "*******************************************************" << endl;
				cout << "1. Student Menu." << endl;
				cout << "2. Faculty Menu." << endl;
				cout << "0. To Quit." << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter your choice: ";
				cin >> choice;
				system("CLS");
				switch (choice)
				{
				case 1:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            STUDENT MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Student." << endl;
						cout << "2. To UPDATE Student." << endl;
						cout << "3. To DELETE Student." << endl;
						cout << "4. To DISPLAY Students." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW STUDENT            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, gender; string sDate, gDate, status; double gpa; int creditHours;
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
							cout << "Enter status: ";
							cin >> status; student.setStatus(status);
							university.addStudent(student, 0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateStudent(regNo, 0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteStudent(regNo, 0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            ALL STUDENTS            **" << endl;
							cout << "****************************************" << endl << endl << endl;
							university.displayStudents(0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				case 2:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            FACULTY MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Teacher." << endl;
						cout << "2. To UPDATE Teacher." << endl;
						cout << "3. To DELETE Teacher." << endl;
						cout << "4. To DISPLAY Faculty." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW TEACHER            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, qual, sProf, jDate, gender, dep;
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
							cin >> sProf; faculty.setSubject(sProf);
							cout << "Enter joining date(dd/mm/yyy): ";
							cin >> jDate; faculty.setJoinedDate(jDate);
							university.addTeacher(faculty, 0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateTeacher(regNo, 0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteTeacher(regNo, 0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            FULL FACULTY            **" << endl;
							cout << "****************************************" << endl << endl << endl;
							university.displayTeachers(0);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				}
			} while (choice != 0);
		}
		else if (option == 2)
		{
			int choice;
			University university;
			do
			{
				system("CLS");
				cout << "************************************************************" << endl;
				cout << "**       MENU DESIGNED FOR WORKING WITH LINKEDLIST        **" << endl;
				cout << "************************************************************" << endl;
				cout << "1. Student Menu." << endl;
				cout << "2. Faculty Menu." << endl;
				cout << "0. To Quit." << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter your choice: ";
				cin >> choice;
				system("CLS");
				switch (choice)
				{
				case 1:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            STUDENT MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Student." << endl;
						cout << "2. To UPDATE Student." << endl;
						cout << "3. To DELETE Student." << endl;
						cout << "4. To DISPLAY Students." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW STUDENT            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, gender; string sDate, gDate, status; double gpa; int creditHours;
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
							cout << "Enter status: ";
							cin >> status; student.setStatus(status);
							university.addStudent(student, 1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateStudent(regNo, 1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteStudent(regNo, 1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            ALL STUDENTS            **" << endl;
							cout << "****************************************" << endl;
							university.displayStudents(1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				case 2:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            FACULTY MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Teacher." << endl;
						cout << "2. To UPDATE Teacher." << endl;
						cout << "3. To DELETE Teacher." << endl;
						cout << "4. To DISPLAY Faculty." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW TEACHER            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, qual, sProf, jDate, gender, dep;
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
							cin >> sProf; faculty.setSubject(sProf);
							cout << "Enter joining date(dd/mm/yyy): ";
							cin >> jDate; faculty.setJoinedDate(jDate);
							university.addTeacher(faculty, 1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateTeacher(regNo, 1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteTeacher(regNo, 1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            FULL FACULTY            **" << endl;
							cout << "****************************************" << endl;
							university.displayTeachers(1);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				}
			} while (choice != 0);
		}
		else if (option == 3)
		{
			int choice;
			University university;
			do
			{
				system("CLS");
				cout << "**********************************************************" << endl;
				cout << "**       MENU DESIGNED FOR WORKING WITH STL LIST        **" << endl;
				cout << "**********************************************************" << endl;
				cout << "1. Student Menu." << endl;
				cout << "2. Faculty Menu." << endl;
				cout << "0. To Quit." << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter your choice: ";
				cin >> choice;
				system("CLS");
				switch (choice)
				{
				case 1:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            STUDENT MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Student." << endl;
						cout << "2. To UPDATE Student." << endl;
						cout << "3. To DELETE Student." << endl;
						cout << "4. To DISPLAY Students." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW STUDENT            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, gender; string sDate, gDate, status; double gpa; int creditHours;
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
							cout << "Enter status: ";
							cin >> status; student.setStatus(status);
							university.addStudent(student, 2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateStudent(regNo, 2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteStudent(regNo, 2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            ALL STUDENTS            **" << endl;
							cout << "****************************************" << endl;
							university.displayStudents(2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				case 2:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            FACULTY MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Teacher." << endl;
						cout << "2. To UPDATE Teacher." << endl;
						cout << "3. To DELETE Teacher." << endl;
						cout << "4. To DISPLAY Faculty." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW TEACHER            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, qual, sProf, jDate, gender, dep;
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
							cin >> sProf; faculty.setSubject(sProf);
							cout << "Enter joining date(dd/mm/yyy): ";
							cin >> jDate; faculty.setJoinedDate(jDate);
							university.addTeacher(faculty, 2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateTeacher(regNo, 2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteTeacher(regNo, 2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            FULL FACULTY            **" << endl;
							cout << "****************************************" << endl;
							university.displayTeachers(2);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				}
			} while (choice != 0);
		}
		else if (option == 4)
		{
			int choice;

			University university;
			do
			{
				system("CLS");
				cout << "*******************************************************" << endl;
				cout << "**       MENU DESIGNED FOR WORKING WITH VECTOR        **" << endl;
				cout << "*******************************************************" << endl;
				cout << "1. Student Menu." << endl;
				cout << "2. Faculty Menu." << endl;
				cout << "0. To Quit." << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "Enter your choice: ";
				cin >> choice;
				system("CLS");
				switch (choice)
				{
				case 1:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            STUDENT MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Student." << endl;
						cout << "2. To UPDATE Student." << endl;
						cout << "3. To DELETE Student." << endl;
						cout << "4. To DISPLAY Students." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW STUDENT            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, gender; string sDate, gDate, status; double gpa; int creditHours;
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
							cout << "Enter status: ";
							cin >> status; student.setStatus(status);
							university.addStudent(student, 3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateStudent(regNo, 3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE STUDENT            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteStudent(regNo, 3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            ALL STUDENTS            **" << endl;
							cout << "****************************************" << endl;
							university.displayStudents(3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				case 2:
				{
					int option;
					do
					{
						system("CLS");
						cout << "****************************************" << endl;
						cout << "**            FACULTY MENU            **" << endl;
						cout << "****************************************" << endl;
						cout << "1. To ADD Teacher." << endl;
						cout << "2. To UPDATE Teacher." << endl;
						cout << "3. To DELETE Teacher." << endl;
						cout << "4. To DISPLAY Faculty." << endl;
						cout << "0. To Main Menu." << endl;
						cout << "----------------------------------------" << endl;
						cin >> option;
						system("CLS");
						switch (option)
						{
						case 1:
						{
							cout << "*******************************************" << endl;
							cout << "**            ADD NEW TEACHER            **" << endl;
							cout << "*******************************************" << endl;

							int regNo, age; string fname, lname, dob, qual, sProf, jDate, gender, dep;
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
							cin >> sProf; faculty.setSubject(sProf);
							cout << "Enter joining date(dd/mm/yyy): ";
							cin >> jDate; faculty.setJoinedDate(jDate);
							university.addTeacher(faculty, 3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							cout << "******************************************" << endl;
							cout << "**            UPDATE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.updateTeacher(regNo, 3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							cout << "******************************************" << endl;
							cout << "**            DELETE TEACHER            **" << endl;
							cout << "******************************************" << endl;
							int regNo;
							cout << "Enter the Registration no: ";
							cin >> regNo;
							university.deleteTeacher(regNo, 3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            FULL FACULTY            **" << endl;
							cout << "****************************************" << endl;
							university.displayTeachers(3);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						default:
							cout << "Please make a valid Selection." << endl;
						}
					} while (option != 0);
					break;
				}
				}
			} while (choice != 0);
		}
		else if (option == 0)
		{
			exit(0);
		}
	} while (option != 0);
	system("pause");
	return 0;
}
