#include "Handler.h"
#include <conio.h>
#include <sstream>
using namespace std;

Handler::Handler()
{
	key = 't';
}

/*
* Method to be used for saving the data to the file (appending of file)
*/
void Handler::saveDataToFile(Client client)
{
	outFile.open("clientFile.txt", ios::out | ios::app);
	outFile << encrypt(client) << endl;
	outFile.close();
}

/*
* Method to be used for updating the data in the file
*/
void Handler::updateDataToFile(Client clients[], int count)
{
	outFile.open("clientFile.txt", ios::out | ios::trunc);
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
	stream << client.getAccountID() << " " << client.getFirstName() << " " << client.getLastName() << " " << client.getAccountBalance();
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

	vector<string> data;
	inFile.open("clientFile.txt");

	if (inFile.good())
	{
		cout << "File found!!!" << endl;
		string line;
		while (!inFile.eof())
		{
			inFile >> line;
		
			line = decrypt(line);
		;
			data.push_back(line);
		}
		inFile.close();
		inFile.open("clientFile.txt", ios::out | ios::trunc);
		inFile.close();
		
		data.pop_back();
		return data;
	}
	else
	{
		cout << "File not found!!!" << endl;
	}
}
