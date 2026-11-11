#include<iostream>
using namespace std;
int main(){
int arr[]={10,20,30,45,50,60};
int target= 45;
for(int i=0;i<5;i++){
    if(arr[i]==target){
        cout<<"found at index: " <<i;
        return 0;
    }
}
cout<<"not found";
return 0;
}
