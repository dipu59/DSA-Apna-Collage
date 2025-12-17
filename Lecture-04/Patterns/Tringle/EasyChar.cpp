#include <iostream>
using namespace std;

int main()
{
  int n=10;
  // char ch = 'A';
  for(char i='A'; i<n; i++){
    for(int j=0; j<i; j++){
      cout << i + 1;
     
    }
    cout << endl;
  }
}