#include<iostream>
using namespace std;

int main(){
  int Number;
  cout << "Enter a Number: ";
  cin >> Number;
  if(Number%2 == 0 ){
    cout << "Even Number";
  }else{
    cout << "Odd Number";
  }
  return 0;
}