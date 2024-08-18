#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;

 int i =1;
 while (n >= i)
 {
     int a = i;
     int j = 1;
     while (i >= j)
     {
         cout << a;
         a++;
         j++;
     }
     cout << endl;
     i++;
 }
 return 0;
}

//another way
// int n;
//  cin>>n;

//  int i =1;
//  while(i<=n){
//         int j = i;
//         while(j<2*i){
//             cout<<j<<" ";
//             j =j+1;
//         }
//         cout<<endl;
//         i =i+1;