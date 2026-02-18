#include <iostream>
using namespace std;
/*
1234
 234
  34
   4

*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;
  int i = 0;
  while (i <= n)
  {
    int space = i;
    while (space)
    {
      cout << " ";
      space--;
    }
    int j = 1;
    while (j <= n - i)
    {
      cout << j + i;
      j++;
    }
    cout << endl;
    i++;
  }
}