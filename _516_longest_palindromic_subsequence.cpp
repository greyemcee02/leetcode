#include<bits/stdc++.h>

using namespace std;

int longestPalindromeSubseq(string s) {
    int sz = s.length(), mx = 1;
    vector<vector<int>> vt(sz, vector<int> (sz, 0));
    for(int i = 0; i < sz; i++){
        vt[i][i] = 1;
        if(i < sz - 1)
        vt[i+1][i] = 1;
    }
    for(int i = sz-1; i >= 0; i--){
        for(int j = i + 1; j < sz; j++){
            if(s[i] == s[j] && vt[i+1][j-1]){
                vt[i][j] = vt[i+1][j-1] + 2;
                if(j - i + 1 > mx)
                    mx = j - i + 1;
            }
        }
    }
    return mx;
}

int main(){
    string s = "aaaa";
    cout << longestPalindromeSubseq(s);
    return 0;
}