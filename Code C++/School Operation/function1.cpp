#include<iostream>
#include<string>
using namespace std; 

int main(){
    string Name, Address, University, Major,Gmail,Date;
    int Year;
    int age;
    
    cout <<"------------------------------------------"<<endl;
    cout <<"|              Fill the form             |"<<endl;
    cout <<"------------------------------------------"<<endl;
    cout << endl;
    cout <<"[-] Enter your name :";
    getline(cin, Name);
    cout <<"[-] Enter your date of birth (Day and Month) :";
    getline(cin,Date);
    cout <<"[-] Enter year when you are born :";
    cin >> Year;
    cout <<"[-] Enter your University Name :";
    cin.ignore();
    getline(cin,University);
    cout <<"[-] Enter your Address :";
    getline(cin,Address);
    cout <<"[-] Your Major :";
    getline(cin,Major);
    cout <<"[-] Enter ur Gmail : ";
    getline(cin,Gmail);

    cout << endl;
    cout << endl;
    cout <<"......................................"<<endl;
    cout << endl;
    cout <<"[+] Name : "<< Name<<endl;
    cout <<"[+] Date of Birth : "<<Date<<" "<<Year<<"("<< 2022 - Year <<")"<< endl;
    cout <<"[+] Welcome to "<<University<<endl;
    cout <<"[+] Address :  "<<Address <<endl;
    cout <<"[+] Major :   "<<Major<<endl;
    cout <<"[+] Gmail :  "<<Gmail<<endl;
    cout <<endl;
    cout <<"``````````````````````````````````````"<<endl;

    return 1;
}

