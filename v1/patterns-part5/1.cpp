#include <iostream>
using namespace std;
/*
   1
  121
 12321
1234321

*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int space = n - i;
    // 1st triangle
    while (space)
    {
      cout << " ";
      space--;
    }
    int j = 1;
    // 2nd triangle
    while (j <= i)
    {
      cout << j;
      j++;
    }
    // 3rd triangle
    int k = i - 1;
    while (k)
    {
      cout << k;
      k--;
    }
    cout << endl;
    i++;
  }
}