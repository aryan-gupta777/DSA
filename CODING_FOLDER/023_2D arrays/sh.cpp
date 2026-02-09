#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int arr[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
}
    for(int i=0;i<3;i++){
        int count=0;
    for(int j=0;j<3;j++){
        count+=arr[i][j];
    }
    cout<<count;
    cout<<endl;


}

}