#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    char ch = 'A';
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << ch;
            j++;
            ch++;
        }

        cout << endl;
        ch = ch - 1;
        i++;
    }

    return 0;
}