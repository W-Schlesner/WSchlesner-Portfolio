#include "Bank.h"
#include <sstream>

/*
* Constructor of Bank class
*/
Bank::Bank()
{
	employee.setFirstName("Will");
	employee.setLastName("Schlesner");
	employee.setUsername("admin");
	employee.setPassword("password");
	count = 0;
	readDataFromFile();
}

/*
* Method for verification of the account of employee
*/
int Bank::verifyEmployee(string username, string password)
{
	if (username == employee.getUsername() && password == employee.getPassword())
	{
		logHandler.saveDataToFile("Employee Successfully logged in.");
		return 1;
	}
	else
	{
		logHandler.saveDataToFile("Employee Login failed. Username or Password is incorrect.");
		return 0;
	}
}

/*
* Method for creating the account of customer
*/
void Bank::createAccount(string firstName, string lastName, string accountType, int accNo, int initialDepositMoney)
{
	ostringstream stream;

	customers[count].setFirstName(firstName);
	customers[count].setLastName(lastName);
	customers[count].setAccountType(accountType);
	customers[count].setAccountNumber(accNo);
	customers[count].setAccountInitialDeposit(initialDepositMoney);
	handler.saveDataToFile(customers[count]);
	stream << "New Account Created for " << firstName << " " << lastName << " under Account # " << accNo;
	string accountDetails = stream.str();
	logHandler.saveDataToFile(accountDetails);
	count ++; 
}

/*
* Method for deleting the account of customer
*/
void Bank::deleteAccount(int index)
{
	ostringstream stream;
	stream << "Account Deleted for " << customers[index].getFirstName() << " " << customers[index].getLastName() << " registered under Account # " << customers[index].getAccountNumber();
	string accountDetails = stream.str();
	logHandler.saveDataToFile(accountDetails);

	if (index != -1)
	{
		for (int i = index; i < count - 1; i++)
		{
			customers[i] = customers[i + 1];
		}
		count--;
		handler.updateDataToFile(customers, count);
	}
	else
	{
		cout << "Customer Account not Found...";
	}
}

/*
* Method for verification of the account of customer
*/
int Bank::verifyCustomer(int accountNumber)
{
	for (int i = 0; i < count; i++)
	{
		if (accountNumber == customers[i].getAccount()->getAccountNumber())
		{
			return i;
		}
	}
	return -1;
}

/*
* Method for withdrawing cash from the account of customer
*/
void Bank::withdrawCash(int cash, int index)
{
	customers[index].withdrawAmount(cash);

	ostringstream stream;
	stream << "Balance " << cash << " withdrawn by " << customers[index].getFirstName() << " " << customers[index].getLastName() << " registered under Account # " << customers[index].getAccountNumber();
	string accountDetails = stream.str();
	logHandler.saveDataToFile(accountDetails);

	handler.updateDataToFile(customers, count);
}

/*
* Method for depositing cash to the account of customer
*/
void Bank::depositCash(int cash, int index)
{
	customers[index].depositAmount(cash);

	ostringstream stream;
	stream << "Balance " << cash << " Deposited by " << customers[index].getFirstName() << " " << customers[index].getLastName() << " registered under Account # " << customers[index].getAccountNumber();
	string accountDetails = stream.str();
	logHandler.saveDataToFile(accountDetails);

	handler.updateDataToFile(customers, count);
}

/*
* Method for balance inquiry of the account of customer
*/
void Bank::balanceInquiry(int index)
{
	displayAccountData(index);
	ostringstream stream;
	stream << "Balance inquiry done by " << customers[index].getFirstName() << " " << customers[index].getLastName() << " registered under Account # " << customers[index].getAccountNumber();
	string accountDetails = stream.str();
	logHandler.saveDataToFile(accountDetails);
}

/*
* Method for displaying the details of the account of customer
*/
void Bank::displayAccountData(int index)
{
	cout << "************************************************" << endl;
	cout << "*                ACCOUNT DATA                 **" << endl;
	cout << "************************************************" << endl;
	cout << "Customer Account Number: " << customers[index].getAccount()->getAccountNumber() << endl;
	cout << "Customer Name: " << customers[index].getFirstName() << " " << customers[index].getLastName() << endl;
	cout << "Available Balance: " << customers[index].getAccount()->getCashAmount() << endl;
	cout << "-----------------------------------------------" << endl;
}

/*
* Method for reading data of customers from exisiting file
*/
void Bank::readDataFromFile()
{
	vector<string> data = handler.readWholeFile();

	for (int i = 0; i < data.size(); i++)
	{
		string temp;
		Client tempClient;
		int flag = 1;
		
		for(int j = 0; j < data[i].size(); j++)
		{
			if(data[i].at(j) == ',')
			{
				/*
				* This switch statement is used to find the instances of client
				*/
				switch (flag)
				{
					case 1:
					{
						tempClient.setAccountType(temp);
						temp = "";
						flag++;
						break;
					}
					case 2:
					{
						int tempID = atoi(temp.c_str());
						tempClient.setAccountNumber(tempID);
						temp = "";
						flag++;
						break;
					}
					case 3:
					{
						tempClient.setFirstName(temp);
						temp = "";
						flag++;
						break;
					}
					case 4:
					{
						tempClient.setLastName(temp);
						temp = "";
						flag++;
						break;
					}
				}
			}
			else
			{
				temp += data[i].at(j);

				if (j == data[i].size() - 1)
				{
					int tempBalance = atoi(temp.c_str());
					tempClient.setAccountInitialDeposit(tempBalance);
					temp = "";
					flag++;
				}
			}
		}
		
		createAccount(tempClient.getFirstName(), tempClient.getLastName(), tempClient.getAccountType(), tempClient.getAccount()->getAccountNumber(), tempClient.getAccount()->getCashAmount());
		
	}
}

/*
* Method for reading data of customers from log file
*/
void Bank::readLogFile()
{
	logHandler.loadDataFromFile();
}
