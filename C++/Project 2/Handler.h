/*
 * Creating Header file for Handler 
 */

#ifndef HANDLER_HEADER
#define HANDLER_HEADER

 /*
 * Importing the directories
 */
#include <iostream>
#include <sstream>
#include <conio.h>
#include <fstream>
#include <string>	
#include <vector>
#include <stdlib.h>	 
#include "Course.h"
#include "Student.h"

using namespace std;

class Handler
{	/*
	* Data member sto be used in the project
	*/
private:
	ofstream outFile;
	ifstream inFile;
	char key;
public:
	/*
	* Non-parameterized constructor
	*/
	Handler();

	/*
	 * Method to be used for saving the data to the file (appending of file)
	 */
	void saveDataToFile(Course);

	/*
	* Method to be used for upadting the data in the file
	*/
	void updateDataToFile(Course courses[], int);


	/*
	* Method to be used for encrypting the data of the customer
	*/
	string encrypt(Course);

	/*
	* Method to be used for decrypting the data of the courses read from the file
	*/
	string decrypt(string);

	/*
	* Method to be used for reading all the previous record of courses from file
	*/
	vector<string> readWholeFile();
};

#endif //HANDLER_HEADER
