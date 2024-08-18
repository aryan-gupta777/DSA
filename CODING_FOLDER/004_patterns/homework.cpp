#include <iostream>
using namespace std;
int main()
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int a = n - i + 1;
        while (j <= a)
        {
            cout << j;
            j++;
        }

        int star1 = 1;
        while (star1 < i)
        {
            cout << "**";
            star1++;
        }

        int k = n-i+1;
        

        while (k >= 1)
        {
            cout << k;
            k--;
        }

        cout << endl;
        i++;
    }
}