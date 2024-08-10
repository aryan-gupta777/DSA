#include<iostream>
using namespace std;
int main()
{
  int n=1;
  

  switch(n){
    case 1:cout<<"case 1 executed"<<endl;

    case 2:cout<<"case 2 executed"<<endl;
            exit(0);//end the program here

    case 3:cout<<"case 3 executed"<<endl;


  }
  
  cout<<"if you are seeing this statment then exit function is not working";
  return 0;
}