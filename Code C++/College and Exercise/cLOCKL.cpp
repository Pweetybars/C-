#include <iostream>
#include <conio.h>
#include <unistd.h>
using namespace std;
int main(){
    int hr=0, min=0, sec=0;

    while (true){
        system("cls");
        cout << hr << " : " << min << " : " << sec << endl;
        sec++;
        if (sec == 60) {
            min++; 
            sec = 0;
        }
        else if (min == 60) {
            hr++;
            min = 0;
        }
        sleep(1);
    }
    getch();
}

