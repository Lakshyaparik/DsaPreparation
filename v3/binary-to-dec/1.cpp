#include <iostream>
using namespace std;
#include <math.h>
int main()
{
  int num = 7, bit, ans = 0;
  int i = 0;
  while (num > 0)
  {
    bit = num & 1;
    ans = ans + bit * pow(10, i);
    num = num >> 1;
    i++;
  }
  cout << ans;
  return 0;
}