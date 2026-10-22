#include<iostream>
using namespace std;

int main(){
int arr[]={10,20,5,12,30,40,8};
int n=7;

int largest=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>largest){
        lagest=arr[i];
    }
}
cout<<"largest element: "<<largest;
return 0;
}