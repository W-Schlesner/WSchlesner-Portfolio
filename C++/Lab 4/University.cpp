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

	noOfAdministrationMembers = 0;
	adCounter = 0;

	noOfFacilitiesMembers = 0;
	facCounter = 0;

	noOfItMembers = 0;
	itCounter = 0;

	noOfRegistrars = 0;
	regCounter = 0;

}

/*
* Parametrized Constructor for University class
*/
University::University(int st, int fSize, int nAccManagers, int nAdmMembers, int faciMembers, int nItMembers, int nRegistrars)
{
	noOfStudents = st;
	students = new Student[noOfStudents];
	stCounter = 0;

	facultySize = fSize;
	faculty = new Faculty[facultySize];
	fCounter = 0;

	noOfAdministrationMembers = nAdmMembers;
	administrators = new Administrator[noOfAdministrationMembers];
	adCounter = 0;

	noOfFacilitiesMembers = faciMembers;
	facilitators = new Facilities[noOfFacilitiesMembers];
	facCounter = 0;

	noOfItMembers = nItMembers;
	itMembers = new IT[noOfItMembers];
	itCounter = 0;

	noOfRegistrars = nRegistrars;
	registrars = new Registrar[noOfRegistrars];
	regCounter = 0;
}


/******************************************************************************/
/* Handing the data for Students
/******************************************************************************/
//Method to Enroll new students
void University::addStudent(Student student)
{
	if (stCounter < noOfStudents)
	{
		students[stCounter++] = student;
	}
	else
		cout << "Seats are full" << endl;
}

