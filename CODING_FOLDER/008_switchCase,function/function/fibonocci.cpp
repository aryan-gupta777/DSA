#include<iostream>
using namespace std;
void fibo(int n){
int a =0;
  int b =1;
  cout<<a<<" "<<b<<" ";

  for (int i = 1; i <=n; i++)
  {
    int sum = a+b;
    cout<<sum<<" ";

    a=b;
    b=sum;
  }
  
}

int main()
{
    int n;
    cin>>n;

    fibo(n);
  
  return 0;
}