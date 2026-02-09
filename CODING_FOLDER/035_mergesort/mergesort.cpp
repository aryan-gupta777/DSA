#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int s, int e, int mid)
{
    int i = s;
    int j = mid + 1;

    vector<int> temp;
    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= e)
    {
        temp.push_back(arr[j]);
        j++;
    }
    for (int idx = 0; idx < temp.size(); idx++)
    {
        arr[idx + s] = temp[idx];
    }
}


void mergesort(vector<int> &arr, int s, int e)
{
    if (s < e) // if(s>e){return }; 
    {
        int mid = s + (e - s) / 2;

        mergesort(arr, s, mid); // left

        mergesort(arr, mid + 1, e); // right

        merge(arr, s, e, mid);
    }
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 1, 9};
    mergesort(arr, 0, arr.size() - 1);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}



