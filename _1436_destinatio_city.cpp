#include<bits/stdc++.h>

using namespace std;

string destCity(vector<vector<string>>& paths) {
    map<string,string> mp;
    for(int i =0; i < paths.size(); i++){
        mp.insert({paths[i][0], paths[i][1]});
    }        
    string res = paths[0][1];
    while(mp[res]!="")
        res = mp[res];
    return res;
}

int main(){
    vector<vector<string>> vt = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    cout << destCity(vt);
    return 0;
}