#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
string removeOccurences(string s, string part) {
        while(s.length()!=0&&s.find(part)<s.size()){
            s.erase(s.find(part),part.length());
        }
        return s;
}
int main(){
     string str;
    cout<<"Enter the main string:";
    cin>>str;
    string fin;
    cout<<"Enter the part to be removed:";
    cin>>fin;
     cout<<removeOccurences(str,fin);
 return 0;
}