#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

int balancedStringSplit(string s) {
    int l = 0, r = 0, cnt = 0;
    for(int i = 0 ; i < s.length(); i++){
        if(s[i] == 'L') l++;
        else r++;
        if(l == r){
            l = 0;
            r = 0;
            cnt ++;
        }
    }        
    return cnt;
}


int main(){
    string s = "RLRRRLLRLL";
    cout << balancedStringSplit(s);
    return 0;
}