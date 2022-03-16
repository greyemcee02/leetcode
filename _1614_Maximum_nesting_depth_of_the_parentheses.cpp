#include<bits/stdc++.h>

using namespace std;

int maxDepth(string s) {
    int res = 0, cnt = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '('){
            cnt++;
        }
        else if(s[i] == ')'){
            cnt--;
        }
        res = max(res, cnt);
    }   
   
   return res;  
}

int main(){
    string s = "(1+(2*3)+((8)/4))+1";
    cout << maxDepth(s);
    return 0;
}