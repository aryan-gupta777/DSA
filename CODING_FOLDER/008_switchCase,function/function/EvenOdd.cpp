#include<iostream>
using namespace std;
//0 -> odd
//1 -> even
bool isEven(int a){
    if (a&1)
    {
        return 0;//odd
    }
    return 1;//even
}

int main()
{
  int n;
  cin>>n;

  if (isEven(n))
  {
   cout<<"number is even";
  }
  else
  {
    cout<<"number is odd";
  }
  
  return 0;
}