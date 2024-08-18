#include <iostream>
using namespace std;
int BitA(int num)
{
    int count = 0;
    while (num != 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "enter the value of a : ";
    cin >> a;
    cout << "enter the value of b : ";
    cin >> b;
    int ans = BitA(a) + BitA(b);

    cout << ans;
    return 0;
}