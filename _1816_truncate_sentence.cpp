#include<bits/stdc++.h>

using namespace std;

string truncateSentence(string s, int k) {
    stringstream ss(s);
    string str, token;
    while(ss >> token){
        if(k > 0){
            str+=token;
            k--;
            if(k > 0) str+=' ';
        }
    }
    return str;
}

int main(){
    string s= "Hello how are you Contestant";
    cout << truncateSentence(s, 4);
    return 0;
}