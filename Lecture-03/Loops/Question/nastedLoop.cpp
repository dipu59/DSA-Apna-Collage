#include <iostream>
using namespace std;

int main()
{
  int n ;
  cout << "Enter Row no: ";
  cin >> n;
  int m ;
  cout << "Enter Col no: ";
  cin >> m;
  for (int i = 1; i <= n; i++)
  {
    cout << "*";

    for (int i=1; i<=m-1; i++)
    {
      cout << "*";
    }
    cout << endl;
  }
  cout << endl;
  return 0;
}