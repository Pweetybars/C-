#include<iostream>
#include<string>
using namespace std;

int main(){
    int sub1,sub2, sub3, sub4, sub5, sub6;
    double total, average;
    char grade;

    cout <<"*************************"<<endl;
    cout <<"*  YOUR SCORES REPORTS  *"<<endl;
    cout <<"*************************"<<endl;
    cout <<endl;
    cout <<"[-] Physics :   ";
    cin >>sub1;
    cout <<"[-] Math :   ";
    cin >>sub2;
    cout <<"[-] Statistic : ";
    cin >> sub3;
    cout <<"[-] DSA : ";
    cin >> sub4;
    cout <<"[-] English : ";
    cin >> sub5;
    cout <<"[-] Philosophy : ";
    cin >> sub6;

    total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
    average = total / 6;

    cout <<endl;
    cout <<"**  YOUR OVERALL REPORT  **"<<endl;;
    cout <<"    ___________________    "<<endl<<endl;
    cout <<"TOTAL : "<<total<<"/600"<<endl<<endl;
    cout <<"AVERAGE : "<<average<<endl<<endl;
    
    if (49 >= average){
        cout <<"Good luck next term";
    } else if (60 >= average){
        cout <<"You did pass,Congrats !!!"<<endl;
        cout <<"GRADE : E "<<endl;
    } else if (70 >= average){
        cout <<"Above Average, Congrats !!!"<<endl;
        cout <<"GRADE : D";
    } else if (80 >= average){
        cout <<"Decend Job, Well Done !!!"<<endl;
        cout <<"GRADE : C";
    } else if (90>= average){
        cout <<"Amazing Accomplishment, Well PLay !!!"<<endl;
        cout <<"GRADE : B";
    } else if (100 >= average){
        cout <<"EXCELENT, WHAT AN GREAT TERM Of YOU !!!<3"<<endl;
        cout <<"GRADE : A";    
    } else {
        cout <<"Invalid";
    }
    

    return 0;   
}