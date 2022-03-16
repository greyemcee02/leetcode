#include<bits/stdc++.h>

using namespace std;

int finalValueAfterOperations(vector<string>& operations) {
    int s = 0;
    for(auto i = operations.begin(); i != operations.end(); ++i){
        if(*i == "X++" || *i == "++X") ++s;
        else --s;
    }
    return s;
}

int main(){
    vector<string> vt = {"++X","++X","X++"};
    cout << finalValueAfterOperations(vt);
    return 0;
}