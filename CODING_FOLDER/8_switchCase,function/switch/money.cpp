#include <iostream>
using namespace std;
int main()
{
    int money;
    cout << "enter the amount" << endl;
    cin >> money;

    switch (1)
    {
    case 1:
        cout << "no of 100 rupes notes " << money / 100 << endl;
        money = money % 100;
    case 2:
        cout << "no of 50 rupes notes " << money / 50 << endl;
        money = money % 50;
    case 3:
        cout << "no of 20 rupes notes " << money / 20 << endl;
        money = money % 20;
    case 4:
        cout << "no of 1 rupes notes " << money / 1 << endl;
    
    }

    return 0;
}