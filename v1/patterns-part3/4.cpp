#include <iostream>
using namespace std;
/*

1 2 3
2 3 4
3 4 5

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
    while (j <= n)
    {
      cout << i + j - 1 << " ";
      j++;
    }
    i++;
    cout << endl;
    /* code */
  }
}