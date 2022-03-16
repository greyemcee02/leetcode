#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

string removeOuterParentheses(string s) {
    string res;
    stack<char> stk;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            stk.push(s[i]);
            if(stk.size() > 1) res += s[i];
        }
        else{    
            stk.pop();
            if(!stk.empty())
                res += ")";
        }
    }
    return res;      
}


int main(){
    string s = "(()())(())(()(()))";
    cout << removeOuterParentheses(s);
    return 0;
}