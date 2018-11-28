#include <iostream>
#include "Header.h"
#include "Derived.h"


using namespace std;
/**#######################**/

/**#######################**/
void Public::doSomething()
{
	f_pub();
	f_pro();
	pub = 1;
	prot = 2;
	//priv = 9;	//This can't be changed since it is a private variable of Inheritance
}
void Public::print()
{
	
	cout <<"Public Variable Changed to: "<<pub<<endl;
	cout <<"Protected Variable Changed to: "<<prot<<endl;
	cout <<"Private Variable Can't be Chanegd since it is a private variable of Inheritance"<<endl;
	//cout <<priv<<endl; 
}
/**#######################**/

/**#######################**/
void Protected::doSomething()
{
	f_pub();
	f_pro();
	pub = 3;
	prot = 4;
	//priv = 9; //This can't be changed since it is a private variable of Inheritance
}
void Protected::print()
{
	
	cout <<"Public Variable Changed to: "<<pub<<endl;
	cout <<"Protected Variable Changed to: "<<prot<<endl;
	cout <<"Private Variable Can't be Chanegd since it is a private variable of Inheritance"<<endl;
	//cout <<priv<<endl; 
}
/**#######################**/

/**#######################**/
void Private::doSomething()
{
	f_pub();
	f_pro();
	pub = 5;
	prot = 6;
	//priv = 9; //This can't be changed since it is a private variable of Inheritance
}
void Private::print()
{
	
	cout <<"Public Variable Changed to: "<<pub<<endl;
	cout <<"Protected Variable Changed to: "<<prot<<endl;
	cout <<"Private Variable Can't be Chanegd since it is a private variable of Inheritance"<<endl;
	//cout <<priv<<endl; 
}
/**#######################**/

/**#######################**/

//This can't be ran because it is a private member of Inheritance






