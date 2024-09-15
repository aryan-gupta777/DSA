#include<bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
    {
        int arr[26]={0};
        int n=str.length();
        for(int i=0; i<n;i++){
            char ch = str[i];
            int number =0;
            number = ch-'a';
            arr[number]++;
        }
        
        int maxi=-1,ans=0;
        for(int i=0;i<26;i++){
            if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
        }
    

return 'a'+ans;
}


int main()
{
  string str;
  cin>>str;

 
  cout<< getMaxOccuringChar(str);
}