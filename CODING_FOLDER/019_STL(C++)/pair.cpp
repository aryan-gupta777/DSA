#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second<<endl;

    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first<<endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
}