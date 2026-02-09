#include <iostream>
using namespace std;

int &func(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}

int *fun(int n)
{
    int *ptr = &n;
    return ptr;
}

int update2(int& n)
{
    // cout << n << endl;
    //cout << &n << " ";
    n++;
    return 1;
}

void update1(int n)
{
    n++;
}

int main()
{

    /*
    int i = 5;

    //create a ref variable

    int& j = i;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

    int n = 5;

    cout << "Before " << n << endl;
    cout << "Address : " << &n << endl;
    update2(n);
    cout << "After " << n << endl;
    cout<<sizeof(n);

    fun(n);

    return 0;
}