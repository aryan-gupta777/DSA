#include <iostream>
using namespace std;
int main()
{
  int i, c, n;
  i = 2;
  c = 0;
  cout << "enter the value : ";
  cin >> n;

  while (n > i)
  {
    if (n % i == 0)
    {
      c = 1;
    }
    i++;
  }

  if (n == 1)
  {
    cout << "1 is not a prime number" << endl;
  }
  else if (c == 0)
  {
    cout << n << " is a prime number" << endl;
  }
  else
  {
    cout << n << " is not a prime number" << endl;
  }

  return 0;
}