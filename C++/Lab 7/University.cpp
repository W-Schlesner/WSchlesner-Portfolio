#include "University.h"

/*
* Non-parametrized Constructor for University class
*/
University::University()
{
	noOfStudents = 0; 
	stCounter = 0;

	facultySize = 0; 
	fCounter = 0;

	stHead = NULL; 
	facHead = NULL;
}

/*
* Parametrized Constructor for University class
*/
University::University(int st, int fSize)
{
	noOfStudents = st;
	students = new Student[noOfStudents];
	stCounter = 0;

	facultySize = fSize;
	faculty = new Faculty[facultySize];
	fCounter = 0;


	stHead = NULL;
}


/******************************************************************************/
/* Handing the data for Students
/******************************************************************************/
//Method to Enroll new students///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void University::addStudent(Student student, int choice)
{
	/*
	* This snippet of code is working for array imlementation
	*/
	if (choice == 0)
	{
		if (stCounter < noOfStudents)
		{
			students[stCounter++] = student;
		}
		else
			cout << "Seats are full" << endl;
	}
	/*
	* This snippet of code is working for user defined linkedlist imlementation
	*/
	else if (choice == 1)
	{
		StNode *st = new StNode();
		st->data = student;
		st->next = NULL;
		if (stHead == NULL)
		{
			stHead = st;
		}
		else
		{
			StNode *temp = stHead;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = st;
		}
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		studentList.push_back(student);
	}
	/*
	* This snippet of code is working for vector implementation
	*/
	else if (choice == 3)
	{
		studentVector.push_back(student);
	}
}

