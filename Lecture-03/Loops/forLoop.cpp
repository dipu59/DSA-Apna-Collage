#include <iostream>
using namespace std;

int main()
{
  int i, n, sum = 0;
  cout << "Enter a number: ";
  cin >> n;
  for(i=1; i<=n; i++){
cout << i << " ";
  sum = sum + i;
}
cout <<"Sum is = "<< sum;
  return 0;
}