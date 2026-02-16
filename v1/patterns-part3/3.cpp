#include <iostream>
using namespace std;
/*

A B C D
E F G H
I J K L
M N O P

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
    while (j <= n)
    {
      cout << ch << " ";
      j++;
      ch++;
    }
    i++;
    cout << endl;
  }
}