#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value : ";
  cin >> n;

  bool isprime =1;

  for (int i = 2; i < n; i++)
  {
    
    if (n % i == 0)
    {
      isprime = 0;
      break;
    }
    
  }

  if (n == 1)
  {
    cout << "1 is not a prime number" << endl;
  }
  else if (isprime == 1)
  {
    cout << n << " is a prime number" << endl;
  }
  else
  {
    cout << n << " is not a prime number" << endl;
  }

  return 0;
}