#include<bits/stdc++.h>
using namespace std;
int main()
{
 queue<string> q;
 q.push("aryan");
 q.push("kumar");
 q.push("gupta");
 
 cout<<"size before pop ->"<<q.size()<<endl;

 cout<<"First Element ->"<<q.front()<<endl;
 q.pop();
 cout<<"First Element ->"<<q.front()<<endl;

 cout<<"Size after pop->"<<q.size()<<endl;
}