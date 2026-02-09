#include <iostream>
using namespace std;

#define PI 3.14

#define instagram followers
#define followers 123

int main()
{

    int r = 5;
    // double pi = 3.14;

    double area = PI * r * r;

    cout << "Area is " << area << endl;

    cout << "your instgram followers are : " << instagram;

    return 0;
}

// macros like PI defined using #define do not take any memory space
// during program execution.This is because macros are handled by the preprocessor
// before the compilation begins.