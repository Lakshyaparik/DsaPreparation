#include <iostream>
using namespace std;
int main()
/*

A A A
B B B
C C C

*/
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;

  int i = 1;
  char ch = 'A';
  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << ch << " ";
      j++;
    }
    ch++;
    i++;
    cout << endl;
  }
}