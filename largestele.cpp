#include<iostream>
using namespace std;
 int main(){
    int n;
    // cout<<"enter n";
    cin>>n;
    int arr[]={7,3,6,9,8};
    int lar=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>lar){
            lar=arr[i];
        }
    }
    cout<<lar<<endl;
    

 }