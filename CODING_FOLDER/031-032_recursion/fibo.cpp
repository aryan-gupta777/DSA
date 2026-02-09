#include <iostream>
using namespace std;

int fibo(int n)
{
    // base case
    if (n == 0 || n == 1)
        return n;

    // recursive relation
    return fibo(n - 1) + fibo(n - 2);
}

int main()
{

    cout << "fibonachi : 0 1 ";
    for (int i = 2; i <= 10; i++)
    {

        int m = fibo(i);
        cout << m << " ";
    }

    return 0;
}
