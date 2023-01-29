#include<iostream>
using namespace std; 

void devideBy3(int N){
    for  (int i=1 ; i <= N ;i++) {
//give loops declare and give value to N and condition
        if (i%3 == 0){
            cout << i << " ";
        }
    }
}

float calcAverage(int a, int b, int c){return (a+b+c)/3.0;}

int main(){
    int N, a, b, c;

    cout << "Enter N : "; cin >> N; 
    cout <<"result : ";
    devideBy3(N);
    cout << "\n-----------------------"<<endl;
    cout <<"\n Enter a = "; cin >> a;
    cout <<"enter b = ";cin >> b; 
    cout <<"Enter C = ";cin >> c;
    cout << "So average = "<< calcAverage(a, b, c)<<endl;

    return 0;
}