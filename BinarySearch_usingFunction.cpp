#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
int low=0;
int high=n-1;

while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==key){
        cout<<"Element found at index: "<<mid;
    }
    else if(arr[mid]<key)
    low=mid+1;
else
high=mid-1;
}
return -1;
}
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int key;
cout<<"Enter search element: ";
cin>>key;
int arr[n];

int pos=binarySearch(arr,10,key);
if(pos==-1)
cout<<"element not found";
else
cout<<"Element found at index: ";
return 0;


}