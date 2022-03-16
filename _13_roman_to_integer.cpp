#include<bits/stdc++.h>

using namespace std;

int convert(char ch){
    if(ch == 'M') return 1000;
    if(ch == 'D') return 500;
    if(ch == 'C') return 100;
    if(ch == 'L') return 50;
    if(ch == 'X') return 10;
    if(ch == 'V') return 5;
    return 1;
}

int romanToInt(string s) {
    int res = 0, sz = s.length();
    res += convert(s[sz - 1]);
    for(int i = sz - 2; i>=0;i--){
        int tmp = convert(s[i]);
        if(tmp < convert(s[i+1])) res-=tmp;
        else res+=tmp;
    }
    return res;
}

int main(){
    cout << romanToInt("MCMXCIV");
    return 0;
}