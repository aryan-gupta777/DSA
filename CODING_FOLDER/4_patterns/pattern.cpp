#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;

 int i=1;
 while (i<=n)
 {
    int j=n;
    while (j>=i)
    {
        cout<<"*";
        j--;
    }
    cout<<endl;
    i++;
 }
  
  return 0;
}