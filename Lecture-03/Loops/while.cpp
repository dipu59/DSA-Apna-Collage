#include <iostream>
using namespace std;

int main()
{
  int count = 1;
  int n;
  cout << "Enter A Number: ";
  cin >> n;
  while(count <= n){
    cout << count << "  ";
    count++;
  }
  return 0;
}