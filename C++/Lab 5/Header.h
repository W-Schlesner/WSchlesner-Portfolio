#ifndef HEADER_H
#define HEADER_H

#include <iostream>


using namespace std;

class Inheritance
{
	
	public:
		void f_pub() { cout << "The Public Function of Inheritance can be ran.\n"; }
		int pub;
		
	protected:
		void f_pro() { cout << "The Protected Function of Inheritance can be ran.\n"; }
		int prot;
		
	private:
		void f_priv() { cout << "The Private Function of Inheritance can be ran.\n"; }
		int priv;
	
};

#endif


