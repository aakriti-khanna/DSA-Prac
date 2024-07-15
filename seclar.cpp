#include<iostream>
using namespace std;
 int main(){
    int n;
    // cout<<"enter n";
    cin>>n;
    int arr[]={7,3,6,9,8};
    int lar=arr[0];
    int slar=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>lar){
    //         lar=arr[i];
    //     }
    //     else{
    //         if(arr[i]!=lar && arr[i]>slar){
    //             slar=arr[i];
    //         }
    //     }

    // }
     for(int i=0;i<n;i++){
        if(arr[i]>lar ){
            lar=arr[i];
        }
        else{
            if(arr[i]!=lar && arr[i]>slar){
                slar=arr[i];
            }
        }

    }




    cout<<"lar"<<lar <<endl;
    cout<<"Slar"<<slar <<endl;
    

 }