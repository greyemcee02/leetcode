#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

bool check(char chr){
    if(chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u')
        return true;
    return false;
}

bool halvesAreAlike(string s) {
    int l = 0, r = 0, mid = s.length()/2;
    for(int i = 0; i < mid; i++){
        if(check(tolower(s[i])))
            l++;
        if(check(tolower(s[i+mid])))
            r++;
    }
    return (l == r);
}

int main(){
    string s = "MerryChristmas";
    cout << halvesAreAlike(s);
    return 0;
}
