#include <bits/stdc++.h>
using namespace std;

void RowSum(int arr[][4])
{

    cout << "ROW WISE" << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << " = " << sum << endl;
    }
    cout << "-------------------------------------------" << endl;
}

void columnsum(int arr[][4])
{
    

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[j][i];
        }
    }
    cout << "COLUMN WISE" << endl;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << " = " << sum << endl;
    }
    cout << "-------------------------------------------" << endl;
}

int largestRowSum(int arr[][4])
{

    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}
int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    RowSum(arr);
    columnsum(arr);
    int ans = largestRowSum(arr);
    cout << "maximum index on row : " << ans;
}
