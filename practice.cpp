#include<iostream>
using namespace std;
char toLowerCase(char ch){
  if(ch>='a'&&ch<='z'){
    return ch;
  }
  else{
     return ch-'A'+'a';
  }
}
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
  char ch;
  cout<<"Enter your name:";
  cin>>name;
  cout<<"My name is "<<name<<endl;
  cout<<"The length of the string is : "<<findLength(name)<<endl;
  reverse(name,findLength(name));
  cout<<"The reverse of the name is : "<<name<<endl;
  if(checkPalindrome(name,findLength(name))){
    cout<<"The string is palindrome"<<endl;
  }
  else{
    cout<<"The string is not palindrome"<<endl;
  }
  cout<<"Enter the uppercase character:"<<endl;
  cin>>ch;
  cout<<"The lowercase character is :"<<toLowerCase(ch);
  return 0;
}