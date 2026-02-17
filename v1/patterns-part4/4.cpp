#include <iostream>
using namespace std;
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;

  int i = 0;
  int star = n - i;

  while (i <= n)
  {
    int space = i;
    int j = 0;
    while (space)
    {
      cout << " ";
      space--;
    }
    while (star)
    {
      cout << "*";
      star--;
    }
    cout << endl;
    i++;
  }
}