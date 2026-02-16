#include <iostream>
using namespace std;
/*

A B C
B C D
C D E

*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;

  char ch = 'A';
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << char(ch + (i + j - 2)) << " ";
      j++;
    }
    i++;
    cout << endl;
  }
}