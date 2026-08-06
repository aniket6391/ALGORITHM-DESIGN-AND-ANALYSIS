#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={1,2,3,4,5};
int n=5;
reverse(arr,arr+n);
cout<<"Reverse array: ";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;

}