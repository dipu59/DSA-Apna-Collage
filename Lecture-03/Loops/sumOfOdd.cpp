// Q: Sum of all Odd Number From 1 to n. //
// Odd = 1,3,5,7,9;
// Even = 2,4,6,8;
#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;
  cout << "Enter A Number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 != 0)
    {
      sum += i;
      cout << i <<" ";
    }

  }
  cout <<"\nSum Of Odd is = " << sum;
  return 0;
}