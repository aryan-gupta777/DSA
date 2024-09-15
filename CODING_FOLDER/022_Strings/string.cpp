#include <bits/stdc++.h>
using namespace std;
void copyfunction()
{   
    cout << "using copy function" << endl;

    char s1[20] = "hello ";
    char s2[20] = "world !";

    strcpy(s1, s2); // you can use char arrays for this funtion.
                    // the data of s2 string is copyed and pasted in s1 sting.

    cout << "s1->" << s1 << endl;
    cout << "s2->" << s2 << endl;
}

void concatenates()

{
    cout << "concatenates two string" << endl;
    char s1[50] = "hello";
    char s2[20] = "-world !";

    strcat(s1, s2); // adding the data of s2 string to s1
    cout << s1 << endl;
}

void compares()
{
    cout<<"comparing the two strings"<<endl;
    char i[] = "aryan";
    char j[] = "aryan";

    if (strcmp(i, j) == 0)
    {
        cout << "both the strings are equal";
    }
    else
    {
        cout << "both the strings are not equal";
    }

    /* 0 -> the c string are the same
       < -> the first argument c sting comes before the second argument
       > -> the second argument c string comes before the first argument
    */
}

int main()
{
    string str = "aryan gupta";
    int n = str.length();
    cout << str << " " << n << endl;

    // adding a character
    str.push_back('c');
    cout << " push_back " << str << endl;

    // removing the last character
    str.pop_back();
    cout << " pop_back " << str << endl;

    copyfunction();
    concatenates();
    compares();

    string ss={'a','d','a','\0','s','s'};
 cout<<ss; 
}