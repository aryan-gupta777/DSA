#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    for (int i = 0; i < n-1 ; i+=2)
    {
        int a = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = a;
    }
    //another method 
    // for (int i = 0; i < n; i+=2)
    // {
    //     if(i+1<n){
    //         swap(arr[i],arr[i+1]);
    //     }
    // }
    
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