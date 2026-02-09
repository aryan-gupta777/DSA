#include <bits/stdc++.h>
using namespace std;

int head(int n)
{
    if (n == 0)
        return 1;

    cout << n << endl;
    head(n - 1);

    return 0;
}
int main()
{
    int n = 5;
    head(n);
}