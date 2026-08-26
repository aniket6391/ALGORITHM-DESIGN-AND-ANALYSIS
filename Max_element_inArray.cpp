#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,40,50,80,60,90,100,150};
int n=9;
int maxi=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>maxi){
        maxi=arr[i];
    }
}
cout<<"Maximum element: "<<maxi;
return 0;

}