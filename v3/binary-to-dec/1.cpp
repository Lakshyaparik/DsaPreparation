#include <iostream>
#include <cmath>
using namespace std;
int main()
// 10000 -> 16
// 111 -> 7
{
  cout << "Enter a binary number: ";
  int n;
  cin >> n;
  int i = 0;
  double ans = 0;
  while (n)
  {
    int bit = n % 10; // remember that we are taking the last digit of the number, not the last bit beacuse it we write n&1 then compiler convert 1000 to to its binary format
    if (bit)
    {
      ans += pow(2, i);
    }
    i++;
    n /= 10;
  }
  cout << "Decimal number: " << ans << endl;
  return 0;
}