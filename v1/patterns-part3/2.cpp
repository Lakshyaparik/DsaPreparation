#include <iostream>
using namespace std;
/*
A B C
A B C
A B C
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
    char ch = 'A';
    while (j <= n)
    {
      cout << ch << " ";
      ++ch;
      ++j;
    }
    i++;
    cout << endl;
  }
}