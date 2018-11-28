#include "Handler.h"

using namespace std;
/*
* Non-parameterized constructor
*/
Handler::Handler()
{
	key = 't';
}

/*
* Method to be used for saving the data to the file (appending of file)
*/
void Handler::saveDataToFile(Course course)
{
	outFile.open("Data file.txt", ios::out | ios::app);
	outFile << encrypt(course) << endl;
	outFile.close();
}

/*
* Method to be used for upadting the data in the file
*/
void Handler::updateDataToFile(Course courses[], int count)
{
	outFile.open("Data file.txt", ios::out | ios::trunc);
	outFile.clear();
	for(int i= 0; i < count; i++)
	{
		outFile << encrypt(courses[i]) << endl;
	}
	outFile.close();
}

/*
* Method to be used for encrypting the data of the customer
*/
string Handler::encrypt(Course course)
{
	ostringstream stream;
	stream << course.getCourseID() << "," << course.getCourseName() << "," 
		   << course.getCourseName() << "," << course.getProfessorDetails() << ",";
	Student *studentList = course.getStudentList();
	for (int i = 0; i < course.getStudentListSize(); i++)
	{
		stream << studentList[i].getRegistrationID() << "," << studentList[i].getFirstName() << ","
			<< studentList[i].getLastName() << "," << studentList[i].getDateOfBirth() << ","
			<< studentList[i].getAge() << "," << studentList[i].getGender() << ","
			<< studentList[i].getCourseInterested() << "," << studentList[i].getGPA() << ","
			<< studentList[i].getCreditHours() << "," << studentList[i].getStartDate() << ","
			<< studentList[i].getGradDate() << ",";
	}
	string courseData = stream.str();
	
	for (int i = 0; i < courseData.length(); i++)
		courseData[i] = courseData[i] + key;

	return courseData;
}

/*
* Method to be used for decrypting the data of the customer read from the file
*/
string Handler::decrypt(string line)
{
	string data = line;
	for (int i = 0; i < data.length(); i++)
		data[i] = data[i] - key;
	return data;
}

/*
* Method to be used for reading all the previous record of customers from file
*/
vector<string> Handler::readWholeFile()
{
	/*
	* in this method each line is stored in the vector of string so we can convert it back to object format.
	*/
	vector<string> data;
	inFile.open("Data file.txt");

	if (inFile.good())
	{
		cout << "File found!!!" << endl;
		cout << "----------------------------" << endl;
		cout << "Press any key to continue...";
		string line;
		while (!inFile.eof())
		{
			inFile >> line;
			//cout << "\nLine before decryption: " << line << endl;
			line = decrypt(line);
			//cout << "Line after decryption: " << line << endl << endl;
			data.push_back(line);
		}
		inFile.close();
		inFile.open("Data file.txt", ios::out | ios::trunc);
		inFile.close();
		/*
		* Removing last element from vector bcz last line in the file was empty and second last line
		* was copied twice so we removed one element
		*/
		data.pop_back();
		return data;
	}
	else
	{
		cout << "File not found!!!" << endl;
		cout << "----------------------------" << endl;
		cout << "Press any key to continue...";
		_getch();
	}
	return data;
}
