#include <iostream>
using namespace std;
/*

****
***
**
*

*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;

  int i = 1;
  while (i <= n)
  {
    int star = (n - i) + 1;
    while (star)
    {
      cout << "*";
      star--;
    }
    i++;
    cout << endl;
  }
}