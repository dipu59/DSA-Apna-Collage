#include<iostream>
using namespace std;

int main(){
  int Number;
  cout << "Enter a Number: ";
  cin >> Number;
  cout << (Number >= 0 ? "Positive":"Negative");
  return 0;
}