#include "Bank.h"

/*
* Constructor of Bank class
*/
Bank::Bank()
{
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
		return 1;
	else
		return 0;
}

/*
* Method for creating the account of customer
*/
void Bank::createAccount(int accountID, string fname, string lname, double accountBalance)
{
	customers[count].setAccountID(accountID);
	customers[count].setFirstName(fname);
	customers[count].setLastName(lname);
	customers[count].setAccountBalance(accountBalance);
	handler.saveDataToFile(customers[count]);
	count++;
}

/*
* Method for deleting the account of customer
*/
void Bank::deleteAccount(int index)
{
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
		if (accountNumber == customers[i].getAccountID())
		{
			return i;
		}
	}
	return -1;
}

/*
* Method for withdrawing cash from the account of customer
*/
void Bank::withdrawCash(double cash, int index)
{
	customers[index].withdrawAmount(cash);
	handler.updateDataToFile(customers, count);
}

/*
* Method for depositing cash to the account of customer
*/
void Bank::depositCash(double cash, int index)
{
	customers[index].depositAmount(cash);
	handler.updateDataToFile(customers, count);
}

/*
* Method for balance inquiry of the account of customer
*/
void Bank::balanceInquiry(int index)
{
	displayAccountData(index);
}

/*
* Method for displaying the details of the account of customer
*/
void Bank::displayAccountData(int index)
{
	cout << "************************************************" << endl;
	cout << "*                ACCOUNT DATA                 **" << endl;
	cout << "************************************************" << endl;
	cout << "Customer Account Number: " << customers[index].getAccountID() << endl;
	cout << "Customer Name: " << customers[index].getFirstName() << " " << customers[index].getLastName() << endl;
	cout << "Available Balance: " << customers[index].getAccountBalance() << endl;
	cout << "------------------------------------------------" << endl;
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
			if(data[i].at(j) == ' ')
			{
				
				switch(flag)
				{
					case 1:
						{
							int tempID = atoi(temp.c_str());
							tempClient.setAccountID(tempID);
							temp = "";
							flag++;
							break;
						}
					case 2:
						{
							tempClient.setFirstName(temp);
							temp = "";
							flag++;
							break;
						}
					case 3:
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
				
				if(j == data[i].size()-1)
				{
					double tempBalance = atof(temp.c_str());
					tempClient.setAccountBalance(tempBalance);
					temp = "";
					flag++;
				}
			}
		}
		
		createAccount(tempClient.getAccountID(), tempClient.getFirstName(), tempClient.getLastName(), tempClient.getAccountBalance());
	
	}
}
