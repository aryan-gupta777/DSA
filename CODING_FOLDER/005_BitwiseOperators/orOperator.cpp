#include <iostream>
using namespace std;
// only one of the condition must be true fro || 
// so it won't check ++b>2

int main()
{
    int a = 1;
    int b = 2;
    if (a-- > 0 || ++b < 2)
    {
        cout << "Stage1 - inside if"<<endl;
    }
    else
    {
        cout << "stage2 - inside else"<<endl;
    }
    cout << a << " " << b << endl;

    return 0;
}