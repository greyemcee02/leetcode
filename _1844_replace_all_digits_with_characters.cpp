#include<bits/stdc++.h>

using namespace std;

string replaceDigits(string s) {
    int len = s.length();
    for(int i = 0; i < len; i++){
        if(isdigit(s[i]))
            s[i] = s[i-1] + (s[i]-'0');
    }
    return s;
}

int main(){
    string s= "a1c1e1";
    cout << replaceDigits(s);
    return 0;
}