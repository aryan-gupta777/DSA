#include<bits/stdc++.h>
using namespace std;
int main()
{
  int basic[3]={1,2,3};
  

  array<int,4> a={1,2,3,4};
   
  int size =a.size();

  for(int i=0;i<size;i++){
   cout<<a[i]<<endl;
  }

cout<<"Element at 2nd index -> "<<a.at(2)<<endl;
cout<<"Element at 3rd index -> "<<a.at(3)<<endl;
cout<<"Empty or not -> "<<a.empty()<<endl;
}