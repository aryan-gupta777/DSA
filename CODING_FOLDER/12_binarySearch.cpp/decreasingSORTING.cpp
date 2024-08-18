#include <iostream>
using namespace std;
int binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
        //go to left side of mid array
            end = mid - 1;
        }
        else
        {
        //go to right side of mid array  
            start = mid + 1;
        }

     mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int even[5] = {10, 8, 6, 4, 2};//monatonically decreasing order
    int odd[6] = {11, 9, 7, 5, 3};

    int BSeven = binarysearch(even, 5, 10);
    int BSodd = binarysearch(odd, 6, 3);

    cout << "Index of 8 is : " << BSeven<<endl;
    cout << "Index of 3 is : " << BSodd;

    return 0;
}