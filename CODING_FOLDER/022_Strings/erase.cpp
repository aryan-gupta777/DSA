#include<bits/stdc++.h>
using namespace std;
int main()
{
  cout<<"-------------------------------------------"<<endl;
  //             0123456789
  string text = "A string with lots of words in it!";
  
  cout<<"length before: "<<text.length()<<endl;
  //         2 7+1
  //         | |
  text.erase(2,7);//int text "string_" charcter will erase([2]=="s" to [7+1]=="g ")
                  //you can use .begin()and .end() function

  cout<<"length after: "<<text.length()<<endl;
  cout<<text<<endl;
  
 cout<<"-------------------------------------------"<<endl;
  //              0123456789
  string text1 = "A string with lots of words in it!";

  text1.erase(8);//it will erase all the character after the 8 index and 8 index

  cout<<text1<<endl;
  //
  
  cout<<"-------------------------------------------"<<endl;
   //             0123456789
  string text2 = "A string with lots of words in it!";

  text2.erase();//it will erase all the character from the string 
  text2.push_back(1);//just adding a charater in the whole erased string and add 
                     //a ascii(1==smily face) value for just the reference is the string is completly erased
  cout<<text2<<endl;

  cout<<"-------------------------------------------"<<endl;

}