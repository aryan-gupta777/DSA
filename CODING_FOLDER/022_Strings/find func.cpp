#include<bits/stdc++.h>
using namespace std;
int main()
{
    //        01234567890123456
  string str="we will find you!"; 
  string s="you!";

  int f=str.find(s);
  cout<<f<<endl;

  int f3=str.find("you!");
  cout<<f3<<endl;
  cout<<"-------------------------------------------"<<endl;

  int f1=str.find(s);
  if(f1!=-1)
    cout<<"the character is present"<<endl;
  else
      cout<<"the character is absent"<<endl;


}