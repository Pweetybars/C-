#include<iostream>
#include<string> 
using namespace std;

int main(){

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

    return 0; 
}