#ifndef LOGHANDLER_HEADER
#define LOGHANDLER_HEADER

#include "Handler.h"

using namespace std;

class LogFileClass : public Handler
{
	/*
	* Data member sto be used in the project
	*/
private:
	char filename[20];
	ofstream logWriteFile;
	ifstream logReadFile;
public:
	/*
	* Non-parameterized constructor
	*/
	LogFileClass();

	/*
	* Method to be used for saving the data to the file (appending of file)
	*/
	void saveDataToFile(string);

	/*
	* Method to be used for read the data from the file
	*/
	void loadDataFromFile();
};

#endif //LOGHANDLER_HEADER
