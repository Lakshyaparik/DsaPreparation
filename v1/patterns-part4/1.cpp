#include <iostream>
using namespace std;
/*

D
C D
B C D
A B C D


*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << char('D' - (i - j)) << " ";
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}