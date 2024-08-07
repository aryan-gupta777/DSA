#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of n : ";
    cin >> n;

    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        a = a + i;
    }
    cout << "sum of all natural number is " << a << endl;

    return 0;
}