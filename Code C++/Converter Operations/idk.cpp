/*income tax calculator*/

#include<iostream>
using namespace std;

int main(){

  int Salary; //salary variables
  
  //prompt
  cout<<"-----------------------------"<<endl;
  cout<<"Enter your Base Salary : "; 
  cin >> Salary;
  cout<<endl;

  //else if statement 
  if(Salary <= 500000){
    cout<<"Your Salary is "<< Salary<<endl; 
    cout<<"-----------------------------"<<endl;
  } else if (Salary <= 1250000){
    cout<<"Your Salary is "<< (Salary/100)*95<<endl;
    cout<<"-----------------------------"<<endl;
  } else if(Salary <= 8500000){
    cout <<"Your Salary is  "<<(Salary/100)*90<<endl;
    cout<<"-----------------------------"<<endl;
  } else if(Salary <= 12500000){
    cout <<"Your Salary is "<< (Salary/100)*85<<endl;
    cout<<"-----------------------------"<<endl;
  } else if(Salary > 12500000){
    cout <<"Your Salary is "<<(Salary/100)*80<<endl;
    cout<<"-----------------------------"<<endl;
  } else{
    cout <<"Your salary should be higher than 500000"<<endl;
    cout<<"-----------------------------"<<endl;
  }

  return 0;
}



