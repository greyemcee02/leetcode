#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    string s;
    while(t--){
        getline(cin, s);
        stringstream ss(s);
        string token;
        stack<string> stk;
        while(ss >> token)
            stk.push(token);
        while(!stk.empty()){
            cout << stk.top();
            stk.pop();
            if(!stk.empty()) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
