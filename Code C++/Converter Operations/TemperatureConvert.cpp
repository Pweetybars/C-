#include<iostream>
using namespace std; 

int main(){
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

    return 0;
}