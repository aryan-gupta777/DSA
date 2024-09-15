#include <bits/stdc++.h>
using namespace std;
void reverse(char ch[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
    cout<<"reverse of words is :"<<ch;
    
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
    
   reverse(ch, n);
}