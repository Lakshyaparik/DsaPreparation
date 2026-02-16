#include <iostream>
using namespace std;
int main()
{

  // 1 2 3
  // 4 5 6
  // 7 8 9

  cout << "Enter the n value: " << endl;
  int n;
  cin >> n;

  int i = 1;
  int count = 1;

  while (i <= n)
  {
    int j = 1;
    while (j <= n)
    {
      cout << count << " ";
      j = j + 1;
      count = count + 1;
    }
    i++;
    cout << endl;
  }
  return 0;
}