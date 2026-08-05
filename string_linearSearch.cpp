#include<iostream>
using namespace std;
int main(){
 string n[5]={"aman","ram","raj","shyam","radha"};
 string key;
  bool found=false;

  cout<<"Enter name to search: ";
  cin>>key;
for(int i=0;i<5;i++){
if(n[i]==key){
cout<<"name found at index: "<<i<<endl;
found=true;
break;
}
}
if(!found)
cout<<"name not found";
return 0;

}
