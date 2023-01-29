#include<iostream>
using namespace std;

int main(){

    int UserInput; 
    double KM, Mile, CM, FT, Meter, Yard;

    cout << "--------------------------------"<<endl;
    cout << "$             MENU             $"<<endl;
    cout << "[#] Kilometer(s) to Mile(s)  - 1 "<<endl;
    cout << "[#] Mile(s) to Kilometer(s)  - 2 "<<endl;
    cout << "[#] Centimeter(s) to Feet(s) - 3" <<endl;
    cout << "[#] Feet(s) to Centimeter(s) - 4" <<endl;
    cout << "[#] Meter(s) to Yard(s)      - 5" <<endl;
    cout << "[#] Yard(s) to Meter(s)      - 6" <<endl;
    cout << "--------------------------------"<<endl; 

    cout << "Enter ur Operation Num : "<< endl; 
    cout <<"-----)()()(----->>";
    cin >> UserInput;


    switch (UserInput){
        case 1 : 
        cout << "Kilometers : ";
        cin >> KM;
        cout << "Mile(s) : "<< KM / 1.609; 
        break; 
        case 2 : 
        cout << "Miles : ";
        cin >> Mile; 
        cout << "Kilometer : "<< Mile * 1.609;
        break; 
        case 3 : 
        cout << "Centimeter(s) : ";
        cin >> CM;
        cout << "Ft(s) : "<<CM / 0.032;
        break;
        case 4 : 
        cout << "Ft(s) : ";
        cin >> FT;
        cout << "Centimeter(S) : "<< FT * 30.48; 
        break; 
        case 5 : 
        cout << "Meters (s) : ";
        cin >> Meter;
        cout << "Yard : "<< Meter / 0.91;
        break;
        case 6 : 
        cout << "Yard : ";
        cin >> Yard;
        cout << "Meter(s) : "<< Yard * 1.09;
        break;
        default : 
        cout << "Invalid";
    }

return 0; 
}