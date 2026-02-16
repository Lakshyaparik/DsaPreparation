#include <iostream>
using namespace std;
/*

A 
B C
D E F

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
      cout << ch << " ";
      ch++;
      j++;
    }
    i++;
    cout << endl;
  }
}