#include <iostream>
using namespace std;
/*

1
2 3
3 4 5
4 5 6 7

*/
int main()
{
  cout << " Enter the value of n: " << endl;
  int n;
  cin >> n;
  int i=1;
  while(i<=n){
    int j=1;
    int val=i;
    while(j<=i){
      cout<<val<<" ";
      val++;
      j++;
    }
    i++;
    cout<<endl;
  }
}