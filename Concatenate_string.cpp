/*#include<bits/stdc++.h>
using namespace std;
int main(){
    string first,last;
    cout<<"Enter first name: ";
    cin>>first;
    cout<<"Enter last name: ";
    cin>>last;
    string fullName=first+" "+last;
    cout<<"Full name: "<<fullName;
    return 0;

}
*/
//Using C-Style Strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[20]="Aniket ";
    char s2[20]="Sharma";

    strcat(s1,s2);
    cout<<s1<<s2;
    return 0;

}