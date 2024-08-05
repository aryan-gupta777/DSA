#include<iostream>
using namespace std;
int main()
{
 char a ;
 cout<<"print the value : ";
 cin >> a; 

 if(a >= 'A'&& a<='Z'){
    cout<<"this is a upper case ";
 }
 else if(a >='a' && a<='z'){
    cout<<"this is lower case ";
 }
 else if(a >='0'&& a <='9' ){
    cout<<"this is a digit";
 }
  return 0;
}