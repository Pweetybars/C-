#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int x = 5;
  for(int i=1; i<=9; i++){
    cout<<x<<"^"<<i<<" + ";
  }
   cout<<"5^9" <<" ";
  cout<<" = ";
 
  for (int i = 1; i <= 10; i++)
  {
    int powNUM = pow(x, i);
    cout<<powNUM <<" + ";
  }
  
}