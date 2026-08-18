#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}

int main(){
int arr[5]={5,3,6,2,1};
int key=2;

int result=linearSearch(arr,5,key);
if(result==-1)
    cout<<"Element not found";
else
    cout<<"Element found at index: "<<result;
return 0;
}
