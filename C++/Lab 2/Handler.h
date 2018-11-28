/*
 * Creating Header file for Handler 
 */

#ifndef HANDLER_HEADER
#define HANDLER_HEADER

 
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "Client.h"

using namespace std;

class Handler
{	
private:
	ofstream outFile;
	ifstream inFile;
	char key;
public:
	
	Handler();

	/*
	 * Method to be used for saving the data to the file (appending of file)
	 */
	void saveDataToFile(Client);

	/*
	* Method to be used for upadting the data in the file
	*/
	void updateDataToFile(Client clients[], int);


	/*
	* Method to be used for encrypting the data of the customer
	*/
	string encrypt(Client);

	/*
	* Method to be used for decrypting the data of the customer read from the file
	*/
	string decrypt(string);

	/*
	* Method to be used for reading all the previous record of customers from file
	*/
	vector<string> readWholeFile();
};

#endif 
