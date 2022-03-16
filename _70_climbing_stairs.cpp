#include<bits/stdc++.h>

using namespace std;

int climbStairs(int n) {
    vector<int> vt;
    vt.push_back(1);
    vt.push_back(1);
    for(int i = 2; i <= n; i++)
        vt.push_back(vt[i-1] + vt[i-2]);
    return vt[n];
}

int main(){
    cout << climbStairs(4);
    return 0;
}