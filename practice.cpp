#include<iostream>
using namespace std;
void reverse(char name[],int length){
  int l=0,r=length-1;
  while(l<r){
    char temp=name[l];
    name[l]=name[r];
    name[r]=temp;
    l++;
    r--;
  }
}
int findLength(char name[]){
 int count=0;
 for(int i=0;name[i]!='\0';i++){
    count++;
 }
 return count;
}
int main(){
  char name[20];
  cout<<"Enter your name:";
  cin>>name;
  cout<<"My name is "<<name<<endl;
  cout<<"The length of the string is : "<<findLength(name)<<endl;
  reverse(name,findLength(name));
  cout<<"The reverse of the name is : "<<name;
  return 0;
}