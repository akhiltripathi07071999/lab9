//library
#include<iostream>
using namespace std;

int main()
{
	//variable declaration
	int a;
	char b;
	double c;
	// pointers declaring
	int *p1=&a;
	char *p2=&b;
	double *p3=&c;
	//printing the results
	cout<<"The size of int is"<<sizeof(a)<<"bytes"<<endl;
	cout<<"the size of char is "<<sizeof(b)<<"bytes"<<endl;
	cout<<"the size of double is"<<sizeof(c)<<"bytes"<<endl;
	cout<<"the size of pointer for int is"<<sizeof(p1)<<"bytes"<<endl;
	cout<<"the size of pointer for char is "<<sizeof(p2)<<"bytes"<<endl;
	cout<<"the size of pointer for double is"<<sizeof(p3)<<"bytes"<<endl;
	return 0;
}
