#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[], int n) {

    int mini = INT_MAX;
    
    
    for(int i = 0; i<n; i++) {
        
        mini = min( mini, num[i]);
        
        //if(num[i] < min){
        //    min = num[i];
        //}
    }

    //returning min value 
    return mini;
}

int getMax(int num[], int n) {

    int maxi = INT_MIN;
    
    for(int i = 0; i<n; i++) {

        maxi = max(maxi, num[i]);

       // if(num[i] > max){
         //   max = num[i];
       // }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}
//dry run
/*
let say arr[4]={5,8,1,-2};

getMIN
    min=2^31;
      if(num[i]<min){
     min=num[i];
                     }
{
  min=2^31;
  
  (5<2^31)
  min=5;
  
  (8<5)
  min=5;
  
  (1<5)
  min=1;
  
  (-2<1)
  min=-2
}
*/