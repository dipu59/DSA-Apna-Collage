#include<iostream>
using namespace std;

int main(){
  char ch;
  cout << "Enter a character: ";
  cin >> ch;
  if(ch >= 97 && ch <= 122){  //Implicit Type Conversion (ASKI value)
    cout << "You entered 'Lowercase'.";
  }
  else if (ch >= 65 && ch <= 90)
  {
    cout << "You entered 'Uppercase'.";
  }
  else
  {
    cout << "Invallid Character.";
  }
  return 0;
}