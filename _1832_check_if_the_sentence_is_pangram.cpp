#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;

bool checkIfPangram(string sentence) {
    int check[200] = {};
    int cnt = 0;
    for(int i = 0; i < sentence.length(); i++){
        if(!check[sentence[i]]){
            cnt++;
            check[sentence[i]] = 1;
        }
    }   
    return (cnt == 26);
}


int main(){
    string s = "leetcode";
    cout << checkIfPangram(s);
    return 0;
}