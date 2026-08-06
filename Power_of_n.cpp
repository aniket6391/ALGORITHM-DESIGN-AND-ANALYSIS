#include<iostream>
using namespace std;
int main(){
    int base,exp;
    cout<<"Enter base :";
    cin>>base;

    cout<<"Enter exponent: ";
    cin>>exp; 

    cout<<"Power: "<<pow(base,exp);
    return 0;
}