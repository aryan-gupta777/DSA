#include<iostream>
using namespace std;
void printarray(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    //accessing an array
    cout<<arr[i]<<" ";
  }
  cout<<endl<<"printing Done"<<endl;
  
}

void address(int arr[],int size){
  for (int i = 0; i < size; i++)
  {
    //& = value of the addess
    cout<<&arr[i]<<" ";
  }
  cout<<endl<<"printing Done"<<endl;
  
}


int main() {

    //declare
    int hello[2];
    int hola[2];
    int location[10];
    
    //initialising an array 
    hello[0]=5;
    hello[1]=-6;

    //function calling in an array
    printarray(hello,2);
    cout<<hello[3]<<"hiiii"<<endl;
    printarray(hola,2);
    address(location,10);

   //declareing and initialising both in an array 
    int a[3]={1,3,9};
    //    or
    int a1[]={5,9,46};
    //    or
    char ch[5]={'a','r','y','a','n'};

    //accesing an element
    printarray(a,3);
    printarray(a1,3);
    //char is not called in function because it is of int type(int arr) you can make a character printing function
    cout<<"printing a charater : "<<ch[4]<<endl;
    cout<<"printing a charater : "<<ch[1]<<endl;

    //initialising all locations with 0
    int zero[10]={0};
    printarray(zero,10);
  
    //initialising all locations with 1 [not possible with below line]
    int one[10]={1};
    printarray(one,10);
    
    //array size
    int size=sizeof(one)/sizeof(int);
    cout<<"size of one array is "<<size<<endl;

    cout << endl << "Everything is Fine " << endl << endl;

    return 0;
}