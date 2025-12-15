#include <iostream>
using namespace std;

int main()
{
  int fact = 1, n = 4;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
  }
  cout << fact; //\\ 1x2x3x4 = 24 //
}
