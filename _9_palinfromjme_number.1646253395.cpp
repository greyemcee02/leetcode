#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPalindrome(int x) {
    if(x < 0) return false;
    string s = to_string(x);
    int sz = s.length();
    for(int i = 0; i < sz/2; i++)
        if(s[i] != s[sz - i - 1]) return false;
    return true;
}

int main(){
    cout << isPalindrome(1);
    return 0;
}
