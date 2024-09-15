#include <bits/stdc++.h>
using namespace std;
int main()
{
    //             0123456789
    string text = "A string with lots of words in it!";

    string temp = text.substr(2, 7);
    cout << temp << endl;

    cout << "-------------------------------------------" << endl;

    string temp1 = text.substr();
    cout << temp1<<endl;

    cout<<"-------------------------------------------"<<endl;
    string temp2=text.substr(9);
    cout<<temp2<<endl;

    cout<<"-------------------------------------------"<<endl;
    
    string temp3 = text.substr(text.find("lots"),4);//4 is the no of words you have to print on findind a string
    string temp4 = text.substr(text.find("lots"),7);
    cout << temp3<<endl;
    cout << temp4<<endl;


}