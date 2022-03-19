#include<iostream>
#include<string>
using namespace std;

long long maximumSubsequenceCount(string text, string pattern) {
    long long res = 0, cnt1 = 0, cnt2 = 0;
    for(int i = text.length() - 1; i >= 0; i--){
        if(text[i] == pattern[1]) cnt2++;
        else if(text[i] == pattern[0]){
            res += cnt2;
            cnt1++;
        }
    }        
    if(pattern[0] == pattern[1]){
        res = (cnt2 + 1)*(cnt2)/2;
    }
    else{
        res += max(cnt1, cnt2);
    }
    return res;
}

int main() {
    string text, pattern;
    cin >> text >> pattern;
    cout << maximumSubsequenceCount(text, pattern);
    return 0;
}