#include<bits/stdc++.h>
using namespace std;
int main()
{
 list<int> I;

 list<int> n(5,100);
 cout<<"printing n"<<endl;
 for(int i:n){
    cout<<i<<" ";
 }cout<<endl;

 I.push_back(1);
 I.push_front(2);
 for(int i:I){
    cout<<i<<" ";
 }cout<<endl;

 I.erase(I.begin());
 cout<<"after erase"<<endl;
 for(int i:I){
    cout<<i<<" ";
 }cout<<endl;

 cout<<"size  of list "<<I.size()<<endl;

}