//Method to Update Student
void University::updateStudent(int regNo)
{
	int index = searchStudent(regNo);
	if (index != -1)
	{
		string fname, lname, dob, sDate, gDate; double gpa; int creditHours;
		cout << "Enter first name: ";
		cin >> fname; students[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; students[index].setLastname(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; students[index].setDateOfBirth(dob);
		cout << "Enter GPA: ";
		cin >> gpa; students[index].setGPA(gpa);
		cout << "Enter creditHours: ";
		cin >> creditHours; students[index].setCreditHours(creditHours);
		cout << "Enter start date(dd/mm/yyy): ";
		cin >> sDate; students[index].setStartDate(sDate);
		cout << "Enter graduation date: ";
		cin >> gDate; students[index].setGradDate(gDate);
	}
	else
		cout << "No Student Found with this Registration N.o." << endl;
}

//Method to Delete student
void University::deleteStudent(int regNO)
{
	int index = searchStudent(regNO);
	if (index != -1)
	{
		for (int i = index; i < stCounter - 1; i++)
		{
			students[i] = students[i + 1];
		}
		stCounter--;
		cout << "Student with " << regNO << "is no more in the Data;" << endl;
	}
	else
		cout << "Student not found with this Registration n.o" << endl;
}

//Method to Search Student
int University::searchStudent(int regNo)
{
	for (int i = 0; i < stCounter; i++)
	{
		if (students[i].getRegistrationNo() == regNo)
			return i;
	}
	return -1;
}

//Method to Display Student
void University::displayStudents()
{
	for (int i = 0; i < stCounter; i++)
	{
		students[i].displayDetails();
		cout << endl << endl;
	}
}


/******************************************************************************/
/* Handing the data for Faculty Staff
/******************************************************************************/
//Method to Add new Teacher
void University::addteacher(Faculty teacher)
{
	if (fCounter < facultySize)
	{
		faculty[fCounter++] = teacher;
	}
	else
		cout << "Seats are full" << endl;
}

//Method to Update Teacher
void University::updateTeacher(int regNo)
{
	int index = searchTeacher(regNo);
	if (index != -1)
	{
		string fname, lname, dob, qual, sProf, jDate, gender;
		cout << "Enter first name: ";
		cin >> fname; faculty[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; faculty[index].setLastname(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; faculty[index].setDateOfBirth(dob);
		cout << "Enter subject: ";
		cin >> sProf; faculty[index].setSubject(sProf);
		cout << "Enter joining date(dd/mm/yyy): ";
		cin >> jDate; faculty[index].setJoinedDate(jDate);
		cout << "Enter Gender: ";
		cin >> gender; faculty[index].setGender(gender);
	}
	else
		cout << "No Teacher Found with this Registration N.o." << endl;
}

//Method to Delete teacher
void University::deleteTeacher(int regNo)
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

//Method to Search Teacher
int University::searchTeacher(int regNo)
{
	for (int i = 0; i < fCounter; i++)
	{
		if (faculty[i].getRegistrationNo() == regNo)
			return i;
	}
	return -1;
}

//Method to Display teacher data
void University::displayTeachers()
{
	for (int i = 0; i < fCounter; i++)
	{
		faculty[i].displayDetails();
		cout << endl << endl;
	}
}


/******************************************************************************/
/* Handing the data for Administration Staff
/******************************************************************************/
//Method to Add Administration member
void University::addAdminMember(Administrator adminMember)
{
	if (adCounter < noOfAdministrationMembers)
	{
		administrators[adCounter++] = adminMember;
	}
	else
		cout << "Seats are full" << endl;
}

//Method to Update Administration member
void University::updateAdminMember(int regNo)
{
	int index = searchAdminMember(regNo);
	if (index != -1)
	{
		string fname, lname, dob, staffType; int wage;
		cout << "Enter first name: ";
		cin >> fname; administrators[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; administrators[index].setLastname(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; administrators[index].setDateOfBirth(dob);
		cout << "Enter staff type: ";
		cin >> staffType; administrators[index].setstafJob(dob);
		cout << "Enter monthy wage: ";
		cin >> wage; administrators[index].setMonthlyWage(wage);
	}
	else
		cout << "No Data Found with this Registration N.o." << endl;
}

//Method to Delete Administration member
void University::deleteAdminMember(int regNo)
{
	int index = searchAdminMember(regNo);
	if (index != -1)
	{
		for (int i = index; i < adCounter - 1; i++)
		{
			administrators[i] = administrators[i + 1];
		}
		adCounter--;
		cout << "Administrator with " << regNo << "is no more in the Data;" << endl;
	}
	else
		cout << "Administrator not found with this Registration n.o" << endl;
}

//Method to Search Administration member
int University::searchAdminMember(int regNo)
{
	for (int i = 0; i < adCounter; i++)
	{
		if (administrators[i].getRegistrationNo() == regNo)
			return i;
	}
	return -1;
}

//Method to Display Administration members
void University::displayAdministrators()
{
	for (int i = 0; i < adCounter; i++)
	{
		administrators[i].displayDetails();
		cout << endl << endl;
	}
}




/******************************************************************************/
/* Handing the data for facilities Staff
/******************************************************************************/
//Method to Add new facilitator
void University::addFacilitiesMember(Facilities facMem)
{
	if (facCounter < noOfFacilitiesMembers)
	{
		facilitators[facCounter++] = facMem;
	}
	else
		cout << "Seats are full" << endl;
}

//Method to Update facilitator
void University::updateFacilitiesMember(int regNo)
{
	int index = searchFacilitiesMember(regNo);
	if (index != -1)
	{
		string fname, lname, dob, staffType; double wage;
		cout << "Enter first name: ";
		cin >> fname; facilitators[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; facilitators[index].setLastname(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; facilitators[index].setDateOfBirth(dob);
		cout << "Enter staff type: ";
		cin >> staffType; facilitators[index].setstafJob(dob);
		cout << "Enter monthy wage: ";
		cin >> wage; facilitators[index].setMonthlyWage(wage);
	}
	else
		cout << "No Data Found with this Registration N.o." << endl;
}

//Method to Delete facilitator
void University::deleteFacilitiesMember(int regNo)
{
	int index = searchFacilitiesMember(regNo);
	if (index != -1)
	{
		for (int i = index; i < facCounter - 1; i++)
		{
			facilitators[i] = facilitators[i + 1];
		}
		facCounter--;
		cout << "Facilitator with " << regNo << "is no more in the Data;" << endl;
	}
	else
		cout << "Facilitator not found with this Registration n.o" << endl;
}

//Method to Search facilitator
int University::searchFacilitiesMember(int regNo)
{
	for (int i = 0; i < facCounter; i++)
	{
		if (facilitators[i].getRegistrationNo() == regNo)
			return i;
	}
	return -1;
}

//Method to Display all facilitators
void University::displayFacilitiesMembers()
{
	for (int i = 0; i < facCounter; i++)
	{
		facilitators[i].displayDetails();
		cout << endl << endl;
	}
}


/******************************************************************************/
/* Handing the data for IT Staff
/******************************************************************************/
//Method to Add new IT member
void University::addITMember(IT itMem)
{
	if (itCounter < noOfItMembers)
	{
		itMembers[itCounter++] = itMem;
	}
	else
		cout << "Seats are full" << endl;
}

//Method to Update IT member
void University::updateITMember(int regNo)
{
	int index = searchITMember(regNo);
	if (index != -1)
	{
		string fname, lname, dob, staffType; double wage;
		cout << "Enter first name: ";
		cin >> fname; itMembers[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; itMembers[index].setLastname(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; itMembers[index].setDateOfBirth(dob);
		cout << "Enter staff type: ";
		cin >> staffType; itMembers[index].setstafJob(dob);
		cout << "Enter monthy wage: ";
		cin >> wage; itMembers[index].setMonthlyWage(wage);
	}
	else
		cout << "No Data Found with this Registration N.o." << endl;
}

//Method to Delete IT member
void University::deleteITMember(int regNo)
{
	int index = searchITMember(regNo);
	if (index != -1)
	{
		for (int i = index; i < itCounter - 1; i++)
		{
			itMembers[i] = itMembers[i + 1];
		}
		itCounter--;
		cout << "IT member with " << regNo << "is no more in the Data;" << endl;
	}
	else
		cout << "IT member not found with this Registration n.o" << endl;
}

//Method to Search IT member
int University::searchITMember(int regNo)
{
	for (int i = 0; i < itCounter; i++)
	{
		if (itMembers[i].getRegistrationNo() == regNo)
			return i;
	}
	return -1;
}

//Method to Display all IT members
void University::displayITMembers()
{
	for (int i = 0; i < itCounter; i++)
	{
		itMembers[i].displayDetails();
		cout << endl << endl;
	}
}


/******************************************************************************/
/* Handing the data for Registrars
/******************************************************************************/
//Method to Add new Registrar
void University::addRegistrarMember(Registrar registrar)
{
	if (regCounter < noOfRegistrars)
	{
		registrars[regCounter++] = registrar;
	}
	else
		cout << "Seats are full" << endl;
}

//Method to Update Registrar
void University::updateRegistrarMember(int regNo)
{
	int index = searchRegistrarMember(regNo);
	if (index != -1)
	{
		string fname, lname, dob, staffType; int wage;
		cout << "Enter first name: ";
		cin >> fname; registrars[index].setFirstName(fname);
		cout << "Enter last name: ";
		cin >> lname; registrars[index].setLastname(lname);
		cout << "Enter Date of birth(dd/mm/yyyy): ";
		cin >> dob; registrars[index].setDateOfBirth(dob);
		cout << "Enter staff type: ";
		cin >> staffType; registrars[index].setstafJob(dob);
		cout << "Enter monthy wage: ";
		cin >> wage; registrars[index].setMonthlyWage(wage);
	}
	else
		cout << "No Data Found with this Registration N.o." << endl;
}

//Method to Delete Registrar
void University::deleteRegistrarMember(int regNo)
{
	int index = searchRegistrarMember(regNo);
	if (index != -1)
	{
		for (int i = index; i < regCounter - 1; i++)
		{
			registrars[i] = registrars[i + 1];
		}
		regCounter--;
		cout << "Registrar with " << regNo << "is no more in the Data;" << endl;
	}
	else
		cout << "Registrar not found with this Registration n.o" << endl;
}

//Method to Search Registrar
int University::searchRegistrarMember(int regNo)
{
	for (int i = 0; i < regCounter; i++)
	{
		if (registrars[i].getRegistrationNo() == regNo)
			return i;
	}
	return -1;
}

//Method to Display all Registrars
void University::displayRegistrarMembers()
{
	for (int i = 0; i < regCounter; i++)
	{
		registrars[i].displayDetails();
		cout << endl << endl;
	}
}
