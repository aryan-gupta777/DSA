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
        char a = ch;
        while (j <= i)
        {

            cout << a;
            j++;
            a++;
        }
        ch++;
        cout << endl;
        i++;
    }

    return 0;
}