//Method to Update Student///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void University::updateStudent(int regNo, int choice)
{
	string fname, lname, dob, gender, sDate, gDate, status; double gpa; int creditHours, age;
	/*
	* This snippet of code is working for array imlementation
	*/
	if (choice == 0)
	{
		int index = searchStudent(regNo);
		if (index != -1)
		{
			cout << "-------------------------------------------" << endl;
			cout << "-     Student found!!! Enter new Data     -" << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Enter first name: ";
			cin >> fname; students[index].setFirstName(fname);
			cout << "Enter last name: ";
			cin >> lname; students[index].setLastName(lname);
			cout << "Enter Date of birth(dd/mm/yyyy): ";
			cin >> dob; students[index].setDateOfBirth(dob);
			cout << "Enter age: ";
			cin >> age; students[index].setAge(age);
			cout << "Enter Gender(Male/Female): ";
			cin >> gender; students[index].setGender(gender);
			cout << "Enter GPA: ";
			cin >> gpa; students[index].setGPA(gpa);
			cout << "Enter creditHours: ";
			cin >> creditHours; students[index].setCreditHours(creditHours);
			cout << "Enter start date(dd/mm/yyy): ";
			cin >> sDate; students[index].setStartDate(sDate);
			cout << "Enter graduation date(dd/mm/yyy): ";
			cin >> gDate; students[index].setGradDate(gDate);
			cout << "Enter status: ";
			cin >> status; students[index].setStatus(status);
		}
		else
			cout << "No Student Found with this Registration N.o." << endl;
	}
	/*
	* This snippet of code is working for user defined linkedlist imlementation
	*/
	else if (choice == 1)
	{
		StNode *temp = stHead;
		StNode *stUpdate = NULL;
		while (temp != NULL)
		{
			if (stHead->data.getRegistrationID() == regNo)
			{
				stUpdate = stHead;
				cout << "-------------------------------------------" << endl;
				cout << "-     Student found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				break;
			}
			else if ((temp->next->data.getRegistrationID() == regNo) && (temp->next->next != NULL))
			{
				stUpdate = stHead;
				cout << "-------------------------------------------" << endl;
				cout << "-     Student found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				break;
			}
			else if ((temp->next->next == NULL) && (temp->next->data.getRegistrationID() == regNo))
			{
				stUpdate = stHead;
				cout << "-------------------------------------------" << endl;
				cout << "-     Student found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				break;
			}
			temp = temp->next;
		}
		cout << "Enter first name: ";
		cin >> fname; stUpdate->data.setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; stUpdate->data.setLastName(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; stUpdate->data.setDateOfBirth(dob);
		cout << "Enter age: ";
		cin >> age; stUpdate->data.setAge(age);
		cout << "Enter Gender(Male/Female): ";
		cin >> gender; stUpdate->data.setGender(gender);
		cout << "Enter GPA: ";
		cin >> gpa; stUpdate->data.setGPA(gpa);
		cout << "Enter creditHours: ";
		cin >> creditHours; stUpdate->data.setCreditHours(creditHours);
		cout << "Enter start date(dd/mm/yyy): ";
		cin >> sDate; stUpdate->data.setStartDate(sDate);
		cout << "Enter graduation date(dd/mm/yyy): ";
		cin >> gDate; stUpdate->data.setGradDate(gDate);
		cout << "Enter status: ";
		cin >> status; stUpdate->data.setStatus(status);
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		for (list<Student>::iterator i = studentList.begin(); i != studentList.end(); i++)
		{
			if ((*i).getRegistrationID() == regNo)
			{																							 
				cout << "-------------------------------------------" << endl;
				cout << "-     Student found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;

				cout << "Enter first name: ";
				cin >> fname; (*i).setFirstName(fname);
				cout << "Enter last name: ";
				cin >> lname; (*i).setLastName(lname);
				cout << "Enter Date of birth(dd/mm/yyyy): ";
				cin >> dob; (*i).setDateOfBirth(dob);
				cout << "Enter Gender(Male/Female): ";
				cin >> gender; (*i).setGender(gender);
				cout << "Enter age: ";
				cin >> age; (*i).setAge(age);
				cout << "Enter GPA: ";
				cin >> gpa; (*i).setGPA(gpa);
				cout << "Enter creditHours: ";
				cin >> creditHours; (*i).setCreditHours(creditHours);
				cout << "Enter start date(dd/mm/yyy): ";
				cin >> sDate; (*i).setStartDate(sDate);
				cout << "Enter graduation date(dd/mm/yyy): ";
				cin >> gDate; (*i).setGradDate(gDate);
				cout << "Enter status: ";
				cin >> status; (*i).setStatus(status);
				return;
			}
		}
	}
	/*
	* This snippet of code is working for Vector implementation
	*/
	else if (choice == 3)
	{
		for (int index = 0; index < studentVector.size(); index++)
		{
			if (studentVector[index].getRegistrationID() == regNo)
			{
				cout << "-------------------------------------------" << endl;
				cout << "-     Student found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				cout << "Enter first name: ";
				cin >> fname; studentVector[index].setFirstName(fname);
				cout << "Enter last name: ";
				cin >> lname; studentVector[index].setLastName(lname);
				cout << "Enter Date of birth(dd/mm/yyyy): ";
				cin >> dob; studentVector[index].setDateOfBirth(dob);
				cout << "Enter age: ";
				cin >> age; studentVector[index].setAge(age);
				cout << "Enter Gender(Male/Female): ";
				cin >> gender; studentVector[index].setGender(gender);
				cout << "Enter GPA: ";
				cin >> gpa; studentVector[index].setGPA(gpa);
				cout << "Enter creditHours: ";
				cin >> creditHours; studentVector[index].setCreditHours(creditHours);
				cout << "Enter start date(dd/mm/yyy): ";
				cin >> sDate; studentVector[index].setStartDate(sDate);
				cout << "Enter graduation date(dd/mm/yyy): ";
				cin >> gDate; studentVector[index].setGradDate(gDate);
				cout << "Enter status: ";
				cin >> status; studentVector[index].setStatus(status);
				return;
			}
		}
		cout << "Student not found with this registration number." << endl;
	}
}

//Method to Delete student//////////////////////////////////////////////////////////////////////////////////////////////////////////
void University::deleteStudent(int regNO, int choice)
{
	/*
	* This snippet of code is working for Array implementation
	*/
	if (choice == 0)
	{
		int index = searchStudent(regNO);
		if (index != -1)
		{
			for (int i = index; i < stCounter - 1; i++)
			{
				students[i] = students[i + 1];
			}
			stCounter--;
			cout << "Student with " << regNO << " is no more in the Data;" << endl;
		}
		else
			cout << "Student not found with this Registration n.o" << endl;
	}
	/*
	* This snippet of code is working for user defined LinkedList implementation
	*/
	else if (choice == 1)
	{
		StNode *temp = stHead;
		Student deletedNode;
		while (temp != NULL)
		{
			if (stHead->data.getRegistrationID() == regNO)
			{
				deletedNode = stHead->data;
				stHead = stHead->next;
				cout << "Student with " << deletedNode.getRegistrationID() << " is no more in the Data;" << endl;
				return;
			}
			else if ((temp->next->data.getRegistrationID() == regNO) && (temp->next->next != NULL))
			{
				deletedNode = temp->next->data;
				temp->next = temp->next->next;
				cout << "Student with " << deletedNode.getRegistrationID() << " is no more in the Data;" << endl;
				return;
			}
			else if ((temp->next->next == NULL) && (temp->next->data.getRegistrationID() == regNO))
			{
				deletedNode = temp->next->data;
				temp->next = NULL;
				cout << "Student with " << deletedNode.getRegistrationID() << " is no more in the Data;" << endl;
				return;
			}
			temp = temp->next;
		}
		cout << "Student not found with this Registration n.o" << endl;
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		for (list<Student>::iterator i = studentList.begin(); i != studentList.end(); i++)
		{
			if ((*i).getRegistrationID() == regNO)
			{
				studentList.erase(i);
				cout << "Student with " << regNO << " is no more in the Data;" << endl;
				return;
			}
		}
	}
	/*
	* This snippet of code is working for Vector implementation
	*/
	else if (choice == 3)
	{
		for (int i = 0; i < studentVector.size(); i++)
		{
			if (studentVector[i].getRegistrationID() == regNO)
			{
				studentVector[i] = studentVector[i + 1];
				studentVector.pop_back();
				cout << "Student with " << regNO << " is no more in the Data;" << endl;
				return;
			}
		}
		cout << "Student not found with this Registration n.o" << endl;
	}
}

//Method to Search Student/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int University::searchStudent(int regNo)
{
	for (int i = 0; i < stCounter; i++)
	{
		if (students[i].getRegistrationID() == regNo)
			return i;
	}
	return -1;
}

//Method to Display Student/////////////////////////////////////////////////////////////////////////////////////////////
void University::displayStudents(int choice)
{
	/*
	* This snippet of code is working for Array implementation
	*/
	if (choice == 0)
	{
		for (int i = 0; i < stCounter; i++)
		{
			Person *polyPointer = &students[i];
			polyPointer->print();
			cout << endl << endl;
		}
	}
	/*
	* This snippet of code is working for user defined LinkedList implementation
	*/
	else if (choice == 1)
	{
		StNode *disp = stHead;
		while (disp != NULL)
		{
			disp->data.print();
			disp = disp->next;
		}
		cout << endl;
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		for (list<Student>::iterator i = studentList.begin(); i != studentList.end(); i++)
		{
			(*i).print();
			cout << endl;
		}
	}
	/*
	* This snippet of code is working for vector implementation
	*/
	else if (choice == 3)
	{
		for (int i = 0; i < studentVector.size(); i++)
		{
			studentVector[i].print();
			cout << endl;
		}
	}
}


/******************************************************************************/
/* Handing the data for Faculty Staff
/******************************************************************************/
//Method to Add new Teacher//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void University::addTeacher(Faculty teacher, int choice)
{
	/*
	* This snippet of code is working for Array implementation
	*/
	if (choice == 0)
	{
		if (fCounter < facultySize)
		{
			faculty[fCounter++] = teacher;
		}
		else
			cout << "Seats are full" << endl;
	}
	/*
	* This snippet of code is working for user defined LinkedList implementation
	*/
	else if (choice == 1)
	{
		FacNode *teach = new FacNode();
		teach->data = teacher;
		teach->next = NULL;
		if (facHead == NULL)
		{
			facHead = teach;
		}
		else
		{
			FacNode *temp = facHead;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = teach;
		}
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		facutyList.push_back(teacher);
	}
	/*
	* This snippet of code is working for vector implementation
	*/
	else if (choice == 3)
	{
		facultyVector.push_back(teacher);
	}
}

//Method to Update Teacher////////////////////////////////////////////////////////////////////////////////////////////////////
void University::updateTeacher(int regNo, int choice)
{
	string fname, lname, dob, gender, qual, sProf, jDate, dep; int age;
	
	/*
	* This snippet of code is working for Array implementation
	*/
	if (choice == 0)
	{
		int index = searchTeacher(regNo);
		if (index != -1)
		{
			cout << "-------------------------------------------" << endl;
			cout << "-     Teacher found!!! Enter new Data     -" << endl;
			cout << "-------------------------------------------" << endl;
			cout << "Enter first name: ";
			cin >> fname; faculty[index].setFirstName(fname);
			cout << "Enter last name: ";
			cin >> lname; faculty[index].setLastName(lname);
			cout << "Enter Date of birth(dd/mm/yyyy): ";
			cin >> dob; faculty[index].setDateOfBirth(dob);
			cout << "Enter Gender(Male/Female): ";
			cin >> gender; faculty[index].setGender(gender);
			cout << "Enter age: ";
			cin >> gender; faculty[index].setAge(age);
			cout << "Enter subject: ";
			cin >> sProf; faculty[index].setSubject(sProf);
			cout << "Enter joining date(dd/mm/yyy): ";
			cin >> jDate; faculty[index].setJoinedDate(jDate);
		}
		else
			cout << "No Teacher Found with this Registration N.o." << endl;
	}
	/*
	* This snippet of code is working for user defined LinkedList implementation
	*/
	else if (choice == 1)
	{
		FacNode *temp = facHead;
		FacNode *facUpdate = NULL;
		while (temp != NULL)
		{
			if (facHead->data.getRegistrationID() == regNo)
			{
				facUpdate = facHead;
				cout << "-------------------------------------------" << endl;
				cout << "-     Teacher found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				break;
			}
			else if ((temp->next->data.getRegistrationID() == regNo) && (temp->next->next != NULL))
			{
				facUpdate = facHead;
				cout << "-------------------------------------------" << endl;
				cout << "-     Teacher found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				break;
			}
			else if ((temp->next->next == NULL) && (temp->next->data.getRegistrationID() == regNo))
			{
				facUpdate = facHead;
				cout << "-------------------------------------------" << endl;
				cout << "-     Teacher found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				break;
			}
			temp = temp->next;
		}
		
		cout << "Enter first name: ";
		cin >> fname; facUpdate->data.setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; facUpdate->data.setLastName(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; facUpdate->data.setDateOfBirth(dob);
		cout << "Enter Gender(Male/Female): ";
		cin >> gender; facUpdate->data.setGender(gender);
		cout << "Enter age: ";
		cin >> gender; facUpdate->data.setAge(age);
		cout << "Enter subject: ";
		cin >> sProf; facUpdate->data.setSubject(sProf);
		cout << "Enter joining date(dd/mm/yyy): ";
		cin >> jDate; facUpdate->data.setJoinedDate(jDate);
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		for (list<Faculty>::iterator i = facutyList.begin(); i != facutyList.end(); i++)
		{
			if ((*i).getRegistrationID() == regNo)
			{
				cout << "-------------------------------------------" << endl;
				cout << "-     Teacher found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;

				cout << "Enter first name: ";
				cin >> fname; (*i).setFirstName(fname);
				cout << "Enter last name: ";
				cin >> lname; (*i).setLastName(lname);
				cout << "Enter Date of birth(dd/mm/yyyy): ";
				cin >> dob; (*i).setDateOfBirth(dob);
				cout << "Enter Gender(Male/Female): ";
				cin >> gender; (*i).setGender(gender);
				cout << "Enter age: ";
				cin >> age; (*i).setAge(age);
				cout << "Enter subject: ";
				cin >> sProf; (*i).setSubject(sProf);
				cout << "Enter joining date(dd/mm/yyy): ";
				cin >> jDate; (*i).setJoinedDate(jDate);
				return;
			}
		}
	}
	/*
	* This snippet of code is working for Vector implementation
	*/
	else if (choice == 3)
	{
		for (int index = 0; index < facultyVector.size(); index++)
		{
			if (facultyVector[index].getRegistrationID() == regNo)
			{
				cout << "-------------------------------------------" << endl;
				cout << "-     Teacher found!!! Enter new Data     -" << endl;
				cout << "-------------------------------------------" << endl;
				cout << "Enter first name: ";
				cin >> fname; facultyVector[index].setFirstName(fname);
				cout << "Enter last name: ";
				cin >> lname; facultyVector[index].setLastName(lname);
				cout << "Enter Date of birth(dd/mm/yyyy): ";
				cin >> dob; facultyVector[index].setDateOfBirth(dob);
				cout << "Enter age: ";
				cin >> age; facultyVector[index].setAge(age);
				cout << "Enter Gender(Male/Female): ";
				cin >> gender; facultyVector[index].setGender(gender);
				cout << "Enter subject: ";
				cin >> sProf; facultyVector[index].setSubject(sProf);
				cout << "Enter joining date(dd/mm/yyy): ";
				cin >> jDate; facultyVector[index].setJoinedDate(jDate);
				return;
			}
		}
		cout << "Teacher not found with this registration number." << endl;
	}

}

//Method to Delete teacher/////////////////////////////////////////////////////////////////////////////////////////////////////////////
void University::deleteTeacher(int regNo, int choice)
{
	/*
	* This snippet of code is working for Array implementation
	*/
	if (choice == 0)
	{
		int index = searchTeacher(regNo);
		if (index != -1)
		{
			for (int i = index; i < fCounter - 1; i++)
			{
				faculty[i] = faculty[i + 1];
			}
			fCounter--;
			cout << "Teacher with " << regNo << "is no more in the Data;" << endl;
		}
		else
			cout << "Teacher not found with this Registration n.o" << endl;
	}
	/*
	* This snippet of code is working for user defined LinkedList implementation
	*/
	else if (choice == 1)
	{
		FacNode *temp = facHead;
		Faculty deletedNode;
		while (temp != NULL)
		{
			if (facHead->data.getRegistrationID() == regNo)
			{
				deletedNode = facHead->data;
				facHead = facHead->next;
				cout << "Teacher with " << deletedNode.getRegistrationID() << "is no more in the Data;" << endl;
				return;
			}
			else if ((temp->next->data.getRegistrationID() == regNo) && (temp->next->next != NULL))
			{
				deletedNode = temp->next->data;
				temp->next = temp->next->next;
				cout << "Teacher with " << deletedNode.getRegistrationID() << "is no more in the Data;" << endl;
				return;
			}
			else if ((temp->next->next == NULL) && (temp->next->data.getRegistrationID() == regNo))
			{
				deletedNode = temp->next->data;
				temp->next = NULL;
				cout << "Teacher with " << deletedNode.getRegistrationID() << "is no more in the Data;" << endl;
				return;
			}
			temp = temp->next;
		}
		cout << "Teacher not found with this Registration n.o" << endl;
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		for (list<Faculty>::iterator i = facutyList.begin(); i != facutyList.end(); i++)
		{
			if ((*i).getRegistrationID() == regNo)
			{
				facutyList.erase(i);
				cout << "Teacher with " << regNo << "is no more in the Data;" << endl;
				return;
			}
		}
	}
	/*
	* This snippet of code is working for Vector implementation
	*/
	else if (choice == 3)
	{
		for (int i = 0; i < facultyVector.size(); i++)
		{
			if (facultyVector[i].getRegistrationID() == regNo)
			{
				facultyVector[i] = facultyVector[i + 1];
				facultyVector.pop_back();
				cout << "Teacher with " << regNo << "is no more in the Data;" << endl;
				return;
			}
		}
		cout << "Teacher not found with this Registration n.o" << endl;
	}
}

//Method to Search Teacher///////////////////////////////////////////////////////////////////////////////////////////////////////
int University::searchTeacher(int regNo)
{
	for (int i = 0; i < fCounter; i++)
	{
		if (faculty[i].getRegistrationID() == regNo)
			return i;
	}
	return -1;
}

//Method to Display teacher data////////////////////////////////////////////////////////////////////////////////////////////////////
void University::displayTeachers(int choice)
{
	/*
	* This snippet of code is working for Array implementation
	*/
	if (choice == 0)
	{
		for (int i = 0; i < fCounter; i++)
		{
			Person *polyPointer = &faculty[i];
			polyPointer->print();
			cout << endl << endl;
		}
	}
	/*
	* This snippet of code is working for user defined linkedlist implementation
	*/
	else if (choice == 1)
	{
		FacNode *disp = facHead;
		while (disp != NULL)
		{
			disp->data.print();
			disp = disp->next;
		}
		cout << endl;
	}
	/*
	* This snippet of code is working for STL List implementation
	*/
	else if (choice == 2)
	{
		for (list<Faculty>::iterator i = facutyList.begin(); i != facutyList.end(); i++)
		{
			(*i).print();
			cout << endl;
		}
	}
	/*
	* This snippet of code is working for Vector implementation
	*/
	else if (choice == 3)
	{
		Faculty *teacher = facultyVector.data();
		for (int i = 0; i < facultyVector.size(); i++)
		{
			(*(teacher++)).print();
			cout << endl;
		}
	}
}
