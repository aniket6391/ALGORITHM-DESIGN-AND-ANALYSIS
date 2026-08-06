#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
cout<<"Enter string: ";
cin>>str;

reverse(str.begin(),str.end());
cout<<"Reverse string: "<<str;
return 0;
}