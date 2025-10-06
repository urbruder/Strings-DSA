#include <iostream>
#include <vector>
#include <string>
using namespace std;

char toLowerCase(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch-'A'+'a';
    }
    return ch;
}
char maxChar(string &str, vector<int> &freq) {
    // Count frequencies
    for (int i=0;i<str.size();i++) {
        char ch=str[i];
        freq[toLowerCase(ch)-'a']++;
    }

    int maxi = -1;
    char ans = '\0';

    for (int i = 0; i < 26; i++) {
        if (maxi < freq[i]) {
            maxi = freq[i];
            ans = 'a' + i;
        }
    }

    return ans;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    vector<int> freq(26, 0);
    cout << "The maximum occurring character is: " << maxChar(str, freq) << endl;

    return 0;
}