#include<iostream>
using namespace std;
 int main(){
    int n;
    // cout<<"enter n";
    cin>>n;
    int arr[n];
    n=sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int num=1;
      for(int i=0;i<n;i++){
          num=num*arr[i];
          
      }
      for(int i=0; i<n; i++){
            cout<<num/arr[i]<<" ,:";
      }
 }