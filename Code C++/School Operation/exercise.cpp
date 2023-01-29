#include<iostream>
using namespace std;

int main(){

cout<<"Check Number Odd or Even"<<endl;
int Num1, Module1;
Module1 = Num1 % 2; 
cout<<"enter ur number :";
cin >> Num1;

if(Module1 == 0){
  cout << "The number is even";
} else {
  cout <<"the number is odd";
}

return 0;
}