#include <iostream>
using namespace std;
int firstoccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
         if(arr[mid]<key)
        {
            start = mid + 1;
        }
         mid = start + (end - start) / 2;
    }
    return ans;
}

int lastoccurrence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        if(arr[mid]<key)
        {
            start = mid + 1;
        }
         mid = start + (end - start) / 2;

    }
    return ans;
}

int main()
{
    int key ;
    cin>>key;
int arr[8]={0,1,1,1,1,2,2,3};

int first =firstoccurrence(arr,8,key);
int last =lastoccurrence(arr,8,key);

int NoOfOccurrence=last-first+1;

cout<<"no of occurrence of element "<<key<<" is "<<NoOfOccurrence;
    return 0;
}