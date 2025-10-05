#include<iostream>
using namespace std;
bool checkPalindrome(char name[],int length){
int l=0,r=length-1;
while(l<r){
  if(name[l]!=name[r]){
    return false;
  }
  l++;
  r--;
}
return true;
}
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
  cout<<"The reverse of the name is : "<<name<<endl;
  if(checkPalindrome(name,findLength(name))){
    cout<<"The string is palindrome";
  }
  else{
    cout<<"The string is not palindrome";
  }
  return 0;
}