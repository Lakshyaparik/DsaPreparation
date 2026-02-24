#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
  int i = 0;
  while (i < n)
  {
    int j = 1;
    while (j <= n - i)
    {
      cout << j << " ";
      j++;
    }
    int k = 1;
    while(k<=i){
      cout<<"*"<<" ";
      k++;
    }
    int l=i;
    while(l){
      cout<<"*"<<" ";
      l--;
    }
    int m = n-i;
    while(m){
      cout << m << " ";
      m--;
    }
    i++;
    cout << endl;
  }
}