#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string &name, int i)
{
    if (i <= name.size() / 2)
        return true;

    if (name[i] != name[name.size() - i - 1])
    {
        return false;
    }
    else
    {
        return ispalindrome(name, i++);
    }
}
int main()
{
    string name = "lassal";

    if (ispalindrome(name, 0))
    {
        cout << "palindrome";
    }
    else
    {
        cout << " not a palindrome";
    }
}