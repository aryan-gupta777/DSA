#include <bits/stdc++.h>
using namespace std;

int m(int n)
{

    cout << n + 1 << endl;

    if (n > 0)
    {

        m(n - 1);
    }

    cout << n - 1 << endl;
    return 1;
}

int main()
{
    int n;
    cin >> n;

    m(n);
}