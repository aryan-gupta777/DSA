#include<iostream>
using namespace std;
/*
 * Do not use global variables.
 * Global variables can lead to code that is hard to debug and maintain.
 * Prefer passing variables as function arguments or using local variables.
 */

int score = 15;


void a(int& i) {

    cout << score << " in a" << endl;
    score++;
    char ch = 'a';
    cout << i << endl;
}

void b(int& i) {
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main() {
    cout << score << " in main" << endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}