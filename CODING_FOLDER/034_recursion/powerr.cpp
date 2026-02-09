#include <bits/stdc++.h>
using namespace std;

int power(int base, int exponent, int result)
{
    if (exponent == 0)
        return result;

    result = result * base;
    return power(base, exponent - 1, result);
}

int main()
{
    int base = 3;
    int exponent = 2;
    int result = 1;
    int ans = power(base, exponent, result);

    cout << ans;
}