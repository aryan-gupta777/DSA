#include<iostream>
using namespace std;

void dummy(int n ) //pass by value n is a clone of main n not a original body of main n variable
{
    n++;
    cout << " n is " << n <<endl;

}

int main() {

    int n;
    cin >> n;

    dummy(n);

    cout<<"number n is "<< n << endl;


    return 0;
}