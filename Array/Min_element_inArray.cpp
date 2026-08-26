#include<iostream>
using namespace std;
int main(){
    int arr[]={50,40,30,2,10,15,80};
    int n=7;
    int mini=arr[0];
    for(int i=1;i<n;i+++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"Minimum element: "<<mini;
}