#include<bits/stdc++.h>

using namespace std;

string interpret(string command) {
    string str;
    for(int i = 0; i < command.length(); i++){
        if(isalpha(command[i])) str += command[i];
        else if(command[i] == '(' && command[i+1] == ')') str += "o";
    } 
    return str;
}

int main(){
    string s = "G()(al)";
    cout << interpret(s) ;
    return 0;
}