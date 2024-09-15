#include<bits/stdc++.h>
using namespace std;
int main()
{
    //        012345678901
  string str="daabcbaabcbc";
  string part="abc";

  while(str.length()!=0 && str.find(part)<str.length())
  {
    str.erase(str.find(part),part.length());
  }
  cout<<str;
}