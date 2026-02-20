#include <iostream>
using namespace std;
int main()
{
  cout << "Enter a number: ";
  int num;
  bool isPrime = true;
  cin >> num;
  for (int i = 2; i < num; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  if (isPrime)
  {
    cout << num << " is a prime number";
  }
  else
  {
    cout << num << " is not a prime number";
  }
}