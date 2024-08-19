#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int ans = 0;
  while (n != 0)
  {
    int a = n % 10;
    ans = a + (ans * 10);

    n = n / 10;
  }

  cout << ans;
}