#include<bits/stdc++.h>

using namespace std;

int maximumWealth(vector<vector<int>>& accounts) {
    int mx = 0;
    for(int i = 0; i < accounts.size(); i++){
        int cnt = 0;
        for(int j = 0; j < accounts.at(i).size(); j++)
            cnt += accounts.at(i).at(j);
        mx = max(cnt, mx);
    }
    return mx;
}

int main(){
    vector<vector<int>> vt;
    vt.resize(3);
    for(int i = 0; i < 3; i++){
        vt.at(i).resize(3);
        for(int j = 0; j < 3; j++){
            cin >> vt.at(i).at(j);
        }
    }
    cout << maximumWealth(vt);

    return 0;
}