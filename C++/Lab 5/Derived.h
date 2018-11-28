#ifndef DERIVED_H
#define DERIVED_H

#include <iostream>


using namespace std;

class Public : public Inheritance
{
	public:
		using Inheritance::f_pro;
		void function (){
			f_pub(); //This function will work because it is now Public's public function
			f_pro(); //This function will work because it is now Public's protected function
			//f_priv(); //Error This will always be a private function for Inheritance, so other classes can't inherit it
		}
		
		void doSomething();
		void print();

};

class Protected : protected Inheritance
{
	public:
		using Inheritance::f_pub;
		using Inheritance::f_pro;
		void function (){
			f_pub(); //This function will work because it is now Protected's protected function
			f_pro(); //This function will work because it is now Protected's protected function
			//f_priv(); //Error This will always be a private function for Inheritance, so other classes can't inherit it
		}		
		void doSomething();
		void print();

};

class Private : private Inheritance
{
	public:
		using Inheritance::f_pub;
		using Inheritance::f_pro;
		void function (){
			f_pub(); //This function will work because it is now Privates's private function
			f_pro(); //This function will work because it is now Privates's private function
			//f_priv(); //Error This will always be a private function for Inheritance, so other classes can't inherit it
		}		
		void doSomething();
		void print();

};
#endif
