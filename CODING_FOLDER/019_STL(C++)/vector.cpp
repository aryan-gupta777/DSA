#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "print v" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> a(5, 1);
    cout << "print a" << endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3); // dubble the size of an array
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;

    cout << "Element at 2nd index " << v.at(2) << endl;

    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;

    cout << "before pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;
}