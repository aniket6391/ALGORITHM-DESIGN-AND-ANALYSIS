#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
string str;
cout<<"Enter string: ";
cin>>str;

reverse(str.begin(),str.end());
cout<<"Reverse string: "<<str;
return 0;
}