#include<iostream>
using namespace std;
 int main(){
    int n;
    // cout<<"enter n";
    cin>>n;
    int temp=0;
    int arr[]={7,3,6,9,8};
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        
        cout<<arr[i]<<endl;
    }

    

 }