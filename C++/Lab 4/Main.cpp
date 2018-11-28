#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include "University.h"

using namespace std;

int main(int args, char *argv[])
{
	int st, fSize, nAccManagers, nAdmMembers, faciMembers, nItMembers, nRegistrars;
	cout << "Enter the number of vacancies for students to be enrolled in the university: ";
	cin >> st;
	cout << "Enter number of vacancies for faculty: ";
	cin >> fSize;
	cout << "Enter the number of vacancies for staff: ";
	cin >> nAccManagers;
	nAdmMembers = faciMembers = nItMembers = nRegistrars = nAccManagers;

	University university(st, fSize, nAccManagers, nAdmMembers, faciMembers, nItMembers, nRegistrars);
	int choice;
	do
	{
		system("CLS");
		cout << "********************************************************" << endl;
		cout << "**      WELCOME TO UNIVERSITY MANAGEMENT SYSTEM       **" << endl;
		cout << "********************************************************" << endl;
		cout << "1. Student Menu." << endl;
		cout << "2. Faculty Menu." << endl;
		cout << "3. Staff Menu." << endl;
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

							int regNo; string fname, lname, dob; string sDate, gDate; double gpa; int creditHours;
							Student student;

							cout << "Enter registration n.o: ";
							cin >> regNo;
							student.setRegistrationNo(regNo);
							cout << "Enter first name: ";
							cin >> fname; student.setFirstName(fname);
							cout << "Enter last name: ";
							cin >> lname; student.setLastname(lname);
							cout << "Enter Date of birth(dd/mm/yyyy): ";
							cin >> dob; student.setDateOfBirth(dob);
							cout << "Enter GPA: ";
							cin >> gpa; student.setGPA(gpa);
							cout << "Enter creditHours: ";
							cin >> creditHours; student.setCreditHours(creditHours);
							cout << "Enter start date(dd/mm/yyy): ";
							cin >> sDate; student.setStartDate(sDate);
							cout << "Enter graduation date: ";
							cin >> gDate; student.setGradDate(gDate);
							university.addStudent(student);
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
							university.updateStudent(regNo);
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
							university.deleteStudent(regNo);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            ALL STUDENTS            **" << endl;
							cout << "****************************************" << endl;
							university.displayStudents();
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

							int regNo; string fname, lname, dob, qual, sProf, jDate, gender;
							Faculty Teacher;

							cout << "Enter registration n.o: ";
							cin >> regNo;
							Teacher.setRegistrationNo(regNo);
							cout << "Enter first name: ";
							cin >> fname; Teacher.setFirstName(fname);
							cout << "Enter last name: ";
							cin >> lname; Teacher.setLastname(lname);
							cout << "Enter Date of birth(dd/mm/yyyy): ";
							cin >> dob; Teacher.setDateOfBirth(dob);
							cout << "Enter subject: ";
							cin >> sProf; Teacher.setSubject(sProf);
							cout << "Enter joining date(dd/mm/yyy): ";
							cin >> jDate; Teacher.setJoinedDate(jDate);
							cout << "Enter Gender: ";
							cin >> gender; Teacher.setGender(gender);
							university.addteacher(Teacher);
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
							university.updateTeacher(regNo);
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
							university.deleteTeacher(regNo);
							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							cout << "****************************************" << endl;
							cout << "**            FULL FACULTY            **" << endl;
							cout << "****************************************" << endl;
							university.displayTeachers();
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
			case 3:
			{
				int option;
				do
				{
					system("CLS");
					cout << "****************************************" << endl;
					cout << "**            STAFF MENU            **" << endl;
					cout << "****************************************" << endl;
					cout << "1. To ADD Staff." << endl;
					cout << "2. To UPDATE Staff." << endl;
					cout << "3. To DELETE Staff." << endl;
					cout << "4. To DISPLAY Staff." << endl;
					cout << "0. To Main Menu." << endl;
					cout << "----------------------------------------" << endl;
					cin >> option;
					system("CLS");
					switch (option)
					{
						case 1:
						{
							int select;
							cout << "*****************************************" << endl;
							cout << "**            ADD NEW STAFF            **" << endl;
							cout << "*****************************************" << endl;
							cout << "1. To ADD Administration Member." << endl;
							cout << "2. To ADD Facilities Member." << endl;
							cout << "3. To ADD IT Member." << endl;
							cout << "4. To ADD Registrar Member." << endl;
							cout << "----------------------------------------" << endl;
							cout << "Select your choice: ";
							cin >> select;
							switch (select)
							{
							case 1:
							{
								cout << "********************************************" << endl;
								cout << "**     ADD NEW ADMINISTRATION MEMBER      **" << endl;
								cout << "********************************************" << endl;

								int regNo; string fname, lname, dob; double monthlyWage; string staffType;
								Administrator member;

								cout << "Enter registration n.o: ";
								cin >> regNo;
								member.setRegistrationNo(regNo);
								cout << "Enter first name: ";
								cin >> fname; member.setFirstName(fname);
								cout << "Enter last name: ";
								cin >> lname; member.setLastname(lname);
								cout << "Enter Date of birth(dd/mm/yyyy): ";
								cin >> dob; member.setDateOfBirth(dob);
								cout << "Enter monthly wage: ";
								cin >> monthlyWage; member.setMonthlyWage(monthlyWage);
								cout << "Enter staff job: ";
								cin >> staffType; member.setstafJob(staffType);
								university.addAdminMember(member);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 2:
							{
								cout << "****************************************" << endl;
								cout << "**     ADD NEW FACILITIES MEMBER      **" << endl;
								cout << "****************************************" << endl;

								int regNo; string fname, lname, dob; double monthlyWage; string staffType;
								Facilities member;

								cout << "Enter registration n.o: ";
								cin >> regNo;
								member.setRegistrationNo(regNo);
								cout << "Enter first name: ";
								cin >> fname; member.setFirstName(fname);
								cout << "Enter last name: ";
								cin >> lname; member.setLastname(lname);
								cout << "Enter Date of birth(dd/mm/yyyy): ";
								cin >> dob; member.setDateOfBirth(dob);
								cout << "Enter monthly wage: ";
								cin >> monthlyWage; member.setMonthlyWage(monthlyWage);
								cout << "Enter staff job: ";
								cin >> staffType; member.setstafJob(staffType);
								university.addFacilitiesMember(member);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 3:
							{
								cout << "********************************" << endl;
								cout << "**     ADD NEW IT MEMBER      **" << endl;
								cout << "********************************" << endl;

								int regNo; string fname, lname, dob; double monthlyWage; string staffType;
								IT member;

								cout << "Enter registration n.o: ";
								cin >> regNo;
								member.setRegistrationNo(regNo);
								cout << "Enter first name: ";
								cin >> fname; member.setFirstName(fname);
								cout << "Enter last name: ";
								cin >> lname; member.setLastname(lname);
								cout << "Enter Date of birth(dd/mm/yyyy): ";
								cin >> dob; member.setDateOfBirth(dob);
								cout << "Enter monthly wage: ";
								cin >> monthlyWage; member.setMonthlyWage(monthlyWage);
								cout << "Enter staff job: ";
								cin >> staffType; member.setstafJob(staffType);
								university.addITMember(member);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 4:
							{

								cout << "***************************************" << endl;
								cout << "**     ADD NEW REGISTRAR MEMBER      **" << endl;
								cout << "***************************************" << endl;

								int regNo; string fname, lname, dob; double monthlyWage; string staffType;
								Registrar member;

								cout << "Enter registration n.o: ";
								cin >> regNo;
								member.setRegistrationNo(regNo);
								cout << "Enter first name: ";
								cin >> fname; member.setFirstName(fname);
								cout << "Enter last name: ";
								cin >> lname; member.setLastname(lname);
								cout << "Enter Date of birth(dd/mm/yyyy): ";
								cin >> dob; member.setDateOfBirth(dob);
								cout << "Enter monthly wage: ";
								cin >> monthlyWage; member.setMonthlyWage(monthlyWage);
								cout << "Enter staff job: ";
								cin >> staffType; member.setstafJob(staffType);
								university.addRegistrarMember(member);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							default:
								cout << "Please make a valid selection." << endl;

							}

							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 2:
						{
							int select;
							cout << "****************************************" << endl;
							cout << "**            UPDATE STAFF            **" << endl;
							cout << "****************************************" << endl;
							cout << "1. To UPDATE Administration Member." << endl;
							cout << "2. To UPDATE Facilities Member." << endl;
							cout << "3. To UPDATE IT Member." << endl;
							cout << "4. To UPDATE Registrar Member." << endl;
							cout << "----------------------------------------" << endl;
							cout << "Select your choice: ";
							cin >> select;
							switch (select)
							{
							case 1:
							{
								cout << "***************************************" << endl;
								cout << "**    UPDATE ADMINISTRATOR MEMBER    **" << endl;
								cout << "***************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.updateAdminMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 2:
							{
								cout << "******************************************" << endl;
								cout << "**        UPDATE FACILITY MEMBER        **" << endl;
								cout << "******************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.updateFacilitiesMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 3:
							{
								cout << "************************************" << endl;
								cout << "**        UPDATE IT MEMBER        **" << endl;
								cout << "************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.updateITMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 4:
							{
								cout << "*******************************************" << endl;
								cout << "**        UPDATE REGISTRAR MEMBER        **" << endl;
								cout << "*******************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.updateRegistrarMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							default:
								cout << "Please make a valid selection." << endl;

							}

							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 3:
						{
							int select;
							cout << "****************************************" << endl;
							cout << "**            DELETE STAFF            **" << endl;
							cout << "****************************************" << endl;
							cout << "1. To DELETE Administration Member." << endl;
							cout << "2. To DELETE Facilities Member." << endl;
							cout << "3. To DELETE IT Member." << endl;
							cout << "4. To DELETE Registrar Member." << endl;
							cout << "----------------------------------------" << endl;
							cout << "Select your choice: ";
							cin >> select;
							switch (select)
							{
							case 1:
							{
								cout << "***********************************************" << endl;
								cout << "**        DELETE ADMINISTRATOR MEMBER        **" << endl;
								cout << "***********************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.deleteAdminMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 2:
							{
								cout << "******************************************" << endl;
								cout << "**        DELETE FACILITY MEMBER        **" << endl;
								cout << "******************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.deleteFacilitiesMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 3:
							{
								cout << "************************************" << endl;
								cout << "**        DELETE IT MEMBER        **" << endl;
								cout << "************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.deleteITMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 4:
							{
								cout << "*******************************************" << endl;
								cout << "**        DELETE REGISTRAR MEMBER        **" << endl;
								cout << "*******************************************" << endl;
								int regNo;
								cout << "Enter the Registration no: ";
								cin >> regNo;
								university.deleteRegistrarMember(regNo);
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							default:
								cout << "Please make a valid selection." << endl;
							}

							cout << "Press any key to continue...";
							_getch();
							break;
						}
						case 4:
						{
							int select;
							cout << "*****************************************" << endl;
							cout << "**            DISPLAY STAFF            **" << endl;
							cout << "*****************************************" << endl;
							cout << "1. To DISPLAY Administration Member." << endl;
							cout << "2. To DISPLAY Facilities Member." << endl;
							cout << "3. To DISPLAY IT Member." << endl;
							cout << "4. To DISPLAY Registrar Member." << endl;
							cout << "----------------------------------------" << endl;
							cout << "Select your choice: ";
							cin >> select;
							switch (select)
							{
							case 1:
							{

								university.displayAdministrators();
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 2:
							{
								university.displayFacilitiesMembers();
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 3:
							{
								university.displayITMembers();
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							case 4:
							{
								university.displayRegistrarMembers();
								cout << "Press any key to continue...";
								_getch();
								break;
							}
							default:
								cout << "Please make a valid selection." << endl;
							}

							cout << "Press any key to continue...";
							_getch();
							break;
						}
					}
				} while (option != 0);
				break;

			case 0:
				exit(0);
			default:
				cout << "Please make a valid Selection." << endl;
			}
		}
	} while (choice != 0);
	system("pause");
	return 0;
}