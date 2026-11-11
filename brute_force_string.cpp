#include<bits/stdc++.h>
using namespace std;
int main(){
string str="Aniket";
char target='k';
for(int i=0;i<str.length();i++){
    if(str[i]==target){
        cout<<"found at index: "<<i;
        return 0;
    }
}
cout<<"not found";
return 0;
}