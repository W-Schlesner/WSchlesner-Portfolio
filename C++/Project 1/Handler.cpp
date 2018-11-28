#include "Handler.h"
#include <conio.h>
#include <sstream>
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
void Handler::saveDataToFile(Client client)
{
	outFile.open("Data file.txt", ios::out | ios::app);
	outFile << encrypt(client) << endl;
	outFile.close();
}

/*
* Method to be used for upadting the data in the file
*/
void Handler::updateDataToFile(Client clients[], int count)
{
	outFile.open("Data file.txt", ios::out | ios::trunc);
	outFile.clear();
	for(int i= 0; i < count; i++)
	{
		outFile << encrypt(clients[i]) << endl;
	}
	outFile.close();
}

/*
* Method to be used for encrypting the data of the customer
*/
string Handler::encrypt(Client client)
{
	ostringstream stream;
	stream << client.getAccount()->getAccountType() << "," << client.getAccount()->getAccountNumber() << "," << client.getFirstName() << "," << client.getLastName() << "," << client.getAccount()->getCashAmount();
	string clientData = stream.str();
	
	for (int i = 0; i < clientData.length(); i++)
		clientData[i] = clientData[i] + key;

	return clientData;
}

/*
* Method to be used for decrypting the data of the customer read from the file
*/
string Handler::decrypt(string line)
{
	string clientData = line;
	for (int i = 0; i < clientData.length(); i++)
		clientData[i] = clientData[i] - key;
	return clientData;
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
		string line;
		while (!inFile.eof())
		{
			inFile >> line;
			//cout << "Line before decryption: " << line << endl;
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
	}
	return data;
}
