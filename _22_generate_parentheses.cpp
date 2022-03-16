#include<bits/stdc++.h>

using namespace std;

vector<string> res;

void Try(int open, int close, string s){
    if(open == 0 && close == 0){
        res.push_back(s);
        return ;
    }
    if(open  > 0){
        Try(open-1,close, s+'(');
    }
    if(close > open)
        Try(open, close-1, s+')');
}

vector<string> generateParenthesis(int n) {
    string str;    
    Try(n, n, str);
    return res;
}

int main(){
    vector<string> res = generateParenthesis(4);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    return 0;
}