#include<iostream>
using namespace std;
int peak(int arr[],int n)
{
    int start=0;
    int end =n-1;
    int mid=start+(end-start)/2;
    while(start<end){
    if(arr[mid]<arr[mid+1])
     {
       start=mid+1; 
     }
    else {
         end=mid;
     }
     mid=start+(end-start)/2;

    }
    return start;
}
int main()
{
  int arr[5]={0,2,3,5,0};
  int mou=peak(arr,5);
  cout<<arr[mou];
  return 0;
}