#include<bits/stdc++.h>
using namespace std;
void cinget(){
  char str[50];
  cout<<"enter cin.get";
  cin.get(str,50);
  cout<<str<<endl;
}
//use online complier vs code not supporting getline function
void getline(){
  string str;
    cout << "Enter a string: "; 
    getline(cin, str);

  cout<<str<<endl;
}
int main()
{
  cinget();
  getline();
  
  string str = "C++ Programming";

  cout << "The length of string is: " << str.length() << endl;
  cout << "The capacity of string is: " << str.capacity() << endl;

  return 0;

}