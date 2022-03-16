#include<bits/stdc++.h>

using namespace std;

string s[9] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string st="";
vector<string> res;
vector<int> tp;
int n;
void Try(int i){
    for(int j =0; j < s[tp[i]].length(); j++){
        st+=s[tp[i]][j];
        if(i==n - 1){
            res.push_back(st);
        }
        else{
            Try(i+1);
        }
        st.erase(st.length()-1, 1);
    }
}

vector<string> letterCombinations(string digits) { 
    n = digits.length();
    if(n>0){
        for(int i = 0; i < digits.length(); i++){
        tp.push_back(digits[i]-'2');
        }
        Try(0);
    }         
    vector<string> ss = res;
    return ss;
}

int main(){
    string digits = "2";
    vector<string> vt = letterCombinations(digits);
    for(int i = 0; i < vt.size(); i++){
        cout << vt[i];
        cout << endl;
    }
    return 0;
}