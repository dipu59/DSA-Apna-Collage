#include <iostream>
using namespace std;

int main()
{
  // int a, b;
  // int sum;
  // cout << "Enter First Value: ";
  // cin >> a;
  // cout << "Enter Second Value: ";
  // cin >> b;
  // sum = a + b;
  // cout << "The sum of Two number is: " << sum << "\n";
  // cout << "Enter First Value: ";
  // cin >> a;
  // cout << "Enter Second Value: ";
  // cin >> b;
  // int multply = a * b;
  // cout << "The multiple of Two number is: " << multply;

  // int a = 5;
  // int b = a++; //work then update (Post increment)
  // cout << a << '\n';
  // cout << b;

  int a = 5;
  int b = ++a; // update first then work (Pre increment)
  cout << a << '\n';
  cout << b;
  return 0;
}