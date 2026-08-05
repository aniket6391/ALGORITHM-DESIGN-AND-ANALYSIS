#include<iostream>
using namespace std;
int main(){
int arr[5]={10,30,40,70,50};
int n=5;
int key=70;

for(int i=0;i<5;i++){
    if(arr[i]==key){
        cout<<"Element found at index: "<<i;
        return 0;
    }
}
cout<<"Element not found.";

}