#include<bits/stdc++.h>
using namespace std;
int lowercase(char ch){
    
     if(ch>='a'&&ch<='z'){
        return ch;
     }
     else{
        char temp = ch - 'A' + 'a';
        return temp;
     }
  
}
int plaindrme(char ch[],int n){
     int s=0;
     int e=n-1;
     while(s<e){
        if(lowercase(ch[s++])!=lowercase( ch[e--])){
            return 0;
        }
        else{
            s++;e--;
        }
     }
     return 1;
}

int count(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[100];
    cout << "Enter the words ";
    cin >> ch;

    int n = count(ch);
    cout<<"enter value is plaindrme or not : "<< plaindrme(ch,n);

    
  
}