#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

int check[12] = {0}, mncr[22] = {0}, sdcr[22] ={0};
int sz, vt[10];

vector<vector<string>> res;

void solve(){
    vector<string> tmp;
    for(int i = 0; i < sz; i++){
        string s(sz, '.');
        s[vt[i]] = 'Q';
        tmp.push_back(s);
    }
    res.push_back(tmp);
}


void Try(int i){
    for(int j = 0; j < sz; j++){
        if(!check[j] && !mncr[i-j+sz] && !sdcr[i+j+1]){
            vt[i] = j;
            check[j] = 1;
            mncr[i-j+sz] = 1;
            sdcr[i+j+1] = 1;
            if(i == sz-1){
                solve();
            }           
            else Try(i+1);
            check[j] = 0;
            mncr[i-j+sz] = 0;
            sdcr[i+j+1] = 0;
        }
    }
}

vector<vector<string>> solveNQueens(int n) {
    sz = n;
    Try(0);
    return res;
}

void in(vector<string> str){
    for(int i = 0; i <str.size(); i++)
        cout << str[i] << endl;
    cout << endl;
}

int main(){
    vector<vector<string>> rs = solveNQueens(4);
    for(int i = 0; i < rs.size(); i++){
        in(rs[i]);
    }
    return 0;
}