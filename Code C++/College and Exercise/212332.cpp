#include<iostream>
#include<string>
//I'm not sure if this necessary 
using namespace std; 

int main(){

int ID;
char Gender; 
string name;

cout << "Input id : " ;
cin >> ID;
cout << "Input name : ";
cin >>  name; 
cout << "Input Gender : ";
cin >> Gender; 

cout  << "-----Display Style 1-----" << endl;
cout << "Output id : " << ID << endl;
cout << "Output name : " << name << endl;
cout << "Output gender : "<< Gender<< endl;

cout << "-----Display Style 2-----"<< endl;
cout <<"      id.          name.          gender"<< endl;
cout <<      ID<< ".    "<< name<< ".       "<< Gender << ".      "<<endl;

return 0; 
}
