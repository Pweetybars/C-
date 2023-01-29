#include<iostream>
using namespace std; 

class Subject  {
    private : 
        string Professor;
        string Room;
        string Schedule;
        int Score;
    public : 
        void setProfessor(string professor){
            Professor = professor; 
        }
        string getProfessor(){
            return Professor;
        }
        void setRoom(string room){
            Room = room;
        }
        string getRoom(){
            return Room;
        }
        void setSchedule (string schedule){
            Schedule = schedule;
        }
        string getSchedule(){
            return Schedule;
        }
        void setScore (int score){
            Score = score;
        }
        int getScore(){
            return Score;
        }
        void YourSubjectInformation(){
            cout << "[-] Professor : "<< Professor << endl;
            cout << "[-] Room : "<< Room << endl;
            cout << "[-] Schedule : "<< Schedule <<endl;
            }
        Subject (string professor, string room, string schedule, int Score){
            Professor = professor;
            Room = room; 
            Schedule = schedule;
            Score  = score;
        }
};


int main(){

    Subject Physics = Subject ("Hang Sothearith", "002", "Monday (7 - 10:30");
    Subject ProStat = Subject ("So Vannhoat", "002", "Tuesday (7 - 10:30)");
    Subject Math = Subject ("Touch Manith", "002", "Wednesday (7 - 10:30");
    Subject DSA = Subject ("Eng Titya", "Lab 4", "Thursday (7 - 10:30)");
    Subject English = Subject ("Chik Mercredi", "002", "Friday (7 - 10:30)");
    Subject Philosophy = Subject ("Chan Sophan", "002", "Tuesday - Wednesday (10:30 - 12)");

    Subject *s1 = &Physics;
    Subject *s2 = &ProStat;
    Subject *s3 = &Math;
    Subject *s4 = &DSA; 
    Subject *s5 = &English;
    Subject *s6 = &Philosophy;

    cout << "::::::::::::::::::::::::::::::::::"<<endl;
    cout << "::::::::: SUBJECT CODE :::::::::::"<<endl;
    cout << "[1] - "

    return 0;
}