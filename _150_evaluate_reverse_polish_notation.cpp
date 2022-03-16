#include<bits/stdc++.h>

using namespace std;

int solve(int bf, int at, string cal){
    if(cal == "+") return bf+at;
    if(cal == "-") return bf-at;
    if(cal == "*") return bf*at;
    return bf/at;
}

int evalRPN(vector<string>& tokens) {
    stack<int> stk;
    for(int i = 0; i < tokens.size(); i++){
        if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
            int t, s;
            s = stk.top();
            stk.pop();
            t = stk.top();
            stk.pop();
            int rs = solve(t, s, tokens[i]);
            stk.push(rs);
        }
        else{
            istringstream is(tokens[i]);
            int tk;
            is >> tk;
            stk.push(tk);
        }
    }
    return stk.top();
}

int main(){
    vector<string> tokens ={"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout << evalRPN(tokens);
    return 0;
}