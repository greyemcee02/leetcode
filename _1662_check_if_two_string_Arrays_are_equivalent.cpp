#include<bits/stdc++.h>

using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string str1, str2;
    for(auto it : word1)
        str1+=it;
    for(auto it : word2)
        str2+=it;
    return str1==str2;
}

int main(){
    vector<string> str1= {"a", "bc"}, str2 = {"ab", "c"};
    cout << arrayStringsAreEqual(str1, str2);
    return 0;
}