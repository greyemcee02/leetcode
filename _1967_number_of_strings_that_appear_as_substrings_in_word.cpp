#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

int numOfStrings(vector<string>& patterns, string word) {
    int cnt = 0;
    for(int i = 0; i < patterns.size(); i++)
        if(word.find(patterns[i]) != string::npos) cnt++; 
    return cnt;
}

int main(){
     vector<string> patterns = {"a","b","c"};
     cout << numOfStrings(patterns, "aaaaaabbbbb");
    return 0;
}
