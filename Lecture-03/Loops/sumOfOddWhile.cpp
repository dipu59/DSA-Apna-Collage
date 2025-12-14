// Q: Sum of all Odd Number From 1 to n. //
// Odd = 1,3,5,7,9;
// Even = 2,4,6,8;
#include<iostream>
using namespace std;

int main()
{
  int i=1, sum=0, N;
  cout << "Enter a Number: ";
  cin >> N;
  while(i<N){
    if(i%2 != 0){
      sum+=i;
      cout << i<<" ";
    }
    i++;
  }
  cout << "\nSum is = "<<sum;
  return 0;
}