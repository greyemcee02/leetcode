#include<bits/stdc++.h>
#include<vector>
using namespace std;

int lengthOfLastWord(string s) {
    stringstream ss(s);
    string token;
    while(ss >> token);
    return token.length();
}

int main(){
    vector<int> nums = {1,2,3};
    return 0;
}