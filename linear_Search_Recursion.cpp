#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int i,int key){
if(i==n)
    return -1;

    if(arr[i]==key)
    return i;
return linearSearch(arr,n,i+1,key);
    }
int main(){
int n,key;
cout<<"Enter no.of elements: ";
cin>>n;
int arr[n];
cout<<"Enter elements: ";
for(int i=0;i<n;i++)
cin>>arr[i];

cout<<"Enter Search element: ";
cin>>key;

int pos=linearSearch(arr,n,0,key);
if(pos==-1)
cout<<"Element not found";
else
cout<<"Element found at index: "<<pos;
return 0; 

}

