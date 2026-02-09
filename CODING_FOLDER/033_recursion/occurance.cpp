#include <iostream>
using namespace std;
int firstoccurrence(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        if (mid == 0 || arr[mid - 1] != key)
        {
            return mid;
        }
        else
        {
            return firstoccurrence(arr, s, mid - 1, key);
        }
    }
    else if (arr[mid] > key)
    {
        return firstoccurrence(arr, s, mid - 1, key);
    }
    else if (arr[mid] < key)
    {
        return firstoccurrence(arr, mid + 1, e, key);
    }
    return 0;
}

int lastoccurrence(int arr[], int s, int e, int key)
{
    int n = (sizeof(arr) / sizeof(arr[0])) - 1;
    if (s > e)
    {
        return -1;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        if (mid == n || arr[mid + 1] != key)
        {
            return mid;
        }
        else
        {
            return lastoccurrence(arr, mid + 1, e, key);
        }
    }
    else if (arr[mid] > key)
    {
        return lastoccurrence(arr, s, mid - 1, key);
    }
    else if (arr[mid] < key)
    {
        return lastoccurrence(arr, mid + 1, e, key);
    }
    return 0;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 1, 2, 2, 3};

    int s = 0;
    int e = 7;
    int k = 1;
    int first = firstoccurrence(arr, s, e, k);
    int second = lastoccurrence(arr, s, e, k);

    cout << "arr[" << first << "] -- ";
    cout << "arr[" << second << "] ";

    return 0;
}