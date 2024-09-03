#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v) {

    int s = 0, e =v.size()-1;

    while(s<=e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }

    return v;

}

void print(vector<int> v) {
int n =v.size();
    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v={11,7,3,12,4} ;

   
    vector<int> ans = reverse(v);

    cout << "Printing reverse Array" <<endl;
    print(ans);


    return 0;
}