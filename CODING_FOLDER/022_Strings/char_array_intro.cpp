#include <bits/stdc++.h>
using namespace std;

char initialising(){

    char ch[20] = {"aryan gupta"};
    char aa[10] = {'r', 'o', 'i'};

    for (int i = 0; i < 20; i++)
    {
        cout << ch[i];
    }
    cout << endl;
    for (int j = 0; j < 10; j++)
    {
        cout << aa[j];
    }
    cout << endl;
    return 0;
}

// character function calling
void initialising_cin(char name[])
{
    cout << "enter your name : ";
    cin >> name;
    cout << "your name is " << name << endl;
}

// length finder
int getlength()
{
    char length[10];
    cout << "enter your city name ";
    cin >> length;
    int count = 0;
    for (int i = 0; length[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    initialising();

    // cin function
    char name[20];
    initialising_cin(name);

    // lenght of on char array
    int n = getlength();
    cout << "Lenght : " << n << endl;
}