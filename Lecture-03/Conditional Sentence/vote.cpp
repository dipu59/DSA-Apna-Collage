#include <iostream>
using namespace std;

int main()
{
  int age;
  cout << "Enter Your Age: ";
  cin >> age;
  if(age >= 18){
    cout << "You can vote";
  }else{
    cout << "You can't Vote.";
  }
  return 0;
}