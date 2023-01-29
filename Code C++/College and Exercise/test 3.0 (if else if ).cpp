#include<iostream>
using namespace std;
/*
	cout << "age : " << &age << endl; 
	cout << "GPA : " << &gpa << endl;
	cout << "Name : "<< &name << endl;
*/

int main(){ 

int age = 19; 
int *pAge = &age; 
double gpa = 3.2;
double *pgpa = &gpa;
string name = "Vadh"; 
string *pname = &name; 

cout << pAge;

return 0;
}

