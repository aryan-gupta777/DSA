#include <iostream>
using namespace std;

int AP(int a)
{
    int sol = 3 * a + 7;
    return sol;
}
int main()
{
    int n;
    cin >> n;

    int ans = AP(n);
    cout << ans;
    return 0;
}