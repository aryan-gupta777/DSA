#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space >= 1)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int a = i-1;
        while (a)
        {
            cout << a;
            a--;
        }
        
        cout << endl;

        i++;
    }
}