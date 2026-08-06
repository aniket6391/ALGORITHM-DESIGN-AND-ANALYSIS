#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4};
int n=5;
reverse(arr,arr+n);
cout<<"Reverse array: ";
for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
}
return 0;

}