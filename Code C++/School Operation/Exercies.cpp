#include<iostream>
using namespace std;

void devidedby3(int N){
    for(i = 0, i<=N, i++){
        if (i%=3){
            cout<<i<<" "<<endl;
        } else {
            cout<<"None";
        }
    }
};

int main(){
    int N;

    cout <<"Enter ur Number : ";
    cin >> N;

    devidedby3(N);

    return 0;
}