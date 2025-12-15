// Q: Sum of the all number from 1 to N which are devide by 3;

#include <iostream>
using namespace std;

int main()
{
  int sum = 0, n = 10;
  for (int i = 1; i <= n; i++)
  {
    if (i % 3 == 0)
    {
      sum += i;
      cout << i << " ";
    }
  }
  cout << "\n"
       << sum;
}
// 3+6+9= 18