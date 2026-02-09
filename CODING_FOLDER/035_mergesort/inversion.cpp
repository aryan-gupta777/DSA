#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, int s, int e, int mid)
{
    int i = s;
    int j = mid + 1;
    int invcount = 0;

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
            invcount += (mid - i + 1);
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
    return invcount;
}

int mergesort(vector<int> &arr, int s, int e)
{
    if (s < e)
    {
        int mid = s + (e - s) / 2;

        int leftinvcount = mergesort(arr, s, mid); // left

        int rightinvcount = mergesort(arr, mid + 1, e); // right

        int invcount = merge(arr, s, e, mid);

        return leftinvcount+rightinvcount+invcount;
    }
    return 0;
}
int main()
{
    vector<int> arr = {6,3,5,2,7};
    int ans = mergesort(arr, 0, arr.size() - 1);
    cout << "inv : " << ans << endl;

    return 0;
}
