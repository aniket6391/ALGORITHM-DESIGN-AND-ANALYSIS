#include <iostream>
#include <string>
using namespace std;
int main(){
string sentence="My name is Aniket";
string word = "Aniket";

int n=sentence.length();
int m=word.length();

for(int i=0;i<=n-m;i++){
    int j;

    for(j=0;j<m;j++){
        if(sentence[i+j]!=word[j]){
            break;
        }
    }
    if(j==m){
        cout<<"found at index: "<<i;
        return 0;
    }
}
cout<<"not found";
return 0;
}
