#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
        return;

    // one pass of bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive call for remaining elements
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[6] = {4, 2, 6, 9, 1, 0};
    int n = 6;
    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}