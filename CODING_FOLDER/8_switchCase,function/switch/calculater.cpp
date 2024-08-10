#include <iostream>
using namespace std;
int main()
{
  int a;
  cout << "enter the value of a " << endl;
  cin >> a;
  int b;
  cout << "enter the value of b " << endl;
  cin >> b;
  char ch;
  cout << "enter the operature(+,-,/,*) you want to use " << endl;
  cin >> ch;

  switch (ch)
  {
  case '+':
    cout << (a + b) << endl;
    break;
  case '-':
    cout << (a - b) << endl;
    break;
  case '/':
    cout << (a / b) << endl;
    break;
  case '*':
    cout << (a * b) << endl;
    break;
  default:
    cout << "unvalid" << endl;
  }

  return 0;
}