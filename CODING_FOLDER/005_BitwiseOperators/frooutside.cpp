#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;

  cout<<"printing count from 3 to n"<<endl;
  int i =1;
  for ( ; i <= n; )
  {
    cout<< i<<endl;
    i++;
  }
  

  return 0;
}