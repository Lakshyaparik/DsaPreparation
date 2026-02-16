#include <iostream>
using namespace std;
int main()
{
  /*

  *
  * *
  * * *

  */
  // n is always row (max of i)
  cout << "Enter the n value: " << endl;
  int n;
  cin >> n;

  int i = 1;

  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << "*" << " ";
      j = j + 1;
    }
    i++;
    cout << endl;
  }
}