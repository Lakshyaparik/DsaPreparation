#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  char ch = 'A';
  int i = 1;
  while (i <= n)
  {
    int j = 1;
    while (j <= i)
    {
      cout << (char)(ch + j - 1) << " ";
      j++;
    }
    ch++;
    i++;
    cout << endl;
  }
}