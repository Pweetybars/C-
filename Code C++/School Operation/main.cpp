#include<iostream>
#include<string>

using namespace std;

void information (){
    string Name, Address, University, Major,Gmail,Date;
    int Year;
    int age;
    cout <<"------------------------------------------"<<endl;
    cout <<"|              Fill the form             |"<<endl;
    cout <<"------------------------------------------"<<endl;
    cout << endl;
    cout <<"[-] Enter your name :";
    cin.ignore();
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
}

void gradeCalculator (){
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
}

void ClassSubjectInformation(){
    int ClassCode;
    
    string Physics[]    = { "Noko Reach Hall"      , "Professor1", "Monday : 7-9 (am)"   ,  "FloorG, Building A" };
    string Math[]       = { "Freshman Lecture Hall", "Professor2", "Tuesday : 8-10 (am)" ,  "Floor1, Building A" };
    string Statistcs[]  = { "Ek Phnom Hall"        , "Professor3", "Wednesday : 7-9 (am)",  "Floor2, Building A" };
    string DSA[]        = { "Lab 04"               , "Professor4", "Thursday : 12-2 (pm)",  "FloorG, Building B" };
    string English[]    = { "Room C2"              , "Professor5", "Friday : 2-4 (pm)"   ,  "Floor1, Building B" };
    string Philosophy[] = { "Lecture Hall 1"       , "Professor6", "Saturday : 1-3 (pm)" ,  "Floor2, Building B" };


    cout << "-------------------------------"<<endl;
    cout << "|---This is your class code---|"<< endl;
    cout << "-------------------------------"<<endl;
    cout << "> 1 | Physics    <" <<endl; 
    cout << "> 2 | Math       <" <<endl;
    cout << "> 3 | Statistic  <" <<endl; 
    cout << "> 4 | DSA        <" <<endl;
    cout << "> 5 | English    <" <<endl; 
    cout << "> 6 | Philosophy <" <<endl<<endl;
    cout << " === Enter your subject code for its information === "<<endl;
    cout <<"--------->  ";
    cin >> ClassCode; 
    
    switch (ClassCode){
        case 1 : 
        cout << "^_^ Physics Class Information ^_^"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "[-] Class : " <<Physics[0]<<endl;
        cout << "[-] Professor : "<<Physics[1]<<endl;
        cout << "[-] Scehdule : "<< Physics[2]<<endl;
        cout << "[-] Class Location : "<<Physics[3]<<endl;
        break;
        case 2 : 
        cout << "^_^ Math Class Information ^_^"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "[-] Class : " <<Math[0]<<endl;
        cout << "[-] Professor : "<<Math[1]<<endl;
        cout << "[-] Scehdule : "<< Math[2]<<endl;
        cout << "[-] Class Location : "<<Math[3]<<endl;
        break;
        case 3 : 
        cout << "^_^ Statistic Class Information ^_^"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "[-] Class : " <<Statistcs[0]<<endl;
        cout << "[-] Professor : "<<Statistcs[1]<<endl;
        cout << "[-] Scehdule : "<< Statistcs[2]<<endl;
        cout << "[-] Class Location : "<<Statistcs[3]<<endl;
        break; 
        case 4 : 
        cout << "^_^ DSA Class Information ^_^"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "[-] Class : " <<DSA[0]<<endl;
        cout << "[-] Professor : "<<DSA[1]<<endl;
        cout << "[-] Scehdule : "<< DSA[2]<<endl;
        cout << "[-] Class Location : "<<DSA[3]<<endl;
        break;
        case 5 : 
        cout << "^_^ English Class Information ^_^"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "[-] Class : " <<English[0]<<endl;
        cout << "[-] Professor : "<<English[1]<<endl;
        cout << "[-] Scehdule : "<< English[2]<<endl;
        cout << "[-] Class Location : "<<English[3]<<endl;
        break;
        case 6 : 
        cout << "^_^ Philosophy Class Information ^_^"<<endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout << "[-] Class : " <<Philosophy[0]<<endl;
        cout << "[-] Professor : "<<Philosophy[1]<<endl;
        cout << "[-] Scehdule : "<< Philosophy[2]<<endl;
        cout << "[-] Class Location : "<<Philosophy[3]<<endl;
        break;
        default :
        cout << "Crashed";
        break; 
    }
}

int main(){
	
	while (true){
		
    int UserInput;
    cout <<"[:::::::::::::::::::::::::::::]"<<endl;
    cout <<"[:]           MENU          [:]"<<endl;
    cout <<"[:]  1 - Information Form   [:]"<<endl;
    cout <<"[:]  2 - Grade Calculator   [:]"<<endl;
    cout <<"[:]  3 - Class Information  [:]"<<endl;
    cout <<"[:::::::::::::::::::::::::::::]"<<endl;
    cout <<"Enter a Number : ";
    cin >> UserInput;
    switch (UserInput)
    {
    case 1 :
        information();
        break;
    case 2 : 
        gradeCalculator();
        break;
    case 3 : 
        ClassSubjectInformation();
        break;
    default : 
        cout <<"Invalid";
        break;
    }
}
    return 0; 
}
