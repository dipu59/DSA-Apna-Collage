// Check if a number is Prime or Not.
#include <iostream>
using namespace std;

int main()
{
  bool isPrime = true;
  int i, n;
  cout << "\nCheck Number is Prime or Not" << "\nEnter Your Number: ";
  cin >> n;
  for (i = 2; i <= n - 1; i++)
  {
    if (n % i == 0)
    {
      isPrime = false;
      cout << i << " ";
    }
  }
  if (isPrime == true)
  {
    cout << "\n"
         << n << " is a Prime Number \n";
  }
  else
  {
    cout << "\n"
         << n << " is a Non-Prime Number \n";
  }
  return 0;
}