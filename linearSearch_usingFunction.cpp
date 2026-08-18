#include<iostream>
using namespace std;
int linearSerch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}
int main(){
    int arr[5]={7,8,5,1,2};
    int key=1;
    int result=linerarSearch(arr,5,key);
    if(result==-1)
    cout<<"Element not found";
else
cout<<"Element found at index: "<<result;
return 0;
}