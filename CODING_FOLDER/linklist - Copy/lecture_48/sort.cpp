#include <iostream>
#include <list>
using namespace std;
#include <algorithm>

int main() {
    list<int> myList = {5, 2, 8, 1, 9};

    // Sort the list in ascending order
    myList.sort();

    cout << "Sorted List: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << std::endl;

    // To sort in descending order
    myList.sort(std::greater<int>());

    cout << "Sorted List Descending: ";
    for (int value : myList) {
        cout << value << " ";
    }
    
    return 0;
}