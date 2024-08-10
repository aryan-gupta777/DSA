#include <iostream>
#include <math.h>
using namespace std;

// Decimal to Binary conversion code works fine on online compilers but gives wrong answer on VS code
// https://stackoverflow.com/questions/74096915/decimal-to-binary-conversion-code-works-fine-on-online-compilers-but-gives-wrong

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n&1;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
        
    }
    cout<<ans;

    
}