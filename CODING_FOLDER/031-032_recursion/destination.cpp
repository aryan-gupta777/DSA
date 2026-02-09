#include <bits/stdc++.h>
using namespace std;
int match(int s, int e)
{

    cout << s << " - " << e << endl;
    if (s == e)
    {
        cout << "done" << endl;
        return 1;
    }

    match(s + 1, e);
    return 0;
}

int main()
{
    int s = 1;
    int end = 5;

    match(s, end);
}