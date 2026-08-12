c#include<iostream>
using namespace std;
int main(){
int num,arr[100],i=0;
cout<<"Enter a number: ";
cin>>num;

while(num>0){
    arr[i]=num%10;
    num=num/10;
    i++;
}
cout<<"Reverse : ";
for(int j=0;j<i;j++)
    cout<<arr[j]<<" ";
return 0;
}
