#include<bits/stdc++.h>

using namespace std;


bool isPalindrome(string s) {
    for(int i = 0; i < s.length(); i++){
        if(isalpha(s[i]) || isdigit(s[i])) s[i] = tolower(s[i]);
        else s[i] = ' ';
    }    
    stringstream ss(s);
    string token, str;
    while(ss >> token){
        str+=token;
    }
    int sz = str.length();
    for(int i = 0; i < sz/2; i++){
        if(str[i]!=str[sz-1-i]) return false;
    }
    return true;
}

int main(){
    cout << isPalindrome("0p");
    return 0;
}