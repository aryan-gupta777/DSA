#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int s, int count)
{
    if (s == 0)
    {
        cout << count << endl;
        return count;
    }

    count += arr[0];
    return sum(arr + 1, s - 1, count);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int size = 5;

    sum(arr, size, 0);
}