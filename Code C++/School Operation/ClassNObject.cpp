#include<iostream>
using namespace std; 

class Subject {
    private : 
        int StartingTime; 
    public : 
        string Professor;
        string Room; 

    Subject (string aProfessor, string aRoom, int aStartingTime){
        Professor = aProfessor;
        Room = aRoom;
        getStartingTime();
    }
    void    setStartingTime (int aStartingTime){
        if (aStartingTime == 7 || aStartingTime == 10 || aStartingTime == 9){
            StartingTime = aStartingTime;
        } else {
            StartingTime = 12; 
        }
    }
    
    int getStartingTime(){
        return StartingTime;
    }
};

int main(){ 

    Subject DSA("Eng Titya", "Ek Phnom" , 100);
    DSA.setStartingTime (10);
    cout << DSA.getStartingTime() <<endl;
    cout << DSA.Professor<<endl;
    cout << DSA.Room<<endl;

    return 0;
}