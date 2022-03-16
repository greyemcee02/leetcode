#include<bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> vt(2000, -1);
    int left = 0, right = 0, res = 0;
    while(right < s.length()){
        if(vt[s[right]] == -1){
            vt[s[right]] = right;
        }
        else{
            if(vt[s[right]] >= left){
                res = max(res, right - left);
                left = vt[s[right]] + 1;
            }
            vt[s[right]] = right;
        }
        right++;
    }
    res = max(res, right - left );
    return res;
}

int main(){
    cout << lengthOfLongestSubstring("a b.sf .sdet");
    return 0;
}