#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,30,40,50};
int n=5;
int key;

cout<<"Enter element to search: ";
cin>>key;
int low=0,  high=n-1;
for(int i=0;low<=high;i++){
    int mid=(low+high)/2;

    if(arr[mid]==key){
        cout<<"Element found at index: ";
        return 0;
    }
    else if(arr[mid]<key)
    low=mid-1;
else
high=mid-1;
}
cout<<"Element not found";
return 0;
}