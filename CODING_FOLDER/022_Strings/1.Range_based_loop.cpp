#include<bits/stdc++.h>

using namespace std;

void vectorloop(){
    // we can use the range based for loop with any range, so for example vectors
  // or the array container class... when using the array container class be 
  // mindful that the range based for loop will execute for each element in the 
  // array based on the array SIZE (in the below case, 50), rather than the 
  // number of elements that have been initialized (in the below case, 5)
  array<int,50> a= {1,2,3,4,5};
  
  // the loop will output the first 5 elements we initialized, followed by an 
  // additional 45 0s for the remaining elements 
   cout<<"-------------------------------------------"<<endl;
  for (int element : a)
  {
    cout << element <<"\t";
  }
}

// We can't use a range based for loop with an array function parameter like 
// this because in C++ array parameters are *really* pointers, i.e. the 
// memory address of the array is passed to the function.  There is a potential 
// workaround, but it's a bit complicated: https://stackoverflow.com/a/31824397
/*
void func1(int array[])
{
  for (int element : array)
  {
    cout << element << endl;
  }
}
*/

int main()
{
  int array[] = {1,2,3,4,5,6,7,8,9,10};

  // the loop body will execute for each element in the array in order, and the 
  // element variable will be set to each element of the array when it does
  for (int element : array)
  {
    cout << element << endl;
  }
   cout<<"-------------------------------------------"<<endl;
  // we can use the range based for loop with any range expression, not just 
  // variables, for example
  for (int element : {1,2,3,4,5})
  {
    cout << element << endl;
  }
   cout<<"-------------------------------------------"<<endl;
  // create a test string
  char string[] = "some characters in a string!";
  
  // count the number of s characters in the string using a range based for 
  // loop... any situation where we need to do something for each element in 
  // a range is a suitable situation to use a range based for loop 
  int s_count = 0;
  for (char c : string)
  {
    // increment the count, which was intially 0, whenever an 's' char is found
    if (c == 's') s_count++;
  }

  // output the count of s characters
  cout << "s count: " << s_count << endl << endl;
  
vectorloop();
  return 0;
}