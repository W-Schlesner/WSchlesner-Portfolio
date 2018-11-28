#include "LogHandler.h"

/*
* Non-parameterized constructor
*/
LogFileClass::LogFileClass()
{
	strcpy(filename, "Banking Log File.txt");
}

/*
* Method to be used for saving the data to the file (appending of file)
*/
void LogFileClass::saveDataToFile(string data)
{
	logWriteFile.open(filename, ios::out | ios::app);
	logWriteFile << data << endl;
	logWriteFile.close();
}

/*
* Method to be used for reading the data from the file
*/
void LogFileClass::loadDataFromFile()
{
	logReadFile.open(filename);
	if (logReadFile.bad())
	{
		cout << "File not found or Error in Reading data." << endl;
	}
	else
	{
		string data = "";
		while (!logReadFile.eof())
		{
			getline(logReadFile, data);
			cout << data << endl;
			data = "";
		}
	}
	logReadFile.close();
}
