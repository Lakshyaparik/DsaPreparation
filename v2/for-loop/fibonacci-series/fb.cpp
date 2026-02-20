#include <iostream>
using namespace std;
int main()
{
  cout << "Enter the number of terms: ";
  int n;
  cin >> n;

  cout << "Fibonacci Series: ";
  int a = 0, b = 1;
  cout << a << " " << b << " ";
  for (int i = 1; i <= n; i++)
  {
    int nextnum = a + b;
    cout << nextnum << " ";
    a = b;
    b = nextnum;
  }
}