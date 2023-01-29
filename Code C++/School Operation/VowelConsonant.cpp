#include<iostream>
using namespace std; 

int main(){
  char letter;
  char vowel[] = {'A', 'a', 'E', 'e', 'I','i','O','o','U','u'};

  cout<< "Enter your letter here :";
  cin >> letter;//user enter

  if (letter == vowel[0,1,2,3,4,5,6,7,8,9])
  {
    cout<<"Vowel";
  } else {
    cout << "Consonant";
  }

  return 0;
}