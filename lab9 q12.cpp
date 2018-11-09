//library
#include <iostream>
using namespace std;

int main()
{ 
	// variable declaring
	int a=10;	
	int b;
	int *p=&a;
	//storing value of the pointed by p in b
	b=*p;
	// result printing
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"*p="<<*p<<endl;
	//value assigning
	a=2;
	b=3;
	//result printing
	cout<<"a="<<a<<endl<<"b="<<b<<endl<<"*p="<<*p<<endl;
	return 0;
}

