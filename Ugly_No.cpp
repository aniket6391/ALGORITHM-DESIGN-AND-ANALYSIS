#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter term of number: ";
cin>>n;

if(n<=0){
    cout<<" not an ugly number";
    return 0;
}
while(n%2==0)
    n=n/2;
while(n%3==0)
      n=n/3;
while(n%5==0)
    n=n/5;

    if(n==1)
        cout<<"  an ugly number";
    else
        cout<<" not an ugly number";
    return 0;

}
