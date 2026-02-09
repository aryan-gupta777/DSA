#include <bits/stdc++.h>
using namespace std;

void s(string &name, int i, int j)
{

    if (j < i)
    {
        return;
    }

    swap(name[i], name[j]);
    i++;
    j--;

    s(name, i, j);
}
int main()
{
    string name = "aryan";
    int j = name.length() - 1;

    s(name, 0, j);

    cout << name << endl;
}