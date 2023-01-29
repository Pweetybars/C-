#include<iostream>
using namespace std;

int main(){
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
    return 0;
}