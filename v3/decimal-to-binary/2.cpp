#include <iostream>
#include <cmath>
using namespace std;
int main()
// 5 -> 101
{
  int n;
  cout << "Enter a decimal number: ";
  cin >> n;
  int i = 0;
  double ans = 0;
  while (n)
  {
    double bit = n & 1;
    ans = bit * (pow(10, i)) + ans;
    n = n >> 1;
    i++;
  }
  cout << ans;
  return 0;
}