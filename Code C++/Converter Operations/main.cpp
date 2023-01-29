#include<iostream>
using namespace std; 

void time(){

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
}

void distance(){ 

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
}
void Mass(){
    int UserInput;
    double KG, Lbs, Gram; 

    cout << "[-]        MENU       [-]"<<endl;
    cout << "[-] KG to Lbs    - 1  [-]"<<endl;
    cout << "[-] Lbs to KG    - 2  [-]"<<endl;
    cout << "[-] Grams to KG  - 3  [-]" <<endl;
    cout << "[-] KG to Grams  - 4  [-]" <<endl;
    cout << "[-] Lbs to Grams - 5  [-]" <<endl;
    cout << "[-] Grams to Lbs - 6  [-]" <<endl;
    cout << "(*) Your Operation of Choice : "<< endl;
    cout << "======>>";
    cin >> UserInput;

    switch (UserInput){
    case 1 :
        cout << "KG : ";
        cin >> KG;
        cout << "Lbs : "<< KG * 2.2;
        break;
    case 2 : 
        cout <<"Lbs : ";
        cin >> Lbs; 
        cout << "KG : "<< Lbs / 0.45; 
        break; 
    case 3 : 
        cout <<"Grams : ";
        cin >> Gram;
        cout << "KG : "<< Gram / 1000;
        break; 
    case 4 : 
        cout << "KG : "; 
        cin >> KG; 
        cout << "Grams : " << KG * 1000; 
        break;
    case 5 : 
        cout <<"Lbs : ";
        cin >> Lbs;
        cout <<"Grams : "<< Lbs * 453; 
        break;
    case  6: 
        cout << "Grams : ";
        cin >> Gram; 
        cout << "Lbs : "<< Gram /0.002;
        break;
    default:
        cout << "Null";
        break;
    }
}
void Temperature(){
    int UserInput;
    double Celcius, Fahrenheit, Kelvin;

    cout << "--------- MENU -----------"<<endl;
    cout << "[1] - Celcius to Fahrenheit "<<endl;
    cout << "[2] - Celcuis to Kelvin " <<endl;
    cout << "[3] - Fahrenheit to Celcuis " <<endl;
    cout << "[4] - Fahrenheit to Kelvin "<< endl;
    cout << "[5] - Kelvin to Fahrenheit "<< endl;
    cout << "[6] - Kelvin to Celcius "<<endl;
    cout << "Enter ur Operation : ";
    cin >> UserInput; 

    switch (UserInput){
    case 1:
        cout << "Celcuis : ";
        cin >> Celcius;
        cout << "Fahrenheit : " << (Celcius * 9/5) + 32;
        break;
    case 2 : 
        cout << "Celcius : ";
        cin >> Celcius;
        cout << "Kelvin : "<< Celcius + 273.15;
        break;
    case 3 : 
        cout << "Fahrenheit : ";
        cin >> Fahrenheit;
        cout << "Celcuis : "<< (Fahrenheit - 32) * 5/9;
        break; 
    case 4 : 
        cout << "Fahrenheit : ";
        cin >> Fahrenheit;
        cout <<"Kelvin : "<<(Fahrenheit - 32) * 5/9 + 273.15;\
        break; 
    case 5 : 
        cout << "Kelvin : ";
        cin >> Kelvin;
        cout << "Celcius : "<< Kelvin - 273.15; 
        break;
    case 6 : 
        cout << "Kelvin : ";
        cin >> Kelvin;
        cout << "Fahrenheit : "<< (Kelvin - 273.15) * 9/5 + 32;
        break; 
    default:
        cout << "404 Not Found";
        break;
    }
}

int main (){
    int UserInput; 
    
    cout << "-=-=-=-=-=-=-= MENU -=-=-=-=-=-=-=-="<<endl;
    cout << "- 1 - Time Converter ----- Tick Tick"<<endl;
    cout << "- 2 - Distance Converter - Weee Weee"<<endl;
    cout << "- 3 - Mass Converter ----- sks sks s"<<endl;
    cout << "- 4 - Temparture Converter - heehehe"<<endl; 
    cout << "Enter your Operation : ";
    cin >> UserInput; 

    switch (UserInput) {
    case 1 :
        time(); 
        break;
    case 2 : 
        distance();
        break;
    case 3 : 
        Mass();
        break;
    case 4 : 
        Temperature();
        break; 
    default:
        cout << "Weeeee";
        break;
    }

return 0; 
}

