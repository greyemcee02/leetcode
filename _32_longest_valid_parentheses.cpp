#include<bits/stdc++.h>

using namespace std;

int longestValidParentheses(string s) {
    stack<int> stk;
    stk.push(-1);
    int res = 0, cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(') stk.push(i);
        else{
            stk.pop();
            if(!stk.emty()){
                res = max(res, i - stk.top());
            }
            else
                stk.push(i);
        }
    }
    return res;
}

int main(){
    cout << longestValidParentheses("");
    return 0;
}