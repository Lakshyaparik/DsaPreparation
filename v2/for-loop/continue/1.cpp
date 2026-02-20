#include <iostream>
using namespace std;
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    if (i == 5)
      continue; // skip the 5th iteration
    cout << i << endl;
  }
}