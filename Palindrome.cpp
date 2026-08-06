#include<bits/stdc++.h>
using namespace std;
int main(){
int n,org,reverse=0,digit;
cout<<"Enter a number: ";
cin>>n;
org=n;

while(n>0){
    int digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;
    }
if(org==reverse)
    cout<<org<<" is a palindrome";
else
    cout<<org<<" is not a palindrome" ;
return 0;
}
