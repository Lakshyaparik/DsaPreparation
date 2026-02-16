#include <iostream>
using namespace std;
/*

A
B B
C C C


*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;
  int i = 1;
  char ch = 'A';
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << char(ch + i - 1) << " ";
      j++;
    }
    i++;
    cout << endl;
  }
}