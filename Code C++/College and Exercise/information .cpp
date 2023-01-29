#include<iostream> 
#include<cmath>

using namespace std; 

int main()
{

int age; //declare an integer for the user to input 
string name; 
string university; 
string major; 

cout << "Enter your name : " << endl;
getline(cin, name);

cout <<"Enter the year u born : "<< endl;
cin >> age;

cout <<"Enter ur school : " << endl; 
cin.ignore();
getline(cin, university);

cout << "What subject are you studying? " << endl;
getline(cin, major); 

cout << "==================================" << endl; 
cout << "YOUR PERSONAL INFORMATION" <<endl; 
cout << "NAME :  " << name << endl;
cout << "AGE : " << 2022 - age << endl;
cout << "UNIVERSITY : " << university << endl; 
cout << "MAJOR : " << major << endl; 
cout << "==================================";
return 0; 
}
