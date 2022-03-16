#include<bits/stdc++.h>

using namespace std;

bool cmp(char a, char b){
    if(a == '(' && b == ')') return true;
    if(a == '[' && b == ']') return true;
    if(a == '{' && b == '}') return true;
    return false;
}

bool isValid(string s) {
    stack<char> stk;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i]=='(' || s[i] == '[' || s[i] == '{')
            stk.push(s[i]);
        else{
            if(stk.empty()) return false;
            char ch = stk.top();
            stk.pop();
            if(!cmp(ch, s[i])) return false;
        }
    } 
    if(!stk.empty()) return false;
    return true;
}
int main(){
    cout << isValid(")()");
    return 0;
}