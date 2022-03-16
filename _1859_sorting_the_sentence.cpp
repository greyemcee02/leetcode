#include<bits/stdc++.h>

using namespace std;

string sortSentence(string s) {
    stringstream ss(s);
    vector<string> str(9);
    string tmp, res;
    while(ss >> tmp){
        int elm = tmp[tmp.length() - 1] - '0';
        tmp.erase(tmp.length()-1);
        str[elm] = tmp;
    }
    int sz = str.size();
    res = str[0];
    for(int i = 1; i < sz - 1; i++){
        res += str[i] + ' ';
    }
    res += str[sz - 1];
    return res;
}
int main(){
    string s= "Myself2 Me1 I4 and3";
    cout << sortSentence(s);
    return 0;
}