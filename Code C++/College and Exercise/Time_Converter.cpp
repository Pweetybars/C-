#include<iostream>
using namespace std; 

int main(){
    double hour, minute, second; 
    int menu;

    cout <<"---------------------------------------" << endl;
    cout <<"|                 Menu                 |"<< endl; 
    cout <<"---------------------------------------" << endl;
    cout << "`          Hour to Minutes - 1       `" << endl;
    cout << "`          Hour to Seconds - 2       `" << endl;
    cout << "`          Minutes to Hour - 3       `" << endl;
    cout << "`         Minutes to Second - 4      `" << endl;
    cout << "`        Seconds to Minutes - 5      `" << endl;
    cout << "`         Seconds to hours - 6       `" << endl; 
    cout << endl;
    cout << "CHOOSE UR OPERATION :             "<<endl;
    cin >> menu;

    switch (menu){
    case 1 :
        cout << "Enter amount of hour(s) : ";
        cin >> hour;
        cout << endl;
        cout << hour <<" hour(s) equal to : "<< hour * 60<< " minutes";
        break;
    case 2 : 
        cout <<"Enter amount of hour(s): ";
        cin >> hour; 
        cout << endl;
        cout << hour <<" hour(s) equal to "<<hour * 3600<< " seconds";
        break; 
    case 3 :
        cout <<"Enter amount of minute(s) : ";
        cin >> minute;
        cout << endl;
        cout << minute <<" minute(s) equal to "<< minute / 60 << " hours";
        break;
    case 4 : 
        cout <<"Enter amount of minute(s) : ";
        cin >> minute; 
        cout << endl;
        cout << minute <<" minute(s) equal to "<< second * 60<< " seconds";
        break; 
    case 5 : 
        cout <<"Enter amount of second(s) ";
        cin >> second;
        cout << endl;
        cout << second <<" seconds equal to "<< second / 60<< " minute(s)";
        break;
    case 6 : 
        cout <<"Enter amount of second(s) ";
        cin >> second;
        cout << endl;
        cout << second <<" seconds equal to "<< second / 3600 << " hour(s)";
        break;
    default:
        cout << "not valid ";
        break;
    }

    return 0;
}
