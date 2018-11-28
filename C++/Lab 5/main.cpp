#include <iostream>

#include "Header.h"
#include "Derived.h"
using namespace std;



int main(int argc, char** argv) {
	
	cout<<"Class that Inherited Public\n"<<endl;	
	Public Pub1;
	Pub1.doSomething();
	Pub1.print();
	cout<<"#########################################"<<endl;
	cout<<endl;
	
	cout<<"Class that Inherited Protected\n"<<endl;	
	Protected Pro1;
	Pro1.doSomething();
	Pro1.print();
	cout<<"#########################################"<<endl;
	cout<<endl;
	
	cout<<"Class that Inherited Private\n"<<endl;	
	Private Priv1;
	Priv1.doSomething();
	Priv1.print();
	cout<<"#########################################"<<endl;
	cout<<endl;
	
	Inheritance* pointerH = &Pub1;
	cout << &Pub1 << "  This has the same address as pointerH"<<endl;
	cout << pointerH <<"  This has the same address as pointerH"<<endl;
	
	//pointerH = &Pro1; //If this is uncommented you'll get an error because you can't sent a pointer of Inheritance equal to the value of the derived classes protected member.
	
	return 0;
}
