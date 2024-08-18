#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int a = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = a;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, size);

    return 0;
}