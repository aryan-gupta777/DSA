#include <bits/stdc++.h>
using namespace std;
void row_Wise()
{
    int arr[3][4];

    cout << "enter the value for storing row wise" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------------" << endl;
}

void column_wise()
{

    int arr[3][4];

    cout << "enter the value for storing column wise" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------------" << endl;
}

void twoD_arrays(){
    // creting 2d arrays
    int arr1[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-------------------------------------------" << endl;
}

bool ispresent(int arr[][4], int target)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    twoD_arrays();

    row_Wise();

    column_wise();

    int arr[3][4] = {{1, 2}, {3, 4}, {5, 6}};
    int target;
    cout << "enter the target" << endl;
    cin >> target;

    if (ispresent(arr, target))
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "Element is not present" << endl;
    }
    cout << "-------------------------------------------" << endl;
}