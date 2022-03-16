#include<bits/stdc++.h>

using namespace std;

string longestPalindrome(string s) {
    int sz = s.length(), l = 0, r = 0;
    vector<vector<int>> vt(sz, vector<int> (sz, 0));
    for(int i = 0; i < sz; i++){
        vt[i][i] = 1;
        if(i < sz - 1)
        vt[i+1][i] = 1;
    }
    for(int i = sz-1; i >= 0; i--){
        for(int j = i + 1; j < sz; j++){
            if(s[i] == s[j] && vt[i+1][j-1]){
                vt[i][j] = 1;
                if(j - i + 1 > r - l + 1){
                    l = i;
                    r = j;
                }
            }
        }
    }
    string str;
    for(int i = l; i <= r; i++)
        str+=s[i];
    return str;
}

int main(){
    string s = "aaaa";
    cout << longestPalindrome(s);
    return 0;
}